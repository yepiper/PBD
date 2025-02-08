// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePBD_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_PBD;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_PBD()
	{
		if (!Z_Registration_Info_UPackage__Script_PBD.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/PBD",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x3FF75A8D,
				0x7BA913F2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_PBD.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_PBD.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_PBD(Z_Construct_UPackage__Script_PBD, TEXT("/Script/PBD"), Z_Registration_Info_UPackage__Script_PBD, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3FF75A8D, 0x7BA913F2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
