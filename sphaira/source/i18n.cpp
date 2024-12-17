#include "i18n.hpp"
#include "fs.hpp"
#include "log.hpp"
#include <yyjson.h>
#include <vector>

namespace sphaira::i18n {
namespace {

std::vector<u8> g_i18n_data;
yyjson_doc* json;
yyjson_val* root;

std::string get(const char* str, size_t len) {
    if (!json || !root) {
        log_write("no json or root\n");
        return str;
    }

    auto key = yyjson_obj_getn(root, str, len);
    if (!key) {
        log_write("\tfailed to find key: [%.*s]\n", len, str);
        return str;
    }

    auto val = yyjson_get_str(key);
    auto val_len = yyjson_get_len(key);
    if (!val || !val_len) {
        log_write("\tfailed to get value: [%.*s]\n", len, str);
        return str;
    }

    return {val, val_len};
}

} // namespace

bool init(long index) {
    R_TRY_RESULT(romfsInit(), false);
    ON_SCOPE_EXIT( romfsExit() );

    u64 languageCode;
    SetLanguage setLanguage = SetLanguage_ENGB;

    switch (index) {
        case 0: // auto
            if (R_SUCCEEDED(setGetSystemLanguage(&languageCode))) {
                setMakeLanguage(languageCode, &setLanguage);
            }
            break;

        case 1: setLanguage = SetLanguage_ENGB; break; // "English"
        case 2: setLanguage = SetLanguage_JA; break; // "Japanese"
        case 3: setLanguage = SetLanguage_FR; break; // "French"
        case 4: setLanguage = SetLanguage_DE; break; // "German"
        case 5: setLanguage = SetLanguage_IT; break; // "Italian"
        case 6: setLanguage = SetLanguage_ES; break; // "Spanish"
        case 7: setLanguage = SetLanguage_ZHCN; break; // "Chinese"
        case 8: setLanguage = SetLanguage_KO; break; // "Korean"
        case 9: setLanguage = SetLanguage_NL; break; // "Dutch"
        case 10: setLanguage = SetLanguage_PT; break; // "Portuguese"
        case 11: setLanguage = SetLanguage_RU; break; // "Russian"
    }

    std::string lang_name;
    switch (setLanguage) {
        case SetLanguage_JA: lang_name = "ja"; break;
        case SetLanguage_FR: lang_name = "fr"; break;
        case SetLanguage_DE: lang_name = "de"; break;
        case SetLanguage_IT: lang_name = "it"; break;
        case SetLanguage_ES: lang_name = "es"; break;
        case SetLanguage_ZHCN: lang_name = "zh"; break;
        case SetLanguage_KO: lang_name = "ko"; break;
        case SetLanguage_NL: lang_name = "nl"; break;
        case SetLanguage_PT: lang_name = "pt"; break;
        case SetLanguage_RU: lang_name = "ru"; break;
        case SetLanguage_ZHTW: lang_name = "zh"; break;
        default: lang_name = "en"; break;
    }

    const fs::FsPath path = "romfs:/i18n/" + lang_name + ".json";
    if (R_SUCCEEDED(fs::FsStdio().read_entire_file(path, g_i18n_data))) {
        json = yyjson_read((const char*)g_i18n_data.data(), g_i18n_data.size(), YYJSON_READ_ALLOW_TRAILING_COMMAS|YYJSON_READ_ALLOW_COMMENTS|YYJSON_READ_ALLOW_INVALID_UNICODE);
        if (json) {
            root = yyjson_doc_get_root(json);
            if (root) {
                log_write("opened json: %s\n", path.s);
                return true;
            } else {
                log_write("failed to find root\n");
            }
        } else {
            log_write("failed open json\n");
        }
    } else {
        log_write("failed to read file\n");
    }

    return false;
}

void exit() {
    if (json) {
        yyjson_doc_free(json);
        json = nullptr;
    }
    g_i18n_data.clear();
}

} // namespace sphaira::i18n

namespace literals {

std::string operator"" _i18n(const char* str, size_t len) {
    return sphaira::i18n::get(str, len);
}

} // namespace literals