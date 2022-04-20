// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortAlterationItemDefinition.h"
#include "FortWorldItemDefinition.h"
#include "FortPlayerPawn.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API AFortPlayerPawn : public AFortPawn
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	class UClass*                                      SelfReviveGameplayEffect;            
	UPROPERTY(EditAnywhere)                     // 0x0EF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UClass*                                      TeammateReviveGameplayEffect;   
	UPROPERTY(EditAnywhere)                          // 0x0F00(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScalableFloat                              SetByCallerReviveHealth;      
	UPROPERTY(EditAnywhere)                            // 0x0F08(0x0028) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FName                                       DBNOInteractionCollisionProfile; 
	UPROPERTY(EditAnywhere)                         // 0x0F30(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     DBNOInteractionBoxExtent;  
	UPROPERTY(EditAnywhere)                               // 0x0F38(0x000C) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              DBNODeferTime;           
	UPROPERTY(EditAnywhere)                                 // 0x0F44(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UBoxComponent*                               DBNOInteractCollisionComponent; 
	UPROPERTY(EditAnywhere)                          // 0x0F48(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	struct FGameplayTag                                EventReviveTag; 
	UPROPERTY(EditAnywhere)                                          // 0x0F50(0x0008) (CPF_Edit, CPF_DisableEditOnInstance)
	EFortPawnStasisMode                                StasisMode;  
	UPROPERTY(EditAnywhere)                                     	     // 0x0F58(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortPlayerPawn.StasisMode
	EFortPawnStasisMode                                PreviousStasisMode;
	UPROPERTY(EditAnywhere)                                       // 0x0F59(0x0001) UNKNOWN PROPERTY: EnumProperty FortniteGame.FortPlayerPawn.PreviousStasisMode
	bool						   bIsSprintJump : 1;  
	UPROPERTY(EditAnywhere)                                      // 0x0F5A(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	float                                              SprintCancelTime;
	UPROPERTY(EditAnywhere)                                         // 0x0F5C(0x0004) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool						   bCanPredictJumpApex : 1;
	UPROPERTY(EditAnywhere)                                  // 0x0F60(0x0001) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UAnimMontage*                                UnableToPerformActionMontage;
	UPROPERTY(EditAnywhere)                             // 0x0FE0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MoveSoundStimulusBroadcastInterval;
	UPROPERTY(EditAnywhere)                       // 0x0FE8(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_Config, CPF_IsPlainOldData)
	bool						   bShowingOverdriveEffect : 1;
	UPROPERTY(EditAnywhere)                              // 0x1041(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TEnumAsByte<EFortBuildingState>                    BuildingState;
	UPROPERTY(EditAnywhere)                                            // 0x1042(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool						   bIsTargeting : 1;
	UPROPERTY(EditAnywhere)                                         // 0x1043(0x0001) (CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FGuid                                       LastEquippedWeaponGUID;
	UPROPERTY(EditAnywhere)                                   // 0x10D0(0x0010) (CPF_Net, CPF_IsPlainOldData)
	class UAnimMontage*                                BluePrintPlaceAnimation;
	UPROPERTY(EditAnywhere)                                  // 0x10E0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAnimMontage*                                BluePrintEditAnimation;
	UPROPERTY(EditAnywhere)                                   // 0x10E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FScriptMulticastDelegate                    OnPartChanged;
	UPROPERTY(EditAnywhere)                                            // 0x10F0(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	class UMaterialInstanceDynamic*                    BlueprintPaperMID;
	UPROPERTY(EditAnywhere)                                        // 0x1100(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FTimeline                                   BlueprintPaperPulseTimeline;
	UPROPERTY(EditAnywhere)                              // 0x1110(0x00E0) (CPF_Transient)
	class UCustomColorComponent*                       AccessoryColorSwatchHandler[0x6];
	UPROPERTY(EditAnywhere)                         // 0x11F0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	TWeakObjectPtr<class UFortHero>                    Hero;
	UPROPERTY(EditAnywhere)                                                     // 0x1220(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCustomPlayerComponent*                      HACK_CustomPRIComponent;
	UPROPERTY(EditAnywhere)                                  // 0x1228(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	TEnumAsByte<EFortCustomGender>                     CharacterGender;
	UPROPERTY(EditAnywhere)                                          // 0x1230(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TEnumAsByte<EFortCustomBodyType>                   CharacterBodyType;
	UPROPERTY(EditAnywhere)                                        // 0x1231(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCustomCharacterPart*                        CharacterParts[0x6];
	UPROPERTY(EditAnywhere)                                      // 0x1238(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCustomColorSwatch*                          CharacterColorSwatches[0x2];
	UPROPERTY(EditAnywhere)                              // 0x1268(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class UCustomColorSwatch*                          CharacterPartColorSwatches[0x6];
	UPROPERTY(EditAnywhere)                          // 0x1278(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	bool						   bCharacterPartsCastIndirectShadows : 1;
	UPROPERTY(EditAnywhere)                   // 0x12A8(0x0001) (CPF_ZeroConstructor, CPF_Transient, CPF_Config, CPF_IsPlainOldData)
	class USkeletalMeshComponent*                      CharacterPartSkeletalMeshComponents[0x6];
	UPROPERTY(EditAnywhere)                 // 0x12B0(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_Transient, CPF_InstancedReference, CPF_IsPlainOldData)
	class UCustomCharacterPart*                        PreviousCharacterParts[0x6];
	UPROPERTY(EditAnywhere)                              // 0x12E0(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	class ACustomCharacterPartModifier*                CharacterPartModifiers[0x6];
	UPROPERTY(EditAnywhere)                              // 0x1310(0x0008) (CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	struct FFortCharacterPartsRepMontageInfo           RepCharPartAnimMontageInfo;
	UPROPERTY(EditAnywhere)                               // 0x1340(0x0020) (CPF_Net, CPF_Transient)
	struct FName                                       CarriedObjectAttachmentSocket; 
	UPROPERTY(EditAnywhere)                           // 0x1368(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FSlateBrush                                 MiniMapIconBrush; 
	UPROPERTY(EditAnywhere)                                        // 0x1370(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 AboveBelowMiniMapIconBrush;
	UPROPERTY(EditAnywhere)                               // 0x1400(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 FarOffMiniMapIconBrush;
	UPROPERTY(EditAnywhere)                                   // 0x1490(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FSlateBrush                                 DBNOMiniMapIconBrush;
	UPROPERTY(EditAnywhere)                                     // 0x1520(0x0090) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FLinearColor                                MinimapIconColorSelf;
	UPROPERTY(EditAnywhere)                                     // 0x15B0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                MinimapIconColorTeammate;
	UPROPERTY(EditAnywhere)                                 // 0x15C0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FLinearColor                                MinimapIconColorEnemy; 
	UPROPERTY(EditAnywhere)                                   // 0x15D0(0x0010) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxIndicatorVisibilityDistForEnemies; 
	UPROPERTY(EditAnywhere)                    // 0x15E0(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              MaxIndicatorVisibilityDistForAllies; 
	UPROPERTY(EditAnywhere)                     // 0x15E4(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UParticleSystem*                             SpawnParticles;  
	UPROPERTY(EditAnywhere)                                         // 0x15E8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USoundBase*                                  SpawnSound;  
	UPROPERTY(EditAnywhere)                                             // 0x15F0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              NumSecondsOnGroundBeforeStoppingRagdoll;
	UPROPERTY(EditAnywhere)                  // 0x15F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool						   bIsLocalPlayer : 1;    
	UPROPERTY(EditAnywhere)                                   // 0x1600(0x0001) (CPF_Transient)
	bool						   bDamagedEnemy : 1;  
	UPROPERTY(EditAnywhere)                                      // 0x1600(0x0001) (CPF_Transient)
	uint32_t                                           PlayerStatus;  
	UPROPERTY(EditAnywhere)                                           // 0x1618(0x0004) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	uint16_t                                           AccelerationPack; 
	UPROPERTY(EditAnywhere)                                        // 0x161C(0x0002) (CPF_Net, CPF_ZeroConstructor, CPF_Transient, CPF_IsPlainOldData)
	TArray<class UFortAnimNotifyState_RootMotionInterrupt*> RootMotionInterruptNotifyStack;
	UPROPERTY(EditAnywhere)                      // 0x1620(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UAnimMontage*>                        RootMotionInterruptMontageStack;  
	UPROPERTY(EditAnywhere)                        // 0x1630(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	class UFortVisibilityComponent*                    VisibilityComponent;    
	UPROPERTY(EditAnywhere)                                  // 0x1658(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
	class UPostProcessComponent*                       BlendablesPostProcessComp;                                // 0x1660(0x0008) (CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData)
};
