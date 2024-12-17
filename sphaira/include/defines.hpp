#pragma once

#include <switch.h>
#include <experimental/scope>

enum {
    Module_Svc = 1,
    Module_Fs = 2,
    Module_Os = 3,
    Module_Htcs = 4,
    Module_Ncm = 5,
    Module_Dd = 6,
    Module_Osdbg = 7,
    Module_Lr = 8,
    Module_Ldr = 9,
    Module_Sf = 10,
    Module_Sf_Hipc = 11,
    Module_Tma = 12,
    Module_Dmnt = 13,
    Module_Gds = 14,
    Module_Pm = 15,
    Module_Ns = 16,
    Module_Bsdsockets = 17,
    Module_Htc = 18,
    Module_Tsc = 19,
    Module_Kvdb = 20,
    Module_Sm = 21,
    Module_Ro = 22,
    Module_Gc = 23,
    Module_Sdmmc = 24,
    Module_Ovln = 25,
    Module_Spl = 26,
    Module_Socket = 27,
    Module_Htclow = 29,
    Module_Ddsf = 30,
    Module_Htcfs = 31,
    Module_Async = 32,
    Module_Util = 33,
    Module_Tipc = 35,
    Module_Anif = 37,
    Module_Crt = 39,
    Module_Eth = 100,
    Module_I2c = 101,
    Module_Gpio = 102,
    Module_Uart = 103,
    Module_Cpad = 104,
    Module_Settings = 105,
    Module_Ftm = 106,
    Module_Wlan = 107,
    Module_Xcd = 108,
    Module_Tmp451 = 109,
    Module_Nifm = 110,
    Module_Codec = 111,
    Module_Lsm6ds3 = 112,
    Module_Bluetooth = 113,
    Module_Vi = 114,
    Module_Nfp = 115,
    Module_Time = 116,
    Module_Fgm = 117,
    Module_Oe = 118,
    Module_Bh1730fvc = 119,
    Module_Pcie = 120,
    Module_Friends = 121,
    Module_Bcat = 122,
    Module_Ssl = 123,
    Module_Account = 124,
    Module_News = 125,
    Module_Mii = 126,
    Module_Nfc = 127,
    Module_Am = 128,
    Module_Prepo = 129,
    Module_Ahid = 130,
    Module_Applet = 131,
    Module_Ae = 132,
    Module_Pcv = 133,
    Module_Usb_Pd = 134,
    Module_Bpc = 135,
    Module_Psm = 136,
    Module_Nim = 137,
    Module_Psc = 138,
    Module_Tc = 139,
    Module_Usb = 140,
    Module_Nsd = 141,
    Module_Pctl = 142,
    Module_Btm = 143,
    Module_La = 144,
    Module_Es = 145,
    Module_Ngc = 146,
    Module_Erpt = 147,
    Module_Apm = 148,
    Module_Cec = 149,
    Module_Profiler = 150,
    Module_Eupld = 151,
    Module_Lidbe = 152,
    Module_Audio = 153,
    Module_Npns = 154,
    Module_Http = 155,
    Module_Idle = 156,
    Module_Arp = 157,
    Module_Updater = 158,
    Module_Swkbd = 159,
    Module_Netdiag = 160,
    Module_Nfc_Mifare = 161,
    Module_Err = 162,
    Module_Fatal = 163,
    Module_Ec = 164,
    Module_Spsm = 165,
    Module_Aoc = 166,
    Module_Bgtc = 167,
    Module_Creport = 168,
    Module_Sasbus = 169,
    Module_Pl = 170,
    Module_Audioctrl = 172,
    Module_Lbl = 173,
    Module_Jit = 175,
    Module_Hdcp = 176,
    Module_Omm = 177,
    Module_Pdm = 178,
    Module_Olsc = 179,
    Module_Srepo = 180,
    Module_Dauth = 181,
    Module_Stdfu = 182,
    Module_Dbg = 183,
    Module_Dhcps = 186,
    Module_Spi = 187,
    Module_Avm = 188,
    Module_Pwm = 189,
    Module_Rtc = 191,
    Module_Regulator = 192,
    Module_Led = 193,
    Module_Sio = 195,
    Module_Pcm = 196,
    Module_Clkrst = 197,
    Module_Powctl = 198,
    Module_Audio_Old = 201,
    Module_Hid = 202,
    Module_Ldn = 203,
    Module_Cs = 204,
    Module_Irsensor = 205,
    Module_Capsrv = 206,
    Module_Manu = 208,
    Module_Atk = 209,
    Module_Web = 210,
    Module_Lcs = 211,
    Module_Grc = 212,
    Module_Repair = 213,
    Module_Album = 214,
    Module_Rid = 215,
    Module_Migration = 216,
    Module_Migration_Idc = 217,
    Module_Hidbus = 218,
    Module_Ens = 219,
    Module_Websocket = 223,
    Module_Dcdmtp = 227,
    Module_Pgl = 228,
    Module_Notification = 229,
    Module_Ins = 230,
    Module_Lp2p = 231,
    Module_Rcd = 232,
    Module_Icm40607 = 233,
    Module_Prc = 235,
    Module_Tma_Htc = 237,
    Module_Ectx = 238,
    Module_Mnpp = 239,
    Module_Hshl = 240,
    Module_Capmtp = 242,
    Module_Dp2hdmi = 244,
    Module_Cradle = 245,
    Module_Sprofile = 246,
    Module_Icm42607p = 248,
    Module_Ndrm = 250,
    Module_Fst2 = 251,
    Module_Nex = 306,
    Module_Npln = 321,
    Module_Tspm = 499,
    Module_Devmenu = 500,
};

