// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortPawn.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API AFortPawn : public ACharacter
{
	GENERATED_BODY()
	
public:

struct FDataTableRowHandle                         PawnStatHandle;                            
float                                              SlidingFriction;                           
float                                              SlidingBrakingDeceleration;                
TEnumAsByte<EFortMovementStyle>                    CurrentMovementStyle;                      
EFortPawnPushSize                     	   	   PushSize;                                  
unsigned char                                      bUseBaseChanged : 1;                       
byte                                               TeleportCounter;                           
int                                                PawnUniqueID;                              
class AFortWeapon*                                 CurrentWeapon;                             
TArray<class AFortWeapon*>                         CurrentWeaponList;                         
bool                                               bIgnoreNextFallingDamage : 1;              
struct FName                                       WeaponHandSocketName;                      
class AActor*                                      SpawnSpot;                                 
struct FGameplayTagContainer                       DeathTags;                                 
float                                              SpawnImmunityTime;                         
bool                                               bIsDying : 1;                              
bool                                               bPlayedDying : 1;                          
bool                                               bIsHiddenForDeath : 1;                     
TArray<class AFortPickup*>                         IncomingPickups;                           
TArray<struct FFortPickupEntryData>                PickupDirectionData;                       
bool                                               bIsKnockedback : 1;                        
bool                                               bIsStunned : 1;                            
bool                                               bIsStaggered : 1;                          
TEnumAsByte<EFortControlRecoveryBehavior>          ControlRecoveryBehavior;                   
int                                                AdditiveCringeCount;                       
float                                              AdditiveCringeDuration;                    
struct FVector_NetQuantize                         PushMomentum;                              
class USkeletalMeshSocket*                         DeathHitSocket;                            
bool                                               bIsDBNO : 1;                               
float                                              LastPostRenderTraceTime;                   
bool                                               bPostRenderTraceSucceeded : 1;             
float                                              TeamBeaconMaxDist;                         
struct FColor                                      TeamBeaconTextColor;                       
float                                              LastTakeHitTimeTimeout;                    
float                                              LastDamagedTime;                           
bool                                               bSkipAnalogJump : 1;                       
class AFortWeapon*                                 CurrentlyAttachedWeapon;                   
class UPrimitiveComponent*                         CachedNavFloor;                            
float                                              MaxFootstepDistance;                       
class USoundBase*                                  DefaultFootstepSound;                      
class USoundBase*                                  DefaultFastFootstepSound;                  
class USoundBase*                                  DefaultLandingSound;                       
class USoundBase*                                  DefaultHardLandingSound;                   
class USoundBase*                                  DefaultJumpSound;                          
bool                                               bCanCapsuleBeUsedForTargeting : 1;         
bool                                               bUseLineTestForDamageZoneBoneDetection : 1;
float                                              LineTestForDamageZoneBoneDetectionRadius;  
struct FPawnDamageZones                            DamageZones[0x4];                          
unsigned char                                      DamageZoneActiveBitMask;                   
float                                              TargettingZOffset;                         
byte                                               JumpFlashCount;                            
class UAudioComponent*                             EmoteAudioComp;                            
struct FScriptMulticastDelegate                    OnPawnLanded;                              
struct FScriptMulticastDelegate                    OnHitPawn;                                 
struct FScriptMulticastDelegate                    OnDied;                                    
struct FScriptMulticastDelegate                    OnDeathEffects;                            
struct FScriptMulticastDelegate                    OnDamaged;                                 
struct FScriptMulticastDelegate                    OnWeaponEquippedDelegate;                  
class UClass*                                      HealthRegenDelayGameplayEffect;            
class UClass*                                      HealthRegenGameplayEffect;                 
class UClass*                                      ShieldRegenDelayGameplayEffect;            
class UClass*                                      ShieldRegenGameplayEffect;                 
bool                                               bIsInvulnerable : 1;                       
int                                                WeaponHolsterCounter;                      
bool                                               bWeaponHolstered : 1;                      
float                                              StaySpottedTime;                           
struct FName                                       SpottedEvent;                              
bool                                               bSpotted : 1;                              
class UFortFeedbackBank*                           DefaultFeedback;                           
TArray<struct FFortPawnVocalChord>                 VocalChords;                               
class UFortHealthSet*                              HealthSet;                                 
class UFortControlResistanceSet*                   ControlResistanceSet;                      
class UFortDamageSet*                              DamageSet;                                 
class UFortMovementSet*                            MovementSet;                               
bool                                               bHealthSynced : 1;                         
struct FScriptMulticastDelegate                    OnAbilityDecisionWindowStackUpdated;       
class UFortAbilitySystemComponent*                 AbilitySystemComponent;                    
TArray<struct FFortActiveMontageDecisionWindow>    DecisionWindowStack;                       
bool                                               bPrimaryInputHeld : 1;                     
bool                                               bSecondaryInputHeld : 1;                   
bool                                               bPrimaryInputQueued : 1;                   
struct FGameplayTagContainer                       GameplayTags;                              
struct FText                                       DisplayName;                               
TArray<struct FDamagerInfo>                        Damagers;                                  
class UFortHealthBarIndicator*                     HealthBarIndicator;                        
struct FGameplayTag                                CurrentCalloutTag;                         
TArray<struct FCalloutEntry>                       CalloutEntries;                            
float                                              HealthBarWidth;                            
float                                              HealthBarHeightMultiplier;                 
struct FSlateBrush                                 SpottedBrush;                              
struct FVector                                     SpottedIconOffset;                         
int                                                ClientNonRenderedAnimUpdateRate;           
int                                                MaxEvalRateForInterpolation;               
TArray<float>                                      AnimUpdateRateVisibleMaxDistanceFactor;    
TMap<int, int>                                     LODToFrameSkipMap;                         
//Unknown Enum TEnumAsByte<>                       UroShiftBucket;            
bool                                               bPostProcessNavLocation : 1;               
struct FFortConversationSentence                   CurrentSentence;                           
struct FScriptMulticastDelegate                    OnPawnHealthChanged;                       
};
