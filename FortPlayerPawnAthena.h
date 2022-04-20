// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortPlayerPawn.h"
#include "FortAthenaSimpleCar.h"
#include "FortPlayerPawnAthena.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API AFortPlayerPawnAthena : public AFortPlayerPawn
{
	GENERATED_BODY()
	
public:


    UPROPERTY(EditAnywhere)
	EFortGliderType                                    GliderType;                                    
	class AFortAthenaSimpleCar*                        Vehicle;                                       
	class USoundBase*                                  OnParachuteOpen;                               
	class USoundBase*                                  OnParachuteClose;                              
	class USoundBase*                                  OnUmbrellaOpen;                                
	class USoundBase*                                  OnUmbrellaClose;                               
	class USoundBase*                                  OnSkydivingLoop;                               
	class USoundBase*                                  OnParachutingLoop;                             
	class USoundBase*                                  OnReviveSound;                                 
	float                                              CrouchMeshOffset;                              
	float                                              ReviveFromDBNOTime;                            
	float                                              DBNOStartTime;                                 
	float                                              DBNOInvulnerableTime;                          
	// unknown variable unsigned char                  DBNORevivalStacking;                           
	class UCurveFloat*                                 DirectionalSpeedMultiplierCurve;               
	class UCurveFloat*                                 ParachuteDirectionalSpeedMultiplierCurve;      
	class UCurveFloat*                                 SkydivingDirectionalSpeedMultiplierCurve;      
	struct FScriptMulticastDelegate                    OnUIGameplayCue;                               
	struct FScriptMulticastDelegate                    OnDBNOStateChanged;                            
	class UAnimBlueprint*                              DrivingAnimBP;                                 
	class UClass*                                      PreDrivingAnimBP;                              
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo;                            
	struct FReplicatedMontagePair                      LandingMontagePair;                            
	bool                                               WeaponActivated : 1;                           
	float                                              PickupSpeedMultiplier;                         
	class USoundBase*                                  DefaultCrouchedFootstepSound;                  
	class USoundBase*                                  DefaultCrouchSprintFootstepSound;              
    bool                                               bIsOutsideSafeZone : 1;                     
	class APawn*                                       KillerForSpectatorRotation;                    
	bool                                               bIsPlayerPawnReady : 1;                        
    bool                                               bIsSkydiving : 1;                           
	bool                                               bIsParachuteOpen : 1;                          
	bool                                               bIsParachuteForcedOpen : 1;                    
	bool                                               bIsBelowAutoDeployTestHeight : 1;              
	class USkeletalMeshComponent*                      MeshParachuteOpen;                             
	class USkeletalMesh*                               MeshUmbrella;                                  
	class UMaterialInstance*                           FounderUmbrellaMaterial;                       
	class UMaterialInstance*                           FounderGliderMaterial;                         
	class UClass*                                      UmbrellaAnimClass;                             
	struct FName                                       ParachuteAttachSocket;                         
	struct FScalableFloat                              ParachuteDeployTraceForGroundDistance;         
	struct FScalableFloat                              ParachuteDeployVelocityBlend;                  
	bool                                               bParachuteDeployFixedVerticalDistance : 1;     
	float                                              OutsideSafeZoneBlendSpeed;                     
	float                                              CurrentOutsideSafeZonePPVBlend;                
	float                                              TargetOutsideSafeZonePPVBlend;                 
	class UPostProcessComponent*                       OutsideSafeZonePPComponent;                    
	class UClass*                                      SafeZoneAppliedGE;                             
	class UAudioComponent*                             ParachuteAudioLoop;                            
	class UAudioComponent*                             SkydiveAudioLoop;                              
	struct FAthenaBatchedDamageGameplayCues            AccumulatedBatchData;                          
	struct FGameplayCueParameters                      BatchedGameplayCueParameters;                  
	float                                              LastHealthPostProcessWeight;                   
	float                                              HealthPostProcessStartTime;                    
	float                                              HealthPostProcessMuteTime;                     
	class USkeletalMeshComponent*                      MeshParachuteClosed;                           
	class UStaticMeshComponent*                        ParachuteMeshClosed;                           
	class UStaticMeshComponent*                        ParachuteMeshOpen;                             


    };