enum SvcError {
    SvcError_OutOfSessions = 0xE01,
    SvcError_InvalidArgument = 0x1C01,
    SvcError_NotImplemented = 0x4201,
    SvcError_StopProcessingException = 0x6C01,
    SvcError_NoSynchronizationObject = 0x7201,
    SvcError_TerminationRequested = 0x7601,
    SvcError_NoEvent = 0x8C01,
    SvcError_InvalidSize = 0xCA01,
    SvcError_InvalidAddress = 0xCC01,
    SvcError_OutOfResource = 0xCE01,
    SvcError_OutOfMemory = 0xD001,
    SvcError_OutOfHandles = 0xD201,
    SvcError_InvalidCurrentMemory = 0xD401,
    SvcError_InvalidNewMemoryPermission = 0xD801,
    SvcError_InvalidMemoryRegion = 0xDC01,
    SvcError_InvalidPriority = 0xE001,
    SvcError_InvalidCoreId = 0xE201,
    SvcError_InvalidHandle = 0xE401,
    SvcError_InvalidPointer = 0xE601,
    SvcError_InvalidCombination = 0xE801,
    SvcError_TimedOut = 0xEA01,
    SvcError_Cancelled = 0xEC01,
    SvcError_OutOfRange = 0xEE01,
    SvcError_InvalidEnumValue = 0xF001,
    SvcError_NotFound = 0xF201,
    SvcError_Busy = 0xF401,
    SvcError_SessionClosed = 0xF601,
    SvcError_NotHandled = 0xF801,
    SvcError_InvalidState = 0xFA01,
    SvcError_ReservedUsed = 0xFC01,
    SvcError_NotSupported = 0xFE01,
    SvcError_Debug = 0x10001,
    SvcError_NoThread = 0x10201,
    SvcError_UnknownThread = 0x10401,
    SvcError_PortClosed = 0x10601,
    SvcError_LimitReached = 0x10801,
    SvcError_InvalidMemoryPool = 0x10A01,
    SvcError_ReceiveListBroken = 0x20401,
    SvcError_OutOfAddressSpace = 0x20601,
    SvcError_MessageTooLarge = 0x20801,
    SvcError_InvalidProcessId = 0x40A01,
    SvcError_InvalidThreadId = 0x40C01,
    SvcError_InvalidId = 0x40E01,
    SvcError_ProcessTerminated = 0x41001,
};

