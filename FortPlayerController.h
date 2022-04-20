// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortPlayerPawn.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API FortPLayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

UPROPERTY(EditAnywhere)
bool											                         bFailedToRespawn : 1;                                     
bool											                         bIsDisconnecting : 1;                                     
bool											                         bIsBeingKicked : 1;                                       
bool											                         bIsLateJoining : 1;                                       
bool											                         bHasInitiallySpawned : 1;                                 
bool											                         bAssignedStartSpawn : 1;                                  
bool											                         bReadyToStartMatch : 1;                                   // 0x06D8(0x00
bool											                         bClientPawnIsLoaded : 1;                                  // 0x06D8(0x00
struct FVector                                     SpawnLoc;                              
int                                                NumPreviousSpawns;                     
struct FScriptMulticastDelegate                    OnBlueprintReadyCheckCompleted;        
TArray<class AFortAIPawn*>                         ManagedAIs;                            
class AFortPlayerPawn*                             MyFortPawn;                            
bool											                         bHasClientFinishedLoading : 1;                            // 0x0778(0x00
bool											                         bHasServerFinishedLoading : 1;                            // 0x0779(0x00
float                                              TimeStartedWaiting;                    
float                                              TimeFinishedNavigationBuild;           
struct FVector                                     PendingSpectatorLocation;              
TWeakObjectPtr<class AActor>                       ActorUnderReticle;                     
TWeakObjectPtr<class AFortCrackEffect>             WeakspotUnderReticle;                  
float                                              LastActiveTime;                        
class UAudioComponent*                             LongInteractAudioComponent;            
float                                              InteractDistance;                      
float                                              InteractHighlightDistance;             
float                                              InteractTraceExtent;                   
float                                              LastInteractTraceTime;                 
float                                              InteractMultiplierForActiveInteraction;
float                                              InteractMultiplierGamepad;             
class UFortInteractContextInfo*                    PossibleInteractContextInfo;           
class UFortInteractContextInfo*                    InteractResponse;                      
bool											                         bWantsToSprint : 1;                                       // 0x10D5(0x00
bool											                         bHoldingSprint : 1;                                       // 0x10D6(0x00
bool											                         bSprintToggleable : 1;                                    // 0x10D7(0x00
bool											                         bSprintCancelsReload : 1;                                 // 0x10D8(0x00
bool											                         bTapInteractEnabled : 1;                                  // 0x10D9(0x00
bool											                         bMovementDisabledDueToCancellableAction : 1;              // 0x10DA(0x00
bool											                         bIsPlayerActivelyMoving : 1;                              // 0x10DB(0x00
int                                                InMovementCancellableAction;           
bool											                         bHoldingUse : 1;                                          // 0x10E0(0x00
float                                              LastMoveForwardTime;                   
bool											                         bAtNameBaseScreen : 1;                                    // 0x10E9(0x00
bool											                         bInventoryToggledByAlt : 1;                               // 0x10EA(0x00
struct FScriptMulticastDelegate                    OnSetFirstPersonCamera;                
class UClass*                                      CinematicCameraClassOverride;          
class UFortIndicatorManager*                       IndicatorManager;                      
struct FScriptMulticastDelegate                    OnUiChoiceCompleted;                   
struct FScriptMulticastDelegate                    OnRegainedFocus;                       
bool											                         bIsInQuickToggleCursorMode : 1;                           // 0x1520(0x00
bool											                         bGamepadAbilityPending : 1;                               // 0x1521(0x00
bool											                         bForceAllowCursorMode : 1;                                // 0x1522(0x00
bool											                         bDragDropPending : 1;                                     // 0x1523(0x00
bool											                         bSuppressEventNotifications : 1;                          // 0x1524(0x00
float                                              LastSpotTime;                          
TArray<TWeakObjectPtr<class AFortMarkActor>>       CurrentMarks;                          
class UFortGameplayAbility*                        PreviewAbility;                        
struct FAIDirectorDebugInfo                        IntensityGraphInfo;                    
struct FAIDirectorDebugInfo                        PIDValuesGraphInfo;                    
struct FAIDirectorDebugInfo                        PIDContributionsGraphInfo;             
class AFortCombatManager*                          CombatManager;                         
class AFortAIDirectorDataManager*                  AIDirectorDataManager;                 
class AFortMusicManager*                           MusicManager;                          
class UInputComponent*                             BuildPreviewModeInputComponent;        
class ABuildingPlayerPrimitivePreview*             BuildPreviewMarker;                    
class ABuildingActor*                              TargetedBuilding;                      
class UClass*                                      ContextualConversionClass;             
TAssetPtr<class USoundBase>                        StartRepairSound;                      
TAssetPtr<class USoundBase>                        StartUpgradeSound;                     
TArray<class ABuildingActor*>                      HighlightedPrimaryBuildings;           
TArray<class ABuildingActor*>                      HighlightedInteractionBuildings;       
TWeakObjectPtr<class ABuildingActor>               HighlightedPrimaryBuilding;            
TAssetPtr<class UMaterialInterface>                BuildPreviewMarkerParentMaterial;      
class UMaterialInstanceDynamic*                    BuildPreviewMarkerMID;                 
bool											                         BuildPreviewRotationIterations;                           
bool											                         bBuildPreviewMirrored : 1;                                
bool											                         bBuildFree : 1;                                           
bool											                         bCraftFree : 1;                                           
TEnumAsByte<EFortCostInfoTypes>                    CurrentCostInfoType;                   
class UClass*                                      CurrentBuildableClass;                 
class UClass*                                      PreviousBuildableClass;                
TEnumAsByte<EFortResourceLevel>                    CurrentResourceLevel;                  
TEnumAsByte<EFortResourceType>                     CurrentResourceType;                   
struct FLastBuildableState                         LastBuildableStateData[0xC];           
TArray<struct FFortDamageNumberInfo>               QueuedDamageNumbers;                   
class AFortDamageNumbersActor*                     DamageNumbersActor;                    
class UInputComponent*                             EditModeInputComponent;                
class ABuildingSMActor*                            EditBuildingActor;                     
float                                              EditModeDistance;                      
struct FVector                                     LastBuildPreviewGridSnapLoc;           
struct FRotator                                    LastBuildPreviewGridSnapRot;           
struct FVector                                     LastBuildPreviewGridSnapCentroid;      
class UInputComponent*                             PickerInputComponent;                  
class AFortDecoHelper*                             TrapPickerDecoHelper;                  
class AFortQuickBars*                              QuickBars;                             
TArray<struct FString>                             PinnedSchematics;                      
bool											                         bAutoEquipBetterItems : 1;                                // 0x1E70(0x00
class AFortInventory*                              WorldInventory;                        
class AFortInventory*                              OutpostInventory;                      
bool											                         bHasInitializedWorldInventory : 1;                        // 0x1FE4(0x00
bool  											                       bHasInitializedHeroInventory : 1;                         // 0x1FE5(0x
bool 											                         bAccountInventoryWasUpdated : 1;                          // 0x1FE6(0x0
bool  											                       bIsSavingGadgetLoadout : 1;                               // 0x1FE7(0x
class UFortClientBotManager*                       BotManager;                            
class UClass*                                      ClientBotManagerClass;                 
bool											                         bDropWeaponsDuringAllMissionStates : 1;                   // 0x2190(0x00
struct FFortRewardReport                           LatestRewardReport;                    
class UFortRegisteredPlayerInfo*                   MyPlayerInfo;                          
TArray<struct FFortUpdatedObjectiveStat>           UpdatedObjectiveStats;                 
bool 											                         bHasUnsavedPrimaryMissionProgress : 1;                    // 0x2290(0x0
class UStatManager*                                StatManager;                           
class UHeartbeatManager*                           HeartbeatManager;                      
class UFortStatEventManager*                       StatEventManager;                      
struct FFortPersistentGameplayStatContainer        CachedPersistentGameplayStats;         
class UMcpProfileGroup*                            McpProfileGroup;                       
class UFortMcpProfileAccount*                      MainMcpProfile;                        
bool											                         bTutorialCompleted : 1;                                   // 0x2300(0x00
bool											                         bShouldReceiveCriticalMatchBonus : 1;                     // 0x2304(0x00
struct FScriptMulticastDelegate                    OnServerPlayerChangedBuildMode;        
struct FVector                                     LocationUnderReticle;                  
bool											                         bInfiniteAmmo : 1;                                        // 0x2328(0x00
bool											                         bNoCoolDown : 1;                                          // 0x2328(0x00
bool											                         bInfiniteDurability : 1;                                  // 0x2328(0x00
bool											                         bUsePickers : 1;                                              // 0x2328(0x00
bool											                         bPickerOpen : 1;                                          // 0x2328(0x00
bool											                         bCheatGhost : 1;                                          // 0x2328(0x00
bool											                         bCheatFly : 1;                                            // 0x2328(0x00
bool											                         bEnableShotLogging : 1;                                   // 0x2329(0x00
bool											                         bIsNearActiveEncounters : 1;                              // 0x2329(0x00
int                                                OverriddenBackpackSize;                
uint32_t                                           AimHelpMode;                           
TEnumAsByte<EFortJumpStaminaCost>                  JumpStaminaCost;                       
struct FName                                       CameraPrototypeName;                   
class UFortHero*                                   AthenaMenuHeroDef;                     
bool											                         bShowDamageNumbersOnFatalHit : 1;                         // 0x2360(0x00
class ABuildingSMActor*                            PendingEnterModeActor;                 
};
