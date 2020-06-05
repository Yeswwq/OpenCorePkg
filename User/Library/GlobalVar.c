/** @file
  Copyright (c) 2020, PMheart. All rights reserved.
  SPDX-License-Identifier: BSD-3-Clause
**/

#include <GlobalVar.h>

EFI_GUID gAppleBootVariableGuid = { 0x7C436110, 0xAB2A, 0x4BBB, { 0xA8, 0x80, 0xFE, 0x41, 0x99, 0x5C, 0x9F, 0x82 }};
EFI_GUID gAppleEventProtocolGuid = { 0x33BE0EF1, 0x89C9, 0x4A6D, { 0xBB, 0x9F, 0x69, 0xDC, 0x8D, 0xD5, 0x16, 0xB9 }};
EFI_GUID gAppleKeyMapAggregatorProtocolGuid = { 0x5B213447, 0x6E73, 0x4901, { 0xA4, 0xF1, 0xB8, 0x64, 0xF3, 0xB7, 0xA1, 0x72 }};
EFI_GUID gAppleKeyMapDatabaseProtocolGuid = { 0x584B9EBE, 0x80C1, 0x4BD6, { 0x98, 0xB0, 0xA7, 0x78, 0x6E, 0xC2, 0xF2, 0xE2 }};
EFI_GUID gAppleApfsContainerInfoGuid = { 0x3533CF0D, 0x685F, 0x5EBF, { 0x8D, 0xC6, 0x73, 0x93, 0x48, 0x5B, 0xAF, 0xA2 }};
EFI_GUID gAppleApfsVolumeInfoGuid = { 0x900C7693, 0x8C14, 0x58BA, { 0xB4, 0x4E, 0x97, 0x45, 0x15, 0xD2, 0x7C, 0x78 }};
EFI_GUID gAppleBlessedOsxFolderInfoGuid = { 0x893CA450, 0x5F5E, 0x48BA, { 0x85, 0x8F, 0x08, 0xC4, 0x5D, 0x80, 0x23, 0x18 }};
EFI_GUID gAppleBlessedSystemFileInfoGuid = { 0xCA7E4814, 0x2ADC, 0x4ADD, { 0xAB, 0xFF, 0x73, 0x4E, 0x3C, 0xFE, 0x13, 0xF3 }};
EFI_GUID gAppleBlessedSystemFolderInfoGuid = { 0x7BD1F02D, 0x9C2F, 0x4581, { 0xBF, 0x12, 0xD5, 0x4a, 0xBA, 0x0D, 0x98, 0xD6 }};
EFI_GUID gAppleBootPolicyProtocolGuid = { 0x62257758, 0x350C, 0x4D0A, { 0xB0, 0xBD, 0xF6, 0xBE, 0x2E, 0x1E, 0x27, 0x2C }};
EFI_GUID gAppleVendorVariableGuid = { 0x4D1EDE05, 0x38C7, 0x4A6A, { 0x9C, 0xC6, 0x4B, 0xCC, 0xA8, 0xB3, 0x8C, 0x14 }};