enum FsError {
    FsError_ResultPathNotFound = 0x202,
    FsError_ResultPathAlreadyExists = 0x402,
    FsError_ResultTargetLocked = 0xE02,
    FsError_UsableSpaceNotEnoughMmcCalibration = 0x4602,
    FsError_UsableSpaceNotEnoughMmcSafe = 0x4802,
    FsError_UsableSpaceNotEnoughMmcUser = 0x4A02,
    FsError_UsableSpaceNotEnoughMmcSystem = 0x4C02,
    FsError_ResultUsableSpaceNotEnoughSdCard = 0x4E02,
    FsError_ResultUnsupportedSdkVersion = 0x6402,
    FsError_ResultMountNameAlreadyExists = 0x7802,
    FsError_ResultPartitionNotFound = 0x7D202,
    FsError_ResultTargetNotFound = 0x7D402,
    FsError_PortSdCardNoDevice = 0xFA202,
    FsError_GameCardCardNotInserted = 0x13B002,
    FsError_GameCardCardNotActivated = 0x13B402,
    FsError_GameCardInvalidSecureAccess = 0x13D802,
    FsError_GameCardInvalidNormalAccess = 0x13DA02,
    FsError_GameCardInvalidAccessAcrossMode = 0x13DC02,
    FsError_GameCardInitialDataMismatch = 0x13E002,
    FsError_GameCardInitialNotFilledWithZero = 0x13E202,
    FsError_GameCardKekIndexMismatch = 0x13E402,
    FsError_GameCardCardHeaderReadFailure = 0x13EE02,
    FsError_GameCardShouldTransitFromInitialToNormal = 0x145002,
    FsError_GameCardShouldTransitFromNormalModeToSecure = 0x145202,
    FsError_GameCardShouldTransitFromNormalModeToDebug = 0x145402,
    FsError_GameCardSendFirmwareFailure = 0x149402,
    FsError_GameCardReceiveCertificateFailure = 0x149A02,
    FsError_GameCardSendSocCertificateFailure = 0x14A002,
    FsError_GameCardReceiveRandomValueFailure = 0x14AA02,
    FsError_GameCardSendRandomValueFailure = 0x14AC02,
    FsError_GameCardReceiveDeviceChallengeFailure = 0x14B602,
    FsError_GameCardRespondDeviceChallengeFailure = 0x14B802,
    FsError_GameCardSendHostChallengeFailure = 0x14BA02,
    FsError_GameCardReceiveChallengeResponseFailure = 0x14BC02,
    FsError_GameCardChallengeAndResponseFailure = 0x14BE02,
    FsError_GameCardSplGenerateRandomBytesFailure = 0x14D802,
    FsError_GameCardReadRegisterFailure = 0x14DE02,
    FsError_GameCardWriteRegisterFailure = 0x14E002,
    FsError_GameCardEnableCardBusFailure = 0x14E202,
    FsError_GameCardGetCardHeaderFailure = 0x14E402,
    FsError_GameCardAsicStatusError = 0x14E602,
    FsError_GameCardChangeGcModeToSecureFailure = 0x14E802,
    FsError_GameCardChangeGcModeToDebugFailure = 0x14EA02,
    FsError_GameCardReadRmaInfoFailure = 0x14EC02,
    FsError_GameCardStateCardSecureModeRequired = 0x150802,
    FsError_GameCardStateCardDebugModeRequired = 0x150A02,
    FsError_GameCardCommandReadId1Failure = 0x155602,
    FsError_GameCardCommandReadId2Failure = 0x155802,
    FsError_GameCardCommandReadId3Failure = 0x155A02,
    FsError_GameCardCommandReadPageFailure = 0x155E02,
    FsError_GameCardCommandWritePageFailure = 0x156202,
    FsError_GameCardCommandRefreshFailure = 0x156402,
    FsError_GameCardCommandReadCrcFailure = 0x156C02,
    FsError_GameCardCommandEraseFailure = 0x156E02,
    FsError_GameCardCommandReadDevParamFailure = 0x157002,
    FsError_GameCardCommandWriteDevParamFailure = 0x157202,
    FsError_GameCardDebugCardReceivedIdMismatch = 0x16B002,
    FsError_GameCardDebugCardId1Mismatch = 0x16B202,
    FsError_GameCardDebugCardId2Mismatch = 0x16B402,
    FsError_GameCardFsCheckHandleInGetStatusFailure = 0x171402,
    FsError_GameCardFsCheckHandleInCreateReadOnlyFailure = 0x172002,
    FsError_GameCardFsCheckHandleInCreateSecureReadOnlyFailure = 0x172202,
    FsError_ResultNotImplemented = 0x177202,
    FsError_ResultAlreadyExists = 0x177602,
    FsError_ResultOutOfRange = 0x177A02,
    FsError_AllocationMemoryFailedInFatFileSystemA = 0x190202,
    FsError_AllocationMemoryFailedInFatFileSystemB = 0x190402,
    FsError_AllocationMemoryFailedInFatFileSystemC = 0x190602,
    FsError_AllocationMemoryFailedInFatFileSystemD = 0x190802,
    FsError_AllocationMemoryFailedInFatFileSystemE = 0x190A02,
    FsError_AllocationMemoryFailedInFatFileSystemF = 0x190C02,
    FsError_AllocationMemoryFailedInFatFileSystemG = 0x190E02,
    FsError_AllocationMemoryFailedInFatFileSystemH = 0x191002,
    FsError_AllocationMemoryFailedInSdCardA = 0x195802,
    FsError_AllocationMemoryFailedInSdCardB = 0x195A02,
    FsError_AllocationMemoryFailedInSystemSaveDataA = 0x195C02,
    FsError_AllocationMemoryFailedInRomFsFileSystemA = 0x195E02,
    FsError_AllocationMemoryFailedInRomFsFileSystemB = 0x196002,
    FsError_AllocationMemoryFailedInRomFsFileSystemC = 0x196202,
    FsError_AllocationMemoryFailedInSdmmcStorageServiceA = 0x1A3E02,
    FsError_AllocationMemoryFailedInBuiltInStorageCreatorA = 0x1A4002,
    FsError_AllocationMemoryFailedInRegisterA = 0x1A4A02,
    FsError_IncorrectSaveDataFileSystemMagicCode = 0x21BC02,
    FsError_InvalidAcidFileSize = 0x234202,
    FsError_InvalidAcidSize = 0x234402,
    FsError_InvalidAcid = 0x234602,
    FsError_AcidVerificationFailed = 0x234802,
    FsError_InvalidNcaSignature = 0x234A02,
    FsError_NcaHeaderSignature1VerificationFailed = 0x234C02,
    FsError_NcaHeaderSignature2VerificationFailed = 0x234E02,
    FsError_NcaFsHeaderHashVerificationFailed = 0x235002,
    FsError_InvalidNcaKeyIndex = 0x235202,
    FsError_InvalidNcaFsHeaderEncryptionType = 0x235602,
    FsError_InvalidNcaPatchInfoIndirectSize = 0x235802,
    FsError_InvalidNcaPatchInfoAesCtrExSize = 0x235A02,
    FsError_InvalidNcaPatchInfoAesCtrExOffset = 0x235C02,
    FsError_InvalidNcaId = 0x235E02,
    FsError_InvalidNcaHeader = 0x236002,
    FsError_InvalidNcaFsHeader = 0x236202,
    FsError_InvalidHierarchicalSha256BlockSize = 0x236802,
    FsError_InvalidHierarchicalSha256LayerCount = 0x236A02,
    FsError_HierarchicalSha256BaseStorageTooLarge = 0x236C02,
    FsError_HierarchicalSha256HashVerificationFailed = 0x236E02,
    FsError_InvalidSha256PartitionHashTarget = 0x244402,
    FsError_Sha256PartitionHashVerificationFailed = 0x244602,
    FsError_PartitionSignatureVerificationFailed = 0x244802,
    FsError_Sha256PartitionSignatureVerificationFailed = 0x244A02,
    FsError_InvalidPartitionEntryOffset = 0x244C02,
    FsError_InvalidSha256PartitionMetaDataSize = 0x244E02,
    FsError_InvalidFatFileNumber = 0x249802,
    FsError_InvalidFatFormatBisUser = 0x249C02,
    FsError_InvalidFatFormatBisSystem = 0x249E02,
    FsError_InvalidFatFormatBisSafe = 0x24A002,
    FsError_InvalidFatFormatBisCalibration = 0x24A202,
    FsError_AesXtsFileSystemFileHeaderCorruptedOnFileOpen = 0x250E02,
    FsError_AesXtsFileSystemFileNoHeaderOnFileOpen = 0x251002,
    FsError_FatFsFormatUnsupportedSize = 0x280202,
    FsError_FatFsFormatInvalidBpb = 0x280402,
    FsError_FatFsFormatInvalidParameter = 0x280602,
    FsError_FatFsFormatIllegalSectorsA = 0x280802,
    FsError_FatFsFormatIllegalSectorsB = 0x280A02,
    FsError_FatFsFormatIllegalSectorsC = 0x280C02,
    FsError_FatFsFormatIllegalSectorsD = 0x280E02,
    FsError_UnexpectedInMountTableA = 0x296A02,
    FsError_ResultTooLongPath = 0x2EE602,
    FsError_ResultInvalidCharacter = 0x2EE802,
    FsError_ResultInvalidPathFormat = 0x2EEA02,
    FsError_ResultDirectoryUnobtainable = 0x2EEC02,
    FsError_ResultInvalidOffset = 0x2F5A02,
    FsError_ResultInvalidSize = 0x2F5C02,
    FsError_ResultNullptrArgument = 0x2F5E02,
    FsError_ResultInvalidAlignment = 0x2F6002,
    FsError_ResultInvalidMountName = 0x2F6202,
    FsError_ResultExtensionSizeTooLarge = 0x2F6402,
    FsError_ResultExtensionSizeInvalid = 0x2F6602,
    FsError_ResultFileExtensionWithoutOpenModeAllowAppend = 0x307202,
    FsError_UnsupportedCommitTarget = 0x313A02,
    FsError_UnsupportedSetSizeForNotResizableSubStorage = 0x313C02,
    FsError_UnsupportedSetSizeForResizableSubStorage = 0x313E02,
    FsError_UnsupportedSetSizeForMemoryStorage = 0x314002,
    FsError_UnsupportedOperateRangeForMemoryStorage = 0x314202,
    FsError_UnsupportedOperateRangeForFileStorage = 0x314402,
    FsError_UnsupportedOperateRangeForFileHandleStorage = 0x314602,
    FsError_UnsupportedOperateRangeForSwitchStorage = 0x314802,
    FsError_UnsupportedOperateRangeForStorageServiceObjectAdapter = 0x314A02,
    FsError_UnsupportedWriteForAesCtrCounterExtendedStorage = 0x314C02,
    FsError_UnsupportedSetSizeForAesCtrCounterExtendedStorage = 0x314E02,
    FsError_UnsupportedOperateRangeForAesCtrCounterExtendedStorage = 0x315002,
    FsError_UnsupportedWriteForAesCtrStorageExternal = 0x315202,
    FsError_UnsupportedSetSizeForAesCtrStorageExternal = 0x315402,
    FsError_UnsupportedSetSizeForAesCtrStorage = 0x315602,
    FsError_UnsupportedSetSizeForHierarchicalIntegrityVerificationStorage = 0x315802,
    FsError_UnsupportedOperateRangeForHierarchicalIntegrityVerificationStorage = 0x315A02,
    FsError_UnsupportedSetSizeForIntegrityVerificationStorage = 0x315C02,
    FsError_UnsupportedOperateRangeForWritableIntegrityVerificationStorage = 0x315E02,
    FsError_UnsupportedOperateRangeForIntegrityVerificationStorage = 0x316002,
    FsError_UnsupportedSetSizeForBlockCacheBufferedStorage = 0x316202,
    FsError_UnsupportedOperateRangeForWritableBlockCacheBufferedStorage = 0x316402,
    FsError_UnsupportedOperateRangeForBlockCacheBufferedStorage = 0x316602,
    FsError_UnsupportedWriteForIndirectStorage = 0x316802,
    FsError_UnsupportedSetSizeForIndirectStorage = 0x316A02,
    FsError_UnsupportedOperateRangeForIndirectStorage = 0x316C02,
    FsError_UnsupportedWriteForZeroStorage = 0x316E02,
    FsError_UnsupportedSetSizeForZeroStorage = 0x317002,
    FsError_UnsupportedSetSizeForHierarchicalSha256Storage = 0x317202,
    FsError_UnsupportedWriteForReadOnlyBlockCacheStorage = 0x317402,
    FsError_UnsupportedSetSizeForReadOnlyBlockCacheStorage = 0x317602,
    FsError_UnsupportedSetSizeForIntegrityRomFsStorage = 0x317802,
    FsError_UnsupportedSetSizeForDuplexStorage = 0x317A02,
    FsError_UnsupportedOperateRangeForDuplexStorage = 0x317C02,
    FsError_UnsupportedSetSizeForHierarchicalDuplexStorage = 0x317E02,
    FsError_UnsupportedGetSizeForRemapStorage = 0x318002,
    FsError_UnsupportedSetSizeForRemapStorage = 0x318202,
    FsError_UnsupportedOperateRangeForRemapStorage = 0x318402,
    FsError_UnsupportedSetSizeForIntegritySaveDataStorage = 0x318602,
    FsError_UnsupportedOperateRangeForIntegritySaveDataStorage = 0x318802,
    FsError_UnsupportedSetSizeForJournalIntegritySaveDataStorage = 0x318A02,
    FsError_UnsupportedOperateRangeForJournalIntegritySaveDataStorage = 0x318C02,
    FsError_UnsupportedGetSizeForJournalStorage = 0x318E02,
    FsError_UnsupportedSetSizeForJournalStorage = 0x319002,
    FsError_UnsupportedOperateRangeForJournalStorage = 0x319202,
    FsError_UnsupportedSetSizeForUnionStorage = 0x319402,
    FsError_UnsupportedSetSizeForAllocationTableStorage = 0x319602,
    FsError_UnsupportedReadForWriteOnlyGameCardStorage = 0x319802,
    FsError_UnsupportedSetSizeForWriteOnlyGameCardStorage = 0x319A02,
    FsError_UnsupportedWriteForReadOnlyGameCardStorage = 0x319C02,
    FsError_UnsupportedSetSizeForReadOnlyGameCardStorage = 0x319E02,
    FsError_UnsupportedOperateRangeForReadOnlyGameCardStorage = 0x31A002,
    FsError_UnsupportedSetSizeForSdmmcStorage = 0x31A202,
    FsError_UnsupportedOperateRangeForSdmmcStorage = 0x31A402,
    FsError_UnsupportedOperateRangeForFatFile = 0x31A602,
    FsError_UnsupportedOperateRangeForStorageFile = 0x31A802,
    FsError_UnsupportedSetSizeForInternalStorageConcatenationFile = 0x31AA02,
    FsError_UnsupportedOperateRangeForInternalStorageConcatenationFile = 0x31AC02,
    FsError_UnsupportedQueryEntryForConcatenationFileSystem = 0x31AE02,
    FsError_UnsupportedOperateRangeForConcatenationFile = 0x31B002,
    FsError_UnsupportedSetSizeForZeroBitmapFile = 0x31B202,
    FsError_UnsupportedOperateRangeForFileServiceObjectAdapter = 0x31B402,
    FsError_UnsupportedOperateRangeForAesXtsFile = 0x31B602,
    FsError_UnsupportedWriteForRomFsFileSystem = 0x31B802,
    FsError_UnsupportedCommitProvisionallyForRomFsFileSystem = 0x31BA02,
    FsError_UnsupportedGetTotalSpaceSizeForRomFsFileSystem = 0x31BC02,
    FsError_UnsupportedWriteForRomFsFile = 0x31BE02,
    FsError_UnsupportedOperateRangeForRomFsFile = 0x31C002,
    FsError_UnsupportedWriteForReadOnlyFileSystem = 0x31C202,
    FsError_UnsupportedCommitProvisionallyForReadOnlyFileSystem = 0x31C402,
    FsError_UnsupportedGetTotalSpaceSizeForReadOnlyFileSystem = 0x31C602,
    FsError_UnsupportedWriteForReadOnlyFile = 0x31C802,
    FsError_UnsupportedOperateRangeForReadOnlyFile = 0x31CA02,
    FsError_UnsupportedWriteForPartitionFileSystem = 0x31CC02,
    FsError_UnsupportedCommitProvisionallyForPartitionFileSystem = 0x31CE02,
    FsError_UnsupportedWriteForPartitionFile = 0x31D002,
    FsError_UnsupportedOperateRangeForPartitionFile = 0x31D202,
    FsError_UnsupportedOperateRangeForTmFileSystemFile = 0x31D402,
    FsError_UnsupportedWriteForSaveDataInternalStorageFileSystem = 0x31D602,
    FsError_UnsupportedCommitProvisionallyForApplicationTemporaryFileSystem = 0x31DC02,
    FsError_UnsupportedCommitProvisionallyForSaveDataFileSystem = 0x31DE02,
    FsError_UnsupportedCommitProvisionallyForDirectorySaveDataFileSystem = 0x31E002,
    FsError_UnsupportedWriteForZeroBitmapHashStorageFile = 0x31E202,
    FsError_UnsupportedSetSizeForZeroBitmapHashStorageFile = 0x31E402,
    FsError_ResultNcaExternalKeyUnregisteredDeprecated = 0x326602,
    FsError_ResultFileNotClosed = 0x326E02,
    FsError_ResultDirectoryNotClosed = 0x327002,
    FsError_ResultWriteModeFileNotClosed = 0x327202,
    FsError_ResultAllocatorAlreadyRegistered = 0x327402,
    FsError_ResultDefaultAllocatorAlreadyUsed = 0x327602,
    FsError_ResultAllocatorAlignmentViolation = 0x327A02,
    FsError_ResultUserNotExist = 0x328202,
    FsError_FileNotFound = 0x339402,
    FsError_DirectoryNotFound = 0x339602,
    FsError_MappingTableFull = 0x346402,
    FsError_OpenCountLimit = 0x346A02,
    FsError_MultiCommitFileSystemLimit = 0x346C02,
    FsError_MapFull = 0x353602,
    FsError_NotMounted = 0x35F202,
    FsError_DbmKeyNotFound = 0x3DBC02,
    FsError_DbmFileNotFound = 0x3DBE02,
    FsError_DbmDirectoryNotFound = 0x3DC002,
    FsError_DbmAlreadyExists = 0x3DC402,
    FsError_DbmKeyFull = 0x3DC602,
    FsError_DbmDirectoryEntryFull = 0x3DC802,
    FsError_DbmFileEntryFull = 0x3DCA02,
    FsError_DbmInvalidOperation = 0x3DD402,
};

