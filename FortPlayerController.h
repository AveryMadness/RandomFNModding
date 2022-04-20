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
UPROPERTY(EditAnywhere)                               
bool											                         bIsDisconnecting : 1;  
UPROPERTY(EditAnywhere)                                   
bool											                         bIsBeingKicked : 1;  
UPROPERTY(EditAnywhere)                                     
bool											                         bIsLateJoining : 1;  
UPROPERTY(EditAnywhere)                                     
bool											                         bHasInitiallySpawned : 1;    
UPROPERTY(EditAnywhere)                             
bool											                         bAssignedStartSpawn : 1; 
UPROPERTY(EditAnywhere)                                 
bool											                         bReadyToStartMatch : 1;   
UPROPERTY(EditAnywhere)                                // 0x06D8(0x00
bool											                         bClientPawnIsLoaded : 1;  
UPROPERTY(EditAnywhere)                                // 0x06D8(0x00
struct FVector                                     SpawnLoc;                   
UPROPERTY(EditAnywhere)           
int                                                NumPreviousSpawns;     
UPROPERTY(EditAnywhere)                
struct FScriptMulticastDelegate                    OnBlueprintReadyCheckCompleted;    
UPROPERTY(EditAnywhere)    
TArray<class AFortAIPawn*>                         ManagedAIs;             
UPROPERTY(EditAnywhere)               
class AFortPlayerPawn*                             MyFortPawn;      
UPROPERTY(EditAnywhere)                      
bool											                         bHasClientFinishedLoading : 1;     
UPROPERTY(EditAnywhere)                       // 0x0778(0x00
bool											                         bHasServerFinishedLoading : 1;   
UPROPERTY(EditAnywhere)                         // 0x0779(0x00
float                                              TimeStartedWaiting; 
UPROPERTY(EditAnywhere)                   
float                                              TimeFinishedNavigationBuild;    
UPROPERTY(EditAnywhere)       
struct FVector                                     PendingSpectatorLocation;  
UPROPERTY(EditAnywhere)            
TWeakObjectPtr<class AActor>                       ActorUnderReticle;    
UPROPERTY(EditAnywhere)                 
TWeakObjectPtr<class AFortCrackEffect>             WeakspotUnderReticle; 
UPROPERTY(EditAnywhere)                 
float                                              LastActiveTime;  
UPROPERTY(EditAnywhere)                      
class UAudioComponent*                             LongInteractAudioComponent;  
UPROPERTY(EditAnywhere)          
float                                              InteractDistance;   
UPROPERTY(EditAnywhere)                   
float                                              InteractHighlightDistance; 
UPROPERTY(EditAnywhere)            
float                                              InteractTraceExtent;  
UPROPERTY(EditAnywhere)                 
float                                              LastInteractTraceTime; 
UPROPERTY(EditAnywhere)                
float                                              InteractMultiplierForActiveInteraction;
UPROPERTY(EditAnywhere)
float                                              InteractMultiplierGamepad;
UPROPERTY(EditAnywhere)             
class UFortInteractContextInfo*                    PossibleInteractContextInfo;   
UPROPERTY(EditAnywhere)        
class UFortInteractContextInfo*                    InteractResponse;     
UPROPERTY(EditAnywhere)                 
bool											                         bWantsToSprint : 1;  
UPROPERTY(EditAnywhere)                                     // 0x10D5(0x00
bool											                         bHoldingSprint : 1;  
UPROPERTY(EditAnywhere)                                     // 0x10D6(0x00
bool											                         bSprintToggleable : 1;  
UPROPERTY(EditAnywhere)                                  // 0x10D7(0x00
bool											                         bSprintCancelsReload : 1;  
UPROPERTY(EditAnywhere)                               // 0x10D8(0x00
bool											                         bTapInteractEnabled : 1;
UPROPERTY(EditAnywhere)                                  // 0x10D9(0x00
bool											                         bMovementDisabledDueToCancellableAction : 1;  
UPROPERTY(EditAnywhere)            // 0x10DA(0x00
bool											                         bIsPlayerActivelyMoving : 1;    
UPROPERTY(EditAnywhere)                          // 0x10DB(0x00
int                                                InMovementCancellableAction;           
UPROPERTY(EditAnywhere)
bool											                         bHoldingUse : 1;     
UPROPERTY(EditAnywhere)                                     // 0x10E0(0x00
float                                              LastMoveForwardTime;                   
UPROPERTY(EditAnywhere)
bool											                         bAtNameBaseScreen : 1;  
UPROPERTY(EditAnywhere)                                  // 0x10E9(0x00
bool											                         bInventoryToggledByAlt : 1;    
UPROPERTY(EditAnywhere)                           // 0x10EA(0x00
struct FScriptMulticastDelegate                    OnSetFirstPersonCamera;                
UPROPERTY(EditAnywhere)
class UClass*                                      CinematicCameraClassOverride;        
UPROPERTY(EditAnywhere)  
class UFortIndicatorManager*                       IndicatorManager;   
UPROPERTY(EditAnywhere)                   
struct FScriptMulticastDelegate                    OnUiChoiceCompleted;
UPROPERTY(EditAnywhere)                   
struct FScriptMulticastDelegate                    OnRegainedFocus;   
UPROPERTY(EditAnywhere)                    
bool											                         bIsInQuickToggleCursorMode : 1;    
UPROPERTY(EditAnywhere)                       // 0x1520(0x00
bool											                         bGamepadAbilityPending : 1; 
UPROPERTY(EditAnywhere)                              // 0x1521(0x00
bool											                         bForceAllowCursorMode : 1;
UPROPERTY(EditAnywhere)                                // 0x1522(0x00
bool											                         bDragDropPending : 1;    
UPROPERTY(EditAnywhere)                                 // 0x1523(0x00
bool											                         bSuppressEventNotifications : 1; 
UPROPERTY(EditAnywhere)                         // 0x1524(0x00
float                                              LastSpotTime; 
UPROPERTY(EditAnywhere)                         
TArray<TWeakObjectPtr<class AFortMarkActor>>       CurrentMarks;  
UPROPERTY(EditAnywhere)                        
class UFortGameplayAbility*                        PreviewAbility; 
UPROPERTY(EditAnywhere)                       
struct FAIDirectorDebugInfo                        IntensityGraphInfo; 
UPROPERTY(EditAnywhere)                   
struct FAIDirectorDebugInfo                        PIDValuesGraphInfo;  
UPROPERTY(EditAnywhere)                  
struct FAIDirectorDebugInfo                        PIDContributionsGraphInfo;  
UPROPERTY(EditAnywhere)           
class AFortCombatManager*                          CombatManager;     
UPROPERTY(EditAnywhere)                    
class AFortAIDirectorDataManager*                  AIDirectorDataManager; 
UPROPERTY(EditAnywhere)                
class AFortMusicManager*                           MusicManager;     
UPROPERTY(EditAnywhere)                     
class UInputComponent*                             BuildPreviewModeInputComponent;  
UPROPERTY(EditAnywhere)      
class ABuildingPlayerPrimitivePreview*             BuildPreviewMarker;     
UPROPERTY(EditAnywhere)               
class ABuildingActor*                              TargetedBuilding;  
UPROPERTY(EditAnywhere)                    
class UClass*                                      ContextualConversionClass;  
UPROPERTY(EditAnywhere)           
TAssetPtr<class USoundBase>                        StartRepairSound;    
UPROPERTY(EditAnywhere)                  
TAssetPtr<class USoundBase>                        StartUpgradeSound; 
UPROPERTY(EditAnywhere)                    
TArray<class ABuildingActor*>                      HighlightedPrimaryBuildings; 
UPROPERTY(EditAnywhere)          
TArray<class ABuildingActor*>                      HighlightedInteractionBuildings; 
UPROPERTY(EditAnywhere)      
TWeakObjectPtr<class ABuildingActor>               HighlightedPrimaryBuilding;
UPROPERTY(EditAnywhere)            
TAssetPtr<class UMaterialInterface>                BuildPreviewMarkerParentMaterial;
UPROPERTY(EditAnywhere)      
class UMaterialInstanceDynamic*                    BuildPreviewMarkerMID;  
UPROPERTY(EditAnywhere)               
bool											                         BuildPreviewRotationIterations;
UPROPERTY(EditAnywhere)                           
bool											                         bBuildPreviewMirrored : 1;
UPROPERTY(EditAnywhere)                                
bool											                         bBuildFree : 1; 
UPROPERTY(EditAnywhere)                                          
bool											                         bCraftFree : 1; 
UPROPERTY(EditAnywhere)                                          
TEnumAsByte<EFortCostInfoTypes>                    CurrentCostInfoType; 
UPROPERTY(EditAnywhere)                  
class UClass*                                      CurrentBuildableClass; 
UPROPERTY(EditAnywhere)                
class UClass*                                      PreviousBuildableClass; 
UPROPERTY(EditAnywhere)               
TEnumAsByte<EFortResourceLevel>                    CurrentResourceLevel;
UPROPERTY(EditAnywhere)                  
TEnumAsByte<EFortResourceType>                     CurrentResourceType; 
UPROPERTY(EditAnywhere)                  
struct FLastBuildableState                         LastBuildableStateData[0xC];  
UPROPERTY(EditAnywhere)         
TArray<struct FFortDamageNumberInfo>               QueuedDamageNumbers; 
UPROPERTY(EditAnywhere)                  
class AFortDamageNumbersActor*                     DamageNumbersActor;
UPROPERTY(EditAnywhere)                    
class UInputComponent*                             EditModeInputComponent;
UPROPERTY(EditAnywhere)                
class ABuildingSMActor*                            EditBuildingActor;
UPROPERTY(EditAnywhere)                     
float                                              EditModeDistance; 
UPROPERTY(EditAnywhere)                     
struct FVector                                     LastBuildPreviewGridSnapLoc; 
UPROPERTY(EditAnywhere)          
struct FRotator                                    LastBuildPreviewGridSnapRot;
UPROPERTY(EditAnywhere)           
struct FVector                                     LastBuildPreviewGridSnapCentroid;
UPROPERTY(EditAnywhere)      
class UInputComponent*                             PickerInputComponent; 
UPROPERTY(EditAnywhere)                 
class AFortDecoHelper*                             TrapPickerDecoHelper;
UPROPERTY(EditAnywhere)                  
class AFortQuickBars*                              QuickBars; 
UPROPERTY(EditAnywhere)                            
TArray<struct FString>                             PinnedSchematics; 
UPROPERTY(EditAnywhere)                     
bool											                         bAutoEquipBetterItems : 1; 
UPROPERTY(EditAnywhere)                               // 0x1E70(0x00
class AFortInventory*                              WorldInventory;
UPROPERTY(EditAnywhere)                        
class AFortInventory*                              OutpostInventory; 
UPROPERTY(EditAnywhere)                     
bool											                         bHasInitializedWorldInventory : 1; 
UPROPERTY(EditAnywhere)                       // 0x1FE4(0x00
bool  											                       bHasInitializedHeroInventory : 1; 
UPROPERTY(EditAnywhere)                        // 0x1FE5(0x
bool 											                         bAccountInventoryWasUpdated : 1;  
UPROPERTY(EditAnywhere)                        // 0x1FE6(0x0
bool  											                       bIsSavingGadgetLoadout : 1;
UPROPERTY(EditAnywhere)                               // 0x1FE7(0x
class UFortClientBotManager*                       BotManager;
UPROPERTY(EditAnywhere)                            
class UClass*                                      ClientBotManagerClass; 
UPROPERTY(EditAnywhere)                
bool											                         bDropWeaponsDuringAllMissionStates : 1; 
UPROPERTY(EditAnywhere)                  // 0x2190(0x00
struct FFortRewardReport                           LatestRewardReport; 
UPROPERTY(EditAnywhere)                   
class UFortRegisteredPlayerInfo*                   MyPlayerInfo;        
UPROPERTY(EditAnywhere)                  
TArray<struct FFortUpdatedObjectiveStat>           UpdatedObjectiveStats; 
UPROPERTY(EditAnywhere)                
bool 											                         bHasUnsavedPrimaryMissionProgress : 1; 
UPROPERTY(EditAnywhere)                   // 0x2290(0x0
class UStatManager*                                StatManager;
UPROPERTY(EditAnywhere)                           
class UHeartbeatManager*                           HeartbeatManager;
UPROPERTY(EditAnywhere)                      
class UFortStatEventManager*                       StatEventManager;
UPROPERTY(EditAnywhere)                      
struct FFortPersistentGameplayStatContainer        CachedPersistentGameplayStats; 
UPROPERTY(EditAnywhere)        
class UMcpProfileGroup*                            McpProfileGroup;
UPROPERTY(EditAnywhere)                       
class UFortMcpProfileAccount*                      MainMcpProfile;
UPROPERTY(EditAnywhere)
bool											                         bTutorialCompleted : 1;
UPROPERTY(EditAnywhere)// 0x2300(0x00
bool											                         bShouldReceiveCriticalMatchBonus : 1;
UPROPERTY(EditAnywhere)// 0x2304(0x00
struct FScriptMulticastDelegate                    OnServerPlayerChangedBuildMode;
UPROPERTY(EditAnywhere)
struct FVector                                     LocationUnderReticle;
UPROPERTY(EditAnywhere)
bool											                         bInfiniteAmmo : 1;
UPROPERTY(EditAnywhere)// 0x2328(0x00
bool											                         bNoCoolDown : 1;
UPROPERTY(EditAnywhere)// 0x2328(0x00
bool											                         bInfiniteDurability : 1;
UPROPERTY(EditAnywhere)// 0x2328(0x00
bool											                         bUsePickers : 1;
UPROPERTY(EditAnywhere)// 0x2328(0x00
bool											                         bPickerOpen : 1;
UPROPERTY(EditAnywhere)// 0x2328(0x00
bool											                         bCheatGhost : 1;
UPROPERTY(EditAnywhere)// 0x2328(0x00
bool											                         bCheatFly : 1;
UPROPERTY(EditAnywhere)// 0x2328(0x00
bool											                         bEnableShotLogging : 1;
UPROPERTY(EditAnywhere)// 0x2329(0x00
bool											                         bIsNearActiveEncounters : 1;
UPROPERTY(EditAnywhere)// 0x2329(0x00
int                                                OverriddenBackpackSize;       
UPROPERTY(EditAnywhere)         
uint32_t                                           AimHelpMode;      
UPROPERTY(EditAnywhere)                     
TEnumAsByte<EFortJumpStaminaCost>                  JumpStaminaCost;  
UPROPERTY(EditAnywhere)                     
struct FName                                       CameraPrototypeName; 
UPROPERTY(EditAnywhere)                  
class UFortHero*                                   AthenaMenuHeroDef;  
UPROPERTY(EditAnywhere)                   
bool											                         bShowDamageNumbersOnFatalHit : 1;   
UPROPERTY(EditAnywhere)                      // 0x2360(0x00
class ABuildingSMActor*                            PendingEnterModeActor;                 
};
