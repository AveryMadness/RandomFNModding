// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortWeapon.h"
#include "FortFeedbackBank.h"
#include "FortHealthSet.h"
#include "FortControlResistanceSet.h"
#include "FortDamageSet.h"
#include "FortMovementSet.h"
#include "FortAbilitySystemComponent.h"
#include "FortHealthBarIndicator.h"
#include "FortPawn.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API AFortPawn : public ACharacter
{
	GENERATED_BODY()
	
public:


UPROPERTY(EditAnywhere)
struct FDataTableRowHandle                         PawnStatHandle;
UPROPERTY(EditAnywhere)                            
float                                              SlidingFriction;     
UPROPERTY(EditAnywhere)                      
float                                              SlidingBrakingDeceleration; 
UPROPERTY(EditAnywhere)               
TEnumAsByte<EFortMovementStyle>                    CurrentMovementStyle; 
UPROPERTY(EditAnywhere)                     
EFortPawnPushSize                     	   	   PushSize;    
UPROPERTY(EditAnywhere)                              
bool	                                           bUseBaseChanged : 1;  
UPROPERTY(EditAnywhere)                     
byte                                               TeleportCounter; 
UPROPERTY(EditAnywhere)                          
int                                                PawnUniqueID;  
UPROPERTY(EditAnywhere)                            
class AFortWeapon*                                 CurrentWeapon;   
UPROPERTY(EditAnywhere)                          
TArray<class AFortWeapon*>                         CurrentWeaponList;  
UPROPERTY(EditAnywhere)                       
bool                                               bIgnoreNextFallingDamage : 1;  
UPROPERTY(EditAnywhere)            
struct FName                                       WeaponHandSocketName;   
UPROPERTY(EditAnywhere)                   
class AActor*                                      SpawnSpot; 
UPROPERTY(EditAnywhere)                                
struct FGameplayTagContainer                       DeathTags;  
UPROPERTY(EditAnywhere)                               
float                                              SpawnImmunityTime;  
UPROPERTY(EditAnywhere)                       
bool                                               bIsDying : 1; 
UPROPERTY(EditAnywhere)                             
bool                                               bPlayedDying : 1; 
UPROPERTY(EditAnywhere)                         
bool                                               bIsHiddenForDeath : 1;   
UPROPERTY(EditAnywhere)                  
TArray<class AFortPickup*>                         IncomingPickups;   
UPROPERTY(EditAnywhere)                        
TArray<struct FFortPickupEntryData>                PickupDirectionData;  
UPROPERTY(EditAnywhere)                     
bool                                               bIsKnockedback : 1;
UPROPERTY(EditAnywhere)                        
bool                                               bIsStunned : 1;    
UPROPERTY(EditAnywhere)                        
bool                                               bIsStaggered : 1;    
UPROPERTY(EditAnywhere)                      
TEnumAsByte<EFortControlRecoveryBehavior>          ControlRecoveryBehavior; 
UPROPERTY(EditAnywhere)                  
int                                                AdditiveCringeCount;    
UPROPERTY(EditAnywhere)                   
float                                              AdditiveCringeDuration;   
UPROPERTY(EditAnywhere)                 
struct FVector_NetQuantize                         PushMomentum; 
UPROPERTY(EditAnywhere)                             
class USkeletalMeshSocket*                         DeathHitSocket; 
UPROPERTY(EditAnywhere)                           
bool                                               bIsDBNO : 1; 
UPROPERTY(EditAnywhere)                              
float                                              LastPostRenderTraceTime;
UPROPERTY(EditAnywhere)                   
bool                                               bPostRenderTraceSucceeded : 1; 
UPROPERTY(EditAnywhere)            
float                                              TeamBeaconMaxDist;       
UPROPERTY(EditAnywhere)                  
struct FColor                                      TeamBeaconTextColor;  
UPROPERTY(EditAnywhere)                     
float                                              LastTakeHitTimeTimeout;
UPROPERTY(EditAnywhere)                    
float                                              LastDamagedTime;   
UPROPERTY(EditAnywhere)                        
bool                                               bSkipAnalogJump : 1; 
UPROPERTY(EditAnywhere)                      
class AFortWeapon*                                 CurrentlyAttachedWeapon; 
UPROPERTY(EditAnywhere)                  
class UPrimitiveComponent*                         CachedNavFloor;
UPROPERTY(EditAnywhere)                            
float                                              MaxFootstepDistance;
UPROPERTY(EditAnywhere)                       
class USoundBase*                                  DefaultFootstepSound; 
UPROPERTY(EditAnywhere)                     
class USoundBase*                                  DefaultFastFootstepSound;
UPROPERTY(EditAnywhere)                  
class USoundBase*                                  DefaultLandingSound;  
UPROPERTY(EditAnywhere)                     
class USoundBase*                                  DefaultHardLandingSound;
UPROPERTY(EditAnywhere)                   
class USoundBase*                                  DefaultJumpSound;
UPROPERTY(EditAnywhere)                          
bool                                               bCanCapsuleBeUsedForTargeting : 1; 
UPROPERTY(EditAnywhere)        
bool                                               bUseLineTestForDamageZoneBoneDetection : 1;
UPROPERTY(EditAnywhere)
float                                              LineTestForDamageZoneBoneDetectionRadius; 
UPROPERTY(EditAnywhere) 
struct FPawnDamageZones                            DamageZones[0x4]; 
UPROPERTY(EditAnywhere)                         
unsigned char                                      DamageZoneActiveBitMask; 
UPROPERTY(EditAnywhere)                  
float                                              TargettingZOffset; 
UPROPERTY(EditAnywhere)                        
byte                                               JumpFlashCount;
UPROPERTY(EditAnywhere)                            
class UAudioComponent*                             EmoteAudioComp;
UPROPERTY(EditAnywhere)                            
struct FScriptMulticastDelegate                    OnPawnLanded;
UPROPERTY(EditAnywhere)                              
struct FScriptMulticastDelegate                    OnHitPawn;
UPROPERTY(EditAnywhere)                                 
struct FScriptMulticastDelegate                    OnDied; 
UPROPERTY(EditAnywhere)                                   
struct FScriptMulticastDelegate                    OnDeathEffects;   
UPROPERTY(EditAnywhere)                         
struct FScriptMulticastDelegate                    OnDamaged;    
UPROPERTY(EditAnywhere)                             
struct FScriptMulticastDelegate                    OnWeaponEquippedDelegate;
UPROPERTY(EditAnywhere)                  
class UClass*                                      HealthRegenDelayGameplayEffect;
UPROPERTY(EditAnywhere)            
class UClass*                                      HealthRegenGameplayEffect; 
UPROPERTY(EditAnywhere)                
class UClass*                                      ShieldRegenDelayGameplayEffect; 
UPROPERTY(EditAnywhere)           
class UClass*                                      ShieldRegenGameplayEffect; 
UPROPERTY(EditAnywhere)                
bool                                               bIsInvulnerable : 1;
UPROPERTY(EditAnywhere)                       
int                                                WeaponHolsterCounter; 
UPROPERTY(EditAnywhere)                     
bool                                               bWeaponHolstered : 1;
UPROPERTY(EditAnywhere)                      
float                                              StaySpottedTime;
UPROPERTY(EditAnywhere)                           
struct FName                                       SpottedEvent;
UPROPERTY(EditAnywhere)                              
bool                                               bSpotted : 1;
UPROPERTY(EditAnywhere)                              
class UFortFeedbackBank*                           DefaultFeedback;
UPROPERTY(EditAnywhere)                           
TArray<struct FFortPawnVocalChord>                 VocalChords;
UPROPERTY(EditAnywhere)                               
class UFortHealthSet*                              HealthSet; 
UPROPERTY(EditAnywhere)                                
class UFortControlResistanceSet*                   ControlResistanceSet;
UPROPERTY(EditAnywhere)                      
class UFortDamageSet*                              DamageSet; 
UPROPERTY(EditAnywhere)                                
class UFortMovementSet*                            MovementSet; 
UPROPERTY(EditAnywhere)                              
bool                                               bHealthSynced : 1; 
UPROPERTY(EditAnywhere)                        
struct FScriptMulticastDelegate                    OnAbilityDecisionWindowStackUpdated;
UPROPERTY(EditAnywhere)       
class UFortAbilitySystemComponent*                 AbilitySystemComponent;
UPROPERTY(EditAnywhere)                    
TArray<struct FFortActiveMontageDecisionWindow>    DecisionWindowStack;
UPROPERTY(EditAnywhere)                       
bool                                               bPrimaryInputHeld : 1;
UPROPERTY(EditAnywhere)                     
bool                                               bSecondaryInputHeld : 1;
UPROPERTY(EditAnywhere)                   
bool                                               bPrimaryInputQueued : 1;
UPROPERTY(EditAnywhere)                   
struct FGameplayTagContainer                       GameplayTags;
UPROPERTY(EditAnywhere)                              
struct FText                                       DisplayName;
UPROPERTY(EditAnywhere)                               
TArray<struct FDamagerInfo>                        Damagers;
UPROPERTY(EditAnywhere)                                  
class UFortHealthBarIndicator*                     HealthBarIndicator;
UPROPERTY(EditAnywhere)                        
struct FGameplayTag                                CurrentCalloutTag;
UPROPERTY(EditAnywhere)                         
TArray<struct FCalloutEntry>                       CalloutEntries;
UPROPERTY(EditAnywhere)                            
float                                              HealthBarWidth;
UPROPERTY(EditAnywhere)                            
float                                              HealthBarHeightMultiplier;
UPROPERTY(EditAnywhere)                 
struct FSlateBrush                                 SpottedBrush;
UPROPERTY(EditAnywhere)                              
struct FVector                                     SpottedIconOffset;
UPROPERTY(EditAnywhere)                         
int                                                ClientNonRenderedAnimUpdateRate;
UPROPERTY(EditAnywhere)           
int                                                MaxEvalRateForInterpolation;
UPROPERTY(EditAnywhere)               
TArray<float>                                      AnimUpdateRateVisibleMaxDistanceFactor;
UPROPERTY(EditAnywhere)    
TMap<int, int>                                     LODToFrameSkipMap;
//UPROPERTY(EditAnywhere)                         
//Unknown Enum TEnumAsByte<>                       UroShiftBucket;
UPROPERTY(EditAnywhere)            
bool                                               bPostProcessNavLocation : 1;
UPROPERTY(EditAnywhere)               
struct FFortConversationSentence                   CurrentSentence;
UPROPERTY(EditAnywhere)                           
struct FScriptMulticastDelegate                    OnPawnHealthChanged;                       
};
