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
    	UPROPERTY(EditAnywhere)                                  
	class AFortAthenaSimpleCar*                        Vehicle; 
    	UPROPERTY(EditAnywhere)                                      
	class USoundBase*                                  OnParachuteOpen;
    	UPROPERTY(EditAnywhere)                               
	class USoundBase*                                  OnParachuteClose; 
    	UPROPERTY(EditAnywhere)                             
	class USoundBase*                                  OnUmbrellaOpen; 
    	UPROPERTY(EditAnywhere)                               
	class USoundBase*                                  OnUmbrellaClose;  
    	UPROPERTY(EditAnywhere)                             
	class USoundBase*                                  OnSkydivingLoop;
    	UPROPERTY(EditAnywhere)                               
	class USoundBase*                                  OnParachutingLoop;
    	UPROPERTY(EditAnywhere)                             
	class USoundBase*                                  OnReviveSound; 
    	UPROPERTY(EditAnywhere)                                
	float                                              CrouchMeshOffset; 
    	UPROPERTY(EditAnywhere)                             
	float                                              ReviveFromDBNOTime;
    	UPROPERTY(EditAnywhere)                            
	float                                              DBNOStartTime;   
    	UPROPERTY(EditAnywhere)                              
	float                                              DBNOInvulnerableTime;                          
	// unknown variable unsigned char                  DBNORevivalStacking;   
    	UPROPERTY(EditAnywhere)                        
	class UCurveFloat*                                 DirectionalSpeedMultiplierCurve; 
    	UPROPERTY(EditAnywhere)              
	class UCurveFloat*                                 ParachuteDirectionalSpeedMultiplierCurve;  
    	UPROPERTY(EditAnywhere)    
	class UCurveFloat*                                 SkydivingDirectionalSpeedMultiplierCurve;
    	UPROPERTY(EditAnywhere)      
	struct FScriptMulticastDelegate                    OnUIGameplayCue; 
    	UPROPERTY(EditAnywhere)                              
	struct FScriptMulticastDelegate                    OnDBNOStateChanged; 
    	UPROPERTY(EditAnywhere)                           
	class UAnimBlueprint*                              DrivingAnimBP; 
    	UPROPERTY(EditAnywhere)                                
	class UClass*                                      PreDrivingAnimBP; 
    	UPROPERTY(EditAnywhere)                             
	struct FGameplayAbilityRepAnimMontage              RepAnimMontageInfo; 
    	UPROPERTY(EditAnywhere)                           
	struct FReplicatedMontagePair                      LandingMontagePair;
    	UPROPERTY(EditAnywhere)                            
	bool                                               WeaponActivated : 1;    
    	UPROPERTY(EditAnywhere)                       
	float                                              PickupSpeedMultiplier;  
    	UPROPERTY(EditAnywhere)                       
	class USoundBase*                                  DefaultCrouchedFootstepSound;  
    	UPROPERTY(EditAnywhere)                
	class USoundBase*                                  DefaultCrouchSprintFootstepSound; 
    	UPROPERTY(EditAnywhere)             
    	bool                                               bIsOutsideSafeZone : 1; 
    	UPROPERTY(EditAnywhere)                    
	class APawn*                                       KillerForSpectatorRotation;
    	UPROPERTY(EditAnywhere)                    
	bool                                               bIsPlayerPawnReady : 1;
    	UPROPERTY(EditAnywhere)                        
   	bool                                               bIsSkydiving : 1;
    	UPROPERTY(EditAnywhere)                           
	bool                                               bIsParachuteOpen : 1;
    	UPROPERTY(EditAnywhere)                          
	bool                                               bIsParachuteForcedOpen : 1; 
    	UPROPERTY(EditAnywhere)                   
	bool                                               bIsBelowAutoDeployTestHeight : 1;
    	UPROPERTY(EditAnywhere)              
	class USkeletalMeshComponent*                      MeshParachuteOpen;
    	UPROPERTY(EditAnywhere)                             
	class USkeletalMesh*                               MeshUmbrella; 
    	UPROPERTY(EditAnywhere)                                 
	class UMaterialInstance*                           FounderUmbrellaMaterial;
    	UPROPERTY(EditAnywhere)                       
	class UMaterialInstance*                           FounderGliderMaterial;
    	UPROPERTY(EditAnywhere)                         
	class UClass*                                      UmbrellaAnimClass;
    	UPROPERTY(EditAnywhere)                             
	struct FName                                       ParachuteAttachSocket;
    	UPROPERTY(EditAnywhere)                         
	struct FScalableFloat                              ParachuteDeployTraceForGroundDistance;
    	UPROPERTY(EditAnywhere)         
	struct FScalableFloat                              ParachuteDeployVelocityBlend;
    	UPROPERTY(EditAnywhere)                  
	bool                                               bParachuteDeployFixedVerticalDistance : 1;
    	UPROPERTY(EditAnywhere)     
	float                                              OutsideSafeZoneBlendSpeed;
    	UPROPERTY(EditAnywhere)                     
	float                                              CurrentOutsideSafeZonePPVBlend;
    	UPROPERTY(EditAnywhere)                
	float                                              TargetOutsideSafeZonePPVBlend; 
    	UPROPERTY(EditAnywhere)                
	class UPostProcessComponent*                       OutsideSafeZonePPComponent; 
    	UPROPERTY(EditAnywhere)                   
	class UClass*                                      SafeZoneAppliedGE;
    	UPROPERTY(EditAnywhere)                             
	class UAudioComponent*                             ParachuteAudioLoop; 
    	UPROPERTY(EditAnywhere)                           
	class UAudioComponent*                             SkydiveAudioLoop;
    	UPROPERTY(EditAnywhere)                              
	struct FAthenaBatchedDamageGameplayCues            AccumulatedBatchData;
    	UPROPERTY(EditAnywhere)                          
	struct FGameplayCueParameters                      BatchedGameplayCueParameters;
    	UPROPERTY(EditAnywhere)                  
	float                                              LastHealthPostProcessWeight;
    	UPROPERTY(EditAnywhere)                   
	float                                              HealthPostProcessStartTime;
    	UPROPERTY(EditAnywhere)                    
	float                                              HealthPostProcessMuteTime;
    	UPROPERTY(EditAnywhere)                     
	class USkeletalMeshComponent*                      MeshParachuteClosed;
    	UPROPERTY(EditAnywhere)                           
	class UStaticMeshComponent*                        ParachuteMeshClosed;
    	UPROPERTY(EditAnywhere)                           
	class UStaticMeshComponent*                        ParachuteMeshOpen;                             


    };
