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
    UPROPERTY(EditAnywhere)
    bool                                               bAtMinimumReticleSpread : 1;   
    UPROPERTY(EditAnywhere)                           // 0x0A80(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentReticleSpread;          
    UPROPERTY(EditAnywhere)                               // 0x0A84(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentReticleSpreadMultiplier;      
    UPROPERTY(EditAnywhere)                         // 0x0A88(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentStandingStillSpreadMultiplier;      
    UPROPERTY(EditAnywhere)                   // 0x0A8C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentCrouchingSpreadMultiplier;        
    UPROPERTY(EditAnywhere)                     // 0x0A90(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentJumpingFallingSpreadMultiplier;    
    UPROPERTY(EditAnywhere)                    // 0x0A94(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UClass*                                      TracerTemplate;    
    UPROPERTY(EditAnywhere)                                           // 0x0A98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CurrentNumBullets;        
    UPROPERTY(EditAnywhere)                                    // 0x0AA0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     ScopeTargetingMuzzleOffset;           
    UPROPERTY(EditAnywhere)                        // 0x0AA4(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     CurrentMuzzleBlockedLocation;          
    UPROPERTY(EditAnywhere)                       // 0x0AB0(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    MaxTargetingAimAdjustment;         
    UPROPERTY(EditAnywhere)                           // 0x0ABC(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bShouldDisplayAmmoCounter : 1;         
    UPROPERTY(EditAnywhere)                       // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bShouldAimFromMuzzleAtCloseRange : 1;       
    UPROPERTY(EditAnywhere)                  // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bMaintainAimLocationDuringTargeting : 1;      
    UPROPERTY(EditAnywhere)                // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bUseScopeTargeting : 1;    
    UPROPERTY(EditAnywhere)                                   // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bPersistentFireFX : 1;        
    UPROPERTY(EditAnywhere)                                // 0x0AC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bUseBeamParticles : 1;       
    UPROPERTY(EditAnywhere)                                 // 0x0AC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	bool                                               bUseImpactFXForProjectiles : 1;      
    UPROPERTY(EditAnywhere)                         // 0x0AC8(0x0001) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bUseImpactDecals : 1;             
    UPROPERTY(EditAnywhere)                            // 0x0AC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	bool                                               bUsePersistentBeam : 1;        
    UPROPERTY(EditAnywhere)                               // 0x0AC9(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FFortEffectDistanceQuality                  BeamSignificance;        
    UPROPERTY(EditAnywhere)                                     // 0x0ACC(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FFortEffectDistanceQuality                  ImpactSignificance;      
    UPROPERTY(EditAnywhere)                                     // 0x0AE4(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FFortEffectDistanceQuality                  DecalSignificance;       
    UPROPERTY(EditAnywhere)                                     // 0x0AFC(0x0018) (CPF_Edit, CPF_DisableEditOnInstance)
	float                                              ScopeImpactEffectDistanceOffset;       
    UPROPERTY(EditAnywhere)                       // 0x0B14(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             BeamParticleSystem;          
    UPROPERTY(EditAnywhere)                                 // 0x0B18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FName                                       BeamSourceSocketName;       
    UPROPERTY(EditAnywhere)                                  // 0x0B20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DecalSizeMin;      
    UPROPERTY(EditAnywhere)                                           // 0x0B28(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DecalSizeMax;      
    UPROPERTY(EditAnywhere)                                           // 0x0B34(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecalLifespanMin;     
    UPROPERTY(EditAnywhere)                                        // 0x0B40(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DecalLifespanMax;     
    UPROPERTY(EditAnywhere)                                        // 0x0B44(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                DecalColorStart;     
    UPROPERTY(EditAnywhere)                                         // 0x0B48(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                DecalColorEnd;      
    UPROPERTY(EditAnywhere)                                          // 0x0B58(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInterface*                          DecalMaterial;     
    UPROPERTY(EditAnywhere)                                           // 0x0B68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UTexture2D*                                  DecalTexture;      
    UPROPERTY(EditAnywhere)                                           // 0x0B70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<TEnumAsByte<EPhysicalSurface>>              SurfaceAcceptingDecals;     
    UPROPERTY(EditAnywhere)                                  // 0x0B78(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	int                                                ShellReloadCounter;      
    UPROPERTY(EditAnywhere)                                     // 0x0B8C(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FRotator                                    TargetingRotAdjustmentTotal;     
    UPROPERTY(EditAnywhere)                             // 0x0B94(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              LastTargetingRotAdjustmentWeight;     
    UPROPERTY(EditAnywhere)                        // 0x0BA0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UAnimMontage*                                FireAnimation;                         
    UPROPERTY(EditAnywhere)                       // 0x0C08(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                FireDownsightsAnimation;            
    UPROPERTY(EditAnywhere)                          // 0x0C10(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponFireMontage;                
    UPROPERTY(EditAnywhere)                            // 0x0C18(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponFireDownsightsMontage;      
    UPROPERTY(EditAnywhere)                            // 0x0C20(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    BeamPSC;                                                  // 0x0C28(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)

   

};
