// Fill out your copyright notice in the Description page of Project Settings.


#include "Global/GlobalGameInstance.h"
#include "Global/Data/GunData.h"

UGlobalGameInstance::UGlobalGameInstance()
{
	FString GunDataPath = TEXT("/Script/Engine.DataTable'/Game/BluePrint/DataTable/DT_GunData.DT_GunData'");
	static ConstructorHelpers::FObjectFinder<UDataTable> DT_GunData(*GunDataPath);

	if (DT_GunData.Succeeded())
	{
		GunTable = DT_GunData.Object;
	}
}

FGunData* UGlobalGameInstance::GetGunData(FName _Name)
{
	checkf(nullptr != GunTable, TEXT("%s(%u)> nullptr == GunTable"), __FUNCTION__, __LINE__);

	FGunData* FindTable = GunTable->FindRow<FGunData>(_Name, _Name.ToString());

	if (nullptr == FindTable)
	{
		UE_LOG(LogTemp, Warning, TEXT("Gun %s data doesn't exist."), _Name);
		return nullptr;
	}

	return FindTable;
}
