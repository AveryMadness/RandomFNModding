// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortWeaponRanged.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API AFortWeaponRanged : public AFortWeapon
{
	GENERATED_BODY()
	
public:
    bool                                               bAtMinimumReticleSpread : 1;                              // 0x0A80(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentReticleSpread;                                     // 0x0A84(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentReticleSpreadMultiplier;                           // 0x0A88(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentStandingStillSpreadMultiplier;                     // 0x0A8C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentCrouchingSpreadMultiplier;                         // 0x0A90(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentJumpingFallingSpreadMultiplier;                    // 0x0A94(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UClass*                                      TracerTemplate;                                           // 0x0A98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentNumBullets;                                        // 0x0AA0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     ScopeTargetingMuzzleOffset;                               // 0x0AA4(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CurrentMuzzleBlockedLocation;                             // 0x0AB0(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    MaxTargetingAimAdjustment;                                // 0x0ABC(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bShouldDisplayAmmoCounter : 1;                            // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bShouldAimFromMuzzleAtCloseRange : 1;                     // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bMaintainAimLocationDuringTargeting : 1;                  // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bUseScopeTargeting : 1;                                   // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bPersistentFireFX : 1;                                    // 0x0AC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bUseBeamParticles : 1;                                    // 0x0AC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	bool                                               bUseImpactFXForProjectiles : 1;                           // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bUseImpactDecals : 1;                                     // 0x0AC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               bUsePersistentBeam : 1;                                   // 0x0AC9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortEffectDistanceQuality                  BeamSignificance;                                         // 0x0ACC(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FFortEffectDistanceQuality                  ImpactSignificance;                                       // 0x0AE4(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FFortEffectDistanceQuality                  DecalSignificance;                                        // 0x0AFC(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              ScopeImpactEffectDistanceOffset;                          // 0x0B14(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             BeamParticleSystem;                                       // 0x0B18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       BeamSourceSocketName;                                     // 0x0B20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DecalSizeMin;                                             // 0x0B28(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DecalSizeMax;                                             // 0x0B34(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecalLifespanMin;                                         // 0x0B40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecalLifespanMax;                                         // 0x0B44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                DecalColorStart;                                          // 0x0B48(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                DecalColorEnd;                                            // 0x0B58(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;                                            // 0x0B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture2D*                                  DecalTexture;                                             // 0x0B70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              SurfaceAcceptingDecals;                                   // 0x0B78(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                ShellReloadCounter;                                       // 0x0B8C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    TargetingRotAdjustmentTotal;                              // 0x0B94(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              LastTargetingRotAdjustmentWeight;                         // 0x0BA0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UAnimMontage*                                FireAnimation;                                            // 0x0C08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                FireDownsightsAnimation;                                  // 0x0C10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponFireMontage;                                        // 0x0C18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponFireDownsightsMontage;                              // 0x0C20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    BeamPSC;                                                  // 0x0C28(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

   

};
