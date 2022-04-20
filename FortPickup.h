#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortPawn.h"
#include "FortItem.h"
#include "FortSimpleMiniMapIndicator.h"
#include "FortSlateHUDIndicator.h"
#include "FortPickup.generated.h"




class AFortPickup : public AActor
{
  GENERATED_BODY()
public:
	bool                                               bUsePickupWidget : 1;                                     // 0x0390(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPickup;                                                 // 0x0398(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnPickupAttempted;                                        // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FFortItemEntry                              PrimaryPickupItemEntry;                                   // 0x03B8(0x00A8) (CPF_Net, CPF_Transient)
	TArray<struct FFortItemEntry>                      MultiItemPickupEntries;                                   // 0x0460(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	struct FFortPickupLocationData                     PickupLocationData;                                       // 0x0470(0x0060) (CPF_Net, CPF_Transient)
	int                                                OptionalOwnerID;                                          // 0x04D0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGuid                                       OptionalMissionGuid;                                      // 0x04D4(0x0010) (CPF_Transient, CPF_IsPlainOldData)
	class UFortItem*                                   PrimaryPickupDummyItem;                                   // 0x04E8(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TWeakObjectPtr<class AFortPickupEffect>            PickupEffectBlueprint;                                    // 0x04F0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCapsuleComponent*                           TouchCapsule;                                             // 0x04F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UProjectileMovementComponent*                MovementComponent;                                        // 0x0500(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	bool                                               bPickedUp : 1;                                            // 0x0508(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bTossed : 1;                                              // 0x0509(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bTossedFromContainer : 1;                                 // 0x050A(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LastLandedSoundPlayTime;                                  // 0x050C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class AFortPawn*                                   PawnWhoDroppedPickup;                                     // 0x0510(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UFortSimpleMiniMapIndicator*                 MiniMapIndicator;                                         // 0x0518(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UFortSlateHUDIndicator*                      HUDLabel;                                                 // 0x0520(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
};