enum OsError {
    OsError_ResultNoPermission = 0x203,
    OsError_ResultAccessViolation = 0x403,
    OsError_ResultBadRequest = 0x603,
    OsError_ResultBusy = 0x803,
    OsError_ResultDeadlock = 0xA03,
    OsError_ResultInvalidAddress = 0xC03,
    OsError_ResultInvalidParameter = 0xE03,
    OsError_ResultOutOfMemory = 0x1003,
    OsError_ResultOutOfResource = 0x1203,
    OsError_InvalidHandle = 0x3EA03,
    OsError_InvalidCurrentMemoryState = 0x3EC03,
    OsError_InvalidTransferMemoryState = 0x3EE03,
    OsError_InvalidTransferMemorySize = 0x3F003,
    OsError_ResultInternalError = 0x7FE03,
};

enum NcmError {
    NcmError_ContentNotFound = 0xA05,
    NcmError_ContentMetaNotFound = 0xE05,
    NcmError_UnknownStorage = 0x1805,
    NcmError_InvalidContentMetaDatabase = 0xDC05,
    NcmError_WriteToReadOnlyContentStorage = 0x17C05,
};

#define R_SUCCEED() return 0

#define R_THROW(_rc) return _rc

#define R_TRY_RESULT(r, _result) { \
    if (const auto _rc = (r); R_FAILED(_rc)) { \
        R_THROW(_result); \
    } \
}

