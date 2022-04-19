// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortWeaponItemDefinition.h"
#include "FortFXManager.h"
#include "FortSignificanceManager.h"
#include "FortWeapon.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API AFortWeapon : public AActor
{
	GENERATED_BODY()
	
public:

    UPROPERTY(EditAnywhere)
	bool                                               bIsEquippingWeapon : 1;
    UPROPERTY(EditAnywhere)                                   // 0x03A0(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bIsReloadingWeapon : 1;
    UPROPERTY(EditAnywhere)                                   // 0x03A1(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bIsChargingWeapon : 1;
    UPROPERTY(EditAnywhere)                                    // 0x03A2(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnLocalAmmoChanged;
    UPROPERTY(EditAnywhere)                                       // 0x03A8(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnReticleColorChanged;

    UPROPERTY(EditAnywhere)                                    // 0x03C0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UFortWeaponItemDefinition*                   WeaponData;
    UPROPERTY(EditAnywhere)                                               // 0x03D0(0x0008) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<struct FFortGameplayAbilityBehaviorDistanceData> GameplayAbilityBehaviorDistanceData; 
    UPROPERTY(EditAnywhere)                     // 0x03D8(0x0010) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_Transient)
	bool                                               bShouldDrawNativeReticle : 1;          
    UPROPERTY(EditAnywhere)                   // 0x03E8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  ReticleImage;                 
    UPROPERTY(EditAnywhere)                            // 0x03F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FColor                                      ReticleDefaultColor;     
    UPROPERTY(EditAnywhere)                                 // 0x03F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FColor                                      ReticleEnemyColor;   
    UPROPERTY(EditAnywhere)                                     // 0x03FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FColor                                      ReticleBuildingColor; 
    UPROPERTY(EditAnywhere)                                    // 0x0400(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	class UTexture2D*                                  HitNotifyReticleImage; 
    UPROPERTY(EditAnywhere)                                   // 0x0408(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HitNotifyDisplayDuration; 
    UPROPERTY(EditAnywhere)                                // 0x0410(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  ReticleCenterImage;    
    UPROPERTY(EditAnywhere)                                   // 0x0418(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTexture2D*                                  MuzzleBlockedReticleImage; 
    UPROPERTY(EditAnywhere)                               // 0x0420(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReticleDefaultPrimaryStrikeAngle;  
    UPROPERTY(EditAnywhere)                       // 0x0428(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReticleDefaultSecondaryStrikeAngle;  
    UPROPERTY(EditAnywhere)                     // 0x042C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CameraBase3PClass;  
    UPROPERTY(EditAnywhere)                                      // 0x0430(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CameraTargeting3PClass;  
    UPROPERTY(EditAnywhere)                                 // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CameraBase1PClass;    
    UPROPERTY(EditAnywhere)                                    // 0x0440(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      CameraTargeting1PClass;   
    UPROPERTY(EditAnywhere)                                // 0x0448(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  DestroyedSound;      
    UPROPERTY(EditAnywhere)                                     // 0x0450(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  OutOfAmmoSound;   
    UPROPERTY(EditAnywhere)                                        // 0x0458(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  ReloadSounds[0x3];   
    UPROPERTY(EditAnywhere)                                     // 0x0460(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  PrimaryFireSound[0x3];  
    UPROPERTY(EditAnywhere)                                  // 0x0478(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  PrimaryFireStopSound[0x3];   
    UPROPERTY(EditAnywhere)                             // 0x0490(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  SecondaryFireSound[0x3];  
    UPROPERTY(EditAnywhere)                                // 0x04A8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  SecondaryFireStopSound[0x3];  
    UPROPERTY(EditAnywhere)                            // 0x04C0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PrimaryFireSoundFadeOutTime;  
    UPROPERTY(EditAnywhere)                            // 0x04D8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  ImpactPhysicalSurfaceSounds[0x3F];  
    UPROPERTY(EditAnywhere)                      // 0x04E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystem*                             ImpactPhysicalSurfaceEffects[0x3F]; 
    UPROPERTY(EditAnywhere)                      // 0x06D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      ImpactCameraShake; 
    UPROPERTY(EditAnywhere)                                       // 0x08D0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        PrimaryForceFeedbackEffect; 
    UPROPERTY(EditAnywhere)                              // 0x08D8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        SecondaryForceFeedbackEffect;    
    UPROPERTY(EditAnywhere)                         // 0x08E0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        PrimaryImpactForceFeedbackEffect;  
    UPROPERTY(EditAnywhere)                       // 0x08E8(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UForceFeedbackEffect*                        SecondaryImpactForceFeedbackEffect; 
    UPROPERTY(EditAnywhere)                      // 0x08F0(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             FireAudioChannels[0x3];    
    UPROPERTY(EditAnywhere)                               // 0x08F8(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      WeaponMesh;    
    UPROPERTY(EditAnywhere)                                           // 0x0910(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ExportObject, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_EditConst, CPF_InstancedReference, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  DefaultWeaponMaterials;    
    UPROPERTY(EditAnywhere)                               // 0x0918(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	int                                                FireAudioChannelWantsToPlay[0x3];  
    UPROPERTY(EditAnywhere)                       // 0x0928(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bUsingSecondaryFireAudio : 1;
    UPROPERTY(EditAnywhere)                             // 0x0934(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FColor                                      CurrentReticleColor;     
    UPROPERTY(EditAnywhere)                                 // 0x0938(0x0004) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     CurrentDamageStartLocation; 
    UPROPERTY(EditAnywhere)                              // 0x093C(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	struct FVector                                     CurrentAdjustedAimDirection;     
    UPROPERTY(EditAnywhere)                         // 0x0948(0x000C) (CPF_Transient, CPF_IsPlainOldData)
	float                                              LastFireTime;   
    UPROPERTY(EditAnywhere)                                          // 0x0954(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool                                               bIsPlayingFireFX : 1;     
    UPROPERTY(EditAnywhere)                                // 0x0958(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              TimerIntervalAdjustment;  
    UPROPERTY(EditAnywhere)                                // 0x095C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              InputQueueTimePercent;   
    UPROPERTY(EditAnywhere)                                 // 0x0960(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowTargeting : 1;  
    UPROPERTY(EditAnywhere)                                    // 0x0964(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsTargeting : 1; 
    UPROPERTY(EditAnywhere)                                        // 0x0965(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     TargetSourceOffset;          
    UPROPERTY(EditAnywhere)                             // 0x0968(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     TargetSourceOffsetWhileCrouched; 
    UPROPERTY(EditAnywhere)                         // 0x0974(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	struct FVector                                     TargetSourceOffsetWhileTargeting; 
    UPROPERTY(EditAnywhere)                        // 0x0980(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_IsPlainOldData)
	bool                                               bTraceThroughPawns : 1;     
    UPROPERTY(EditAnywhere)                              // 0x098C(0x0001) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TraceThroughPawnsLimit;  
    UPROPERTY(EditAnywhere)                                 // 0x0990(0x0004) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LastReloadTime;    
    UPROPERTY(EditAnywhere)                                       // 0x0994(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              LastSuccessfulReloadTime;    
    UPROPERTY(EditAnywhere)                             // 0x0998(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              CurrentReloadDuration; 
    UPROPERTY(EditAnywhere)                                   // 0x099C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGuid                                       ItemEntryGuid;      
    UPROPERTY(EditAnywhere)                                      // 0x09A0(0x0010) (CPF_Net, CPF_Transient, CPF_IsPlainOldData)
	int                                                WeaponLevel;     
    UPROPERTY(EditAnywhere)                                         // 0x09B0(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                AmmoCount;  
    UPROPERTY(EditAnywhere)                                              // 0x09B4(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                BurstFireCounter;   
    UPROPERTY(EditAnywhere)                                      // 0x09BC(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              ChargeTime;      
    UPROPERTY(EditAnywhere)                                         // 0x09C0(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	int                                                CurrentShotLogIndex;  
    UPROPERTY(EditAnywhere)                                    // 0x09C4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<uint32_t>                                   ShotLogFlags;     
    UPROPERTY(EditAnywhere)                                        // 0x09C8(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	bool                                               bInitializedWeaponItem : 1;  
    UPROPERTY(EditAnywhere)                             // 0x09D8(0x0001) (CPF_Transient)
	bool                                               bUpdateLocalAmmoCount : 1;  
    UPROPERTY(EditAnywhere)                              // 0x09D8(0x0001) (CPF_Transient)
	bool                                               bPendingDestroyDueToDurability : 1;      
    UPROPERTY(EditAnywhere)                 // 0x09D8(0x0001) (CPF_Transient)
	int16_t                                            ChargeStatusPack;                        
    UPROPERTY(EditAnywhere)                 // 0x09DC(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortGameplayAbility*                        ActiveAbility;    
    UPROPERTY(EditAnywhere)                                        // 0x09E8(0x0008) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGameplayAbilitySpecHandle                  PrimaryAbilitySpecHandle;          
    UPROPERTY(EditAnywhere)                       // 0x09F0(0x0004) (CPF_Net, CPF_Transient)
	struct FGameplayAbilitySpecHandle                  SecondaryAbilitySpecHandle;    
    UPROPERTY(EditAnywhere)                           // 0x09F4(0x0004) (CPF_Net, CPF_Transient)
	struct FGameplayAbilitySpecHandle                  ReloadAbilitySpecHandle;
    UPROPERTY(EditAnywhere)                                  // 0x09F8(0x0004) (CPF_Net, CPF_Transient)
	TArray<struct FGameplayAbilitySpecHandle>          EquippedAbilityHandles;     
    UPROPERTY(EditAnywhere)                              // 0x0A00(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<struct FFortAbilitySetHandle>               EquippedAbilitySetHandles;  
    UPROPERTY(EditAnywhere)                              // 0x0A10(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UFortAlterationItemDefinition*>       AppliedAlterations;    
    UPROPERTY(EditAnywhere)                                   // 0x0A20(0x0010) (CPF_Net, CPF_ZeroConstructor, CPF_Transient)
	class AFortFXManager*                              CachedFXManager;     
    UPROPERTY(EditAnywhere)                                     // 0x0A30(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UFortSignificanceManager*                    CachedSignificanceManager;  
    UPROPERTY(EditAnywhere)                              // 0x0A38(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FName                                       MuzzleSocketName;     
    UPROPERTY(EditAnywhere)                                    // 0x0A40(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       MuzzleFalloffSocketName;   
    UPROPERTY(EditAnywhere)                               // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                EquipAnimation;        
    UPROPERTY(EditAnywhere)                                   // 0x0A58(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                ReloadAnimation;    
    UPROPERTY(EditAnywhere)                                      // 0x0A60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponEquipMontage;  
    UPROPERTY(EditAnywhere)                                     // 0x0A68(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                WeaponReloadMontage; 
    UPROPERTY(EditAnywhere)                                     // 0x0A70(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortWeaponCoreAnimation>              WeaponCoreAnimation;                                      // 0x0A78(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)

};