const CHAR8 *gEfiCallerBaseName = "OpenCore";
EFI_GUID gEfiGraphicsOutputProtocolGuid = { 0x9042A9DE, 0x23DC, 0x4A38, { 0x96, 0xFB, 0x7A, 0xDE, 0xD0, 0x80, 0x51, 0x6A }};
EFI_GUID gEfiHiiFontProtocolGuid = {0xe9ca4775, 0x8657, 0x47fc, {0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24}};
EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiUgaDrawProtocolGuid = { 0x982C298B, 0xF4FA, 0x41CB, { 0xB8, 0x38, 0x77, 0xAA, 0x68, 0x8F, 0xB8, 0x39 }};
EFI_GUID gEfiAbsolutePointerProtocolGuid = { 0x8D59D32B, 0xC655, 0x4AE9, { 0x9B, 0x15, 0xF2, 0x59, 0x04, 0x99, 0x2A, 0x43 } };
EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiShellParametersProtocolGuid = { 0x752f3136, 0x4e16, 0x4fdc, {0xa2, 0x2a, 0xe5, 0xf4, 0x68, 0x12, 0xf4, 0xca }};
EFI_GUID gEfiSimplePointerProtocolGuid = { 0x31878C87, 0x0B75, 0x11D5, { 0x9A, 0x4F, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiDebugPortProtocolGuid = { 0xEBA4E8D2, 0x3858, 0x41EC, { 0xA2, 0x81, 0x26, 0x47, 0xBA, 0x96, 0x60, 0xD0 }};
EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiPcAnsiGuid = { 0xE0C14753, 0xF9BE, 0x11D2, { 0x9A, 0x0C, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiPersistentVirtualCdGuid = { 0x08018188, 0x42CD, 0xBB48, {0x10, 0x0F, 0x53, 0x87, 0xD5, 0x3D, 0xED, 0x3D }};
EFI_GUID gEfiPersistentVirtualDiskGuid = { 0x5CEA02C9, 0x4D07, 0x69D3, {0x26, 0x9F ,0x44, 0x96, 0xFB, 0xE0, 0x96, 0xF9 }};
EFI_GUID gEfiSasDevicePathGuid = { 0xd487ddb4, 0x008b, 0x11d9, { 0xaf, 0xdc, 0x00, 0x10, 0x83, 0xff, 0xca, 0x4d }};
EFI_GUID gEfiUartDevicePathGuid = { 0x37499a9d, 0x542f, 0x4c89, { 0xa0, 0x26, 0x35, 0xda, 0x14, 0x20, 0x94, 0xe4 }};
EFI_GUID gEfiVT100Guid = { 0xDFA66065, 0xB419, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiVT100PlusGuid = { 0x7BAEC70B, 0x57E0, 0x4C76, { 0x8E, 0x87, 0x2F, 0x9E, 0x28, 0x08, 0x83, 0x43 }};
EFI_GUID gEfiVTUTF8Guid = { 0xAD15A0D6, 0x8BEC, 0x4ACF, { 0xA0, 0x73, 0xD0, 0x1D, 0xE7, 0x7E, 0x2D, 0x88 }};
EFI_GUID gEfiVirtualCdGuid = { 0x3D5ABD30, 0x4175, 0x87CE, {0x6D, 0x64, 0xD2, 0xAD, 0xE5, 0x23, 0xC4, 0xBB }};
EFI_GUID gEfiVirtualDiskGuid = { 0x77AB535A, 0x45FC, 0x624B, {0x55, 0x60, 0xF7, 0xB2, 0x81, 0xD1, 0xF9, 0x6E }};
EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiFileSystemVolumeLabelInfoIdGuid = { 0xDB47D7D3, 0xFE81, 0x11D3, { 0x9A, 0x35, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
EFI_GUID gEfiUserInterfaceThemeProtocolGuid = { 0xD5B0AC65, 0x9A2D, 0x4D2A, { 0xBB, 0xD6, 0xE8, 0x71, 0xA9, 0x5E, 0x04, 0x35 }};
EFI_GUID gEfiMpServiceProtocolGuid = { 0x3fdda605, 0xa76e, 0x4f46, { 0xad, 0x29, 0x12, 0xf4, 0x53, 0x1b, 0x3d, 0x08 }};
EFI_GUID gFrameworkEfiMpServiceProtocolGuid = { 0xF33261E7, 0x23CB, 0x11D5, { 0xBD, 0x5C, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81 }};
EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
EFI_GUID gEfiSmbios3TableGuid = { 0xF2FD1544, 0x9794, 0x4A2C, { 0x99, 0x2E, 0xE5, 0xBB, 0xCF, 0x20, 0xE3, 0x94 }};
EFI_GUID gEfiLegacyRegionProtocolGuid = { 0x0fc9013a, 0x0568, 0x4ba9, { 0x9b, 0x7e, 0xc9, 0xc3, 0x90, 0xa6, 0x60, 0x9b }};
EFI_GUID gEfiPciRootBridgeIoProtocolGuid = { 0x2F707EBB, 0x4A1A, 0x11D4, { 0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
EFI_GUID gEfiSmbiosTableGuid = { 0xEB9D2D31, 0x2D88, 0x11D3, { 0x9A, 0x16, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};

EFI_GUID gOcVendorVariableGuid = { 0x4D1FDA02, 0x38C7, 0x4A6A, { 0x9C, 0xC6, 0x4B, 0xCC, 0xA8, 0xB3, 0x01, 0x02 }};
EFI_GUID gOcCustomSmbios3TableGuid = { 0xF2FD1545, 0x9794, 0x4A2C, { 0x99, 0x2E, 0xE5, 0xBB, 0xCF, 0x20, 0xE3, 0x94 }};
EFI_GUID gOcCustomSmbiosTableGuid = { 0xEB9D2D35, 0x2D88, 0x11D3, { 0x9A, 0x16, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