#define R_TRY(r) { \
    if (const auto _rc = (r); R_FAILED(_rc)) { \
        R_THROW(_rc); \
    } \
}

#define R_UNLESS(expr, res) { \
    if (!(expr)) { \
        R_THROW(res); \
    } \
}

#define CONCATENATE_IMPL(s1, s2) s1##s2
#define CONCATENATE(s1, s2) CONCATENATE_IMPL(s1, s2)
#define ANONYMOUS_VARIABLE(pref) CONCATENATE(pref, __COUNTER__)

#define ON_SCOPE_EXIT(_f) std::experimental::scope_exit ANONYMOUS_VARIABLE(SCOPE_EXIT_STATE_){[&] { _f; }};
#define ON_SCOPE_FAIL(_f) std::experimental::scope_exit ANONYMOUS_VARIABLE(SCOPE_EXIT_STATE_){[&] { if (R_FAILED(rc)) { _f; } }};
#define ON_SCOPE_SUCCESS(_f) std::experimental::scope_exit ANONYMOUS_VARIABLE(SCOPE_EXIT_STATE_){[&] { if (R_SUCCEEDED(rc)) { _f; } }};

#if 0
constexpr auto cexprHash(const char *str, std::size_t v = 0) noexcept -> std::size_t {
    return (*str == 0) ? v : 31 * cexprHash(str + 1) + *str;
}

constexpr auto cexprStrlen(const char *str) noexcept -> std::size_t {
    return (*str != 0) ? 1 + cexprStrlen(str + 1) : 0;
}

inline void showError(const char* title, const char* desc, Result rc) {
    const auto type = appletGetAppletType();
    if (type == AppletType_Application || type == AppletType_SystemApplication) {
        ErrorApplicationConfig cfg;
        errorApplicationCreate(&cfg, title, desc);
        errorApplicationSetNumber(&cfg, rc);
        errorApplicationShow(&cfg);
    } else {
        ErrorSystemConfig cfg;
        errorSystemCreate(&cfg, title, desc);
        errorSystemSetResult(&cfg, rc);
        errorSystemShow(&cfg);
    }
}
#endif