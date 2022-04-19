// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortWorldItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortWorldItemDefinition : public UFortItemDefinition
{
	GENERATED_BODY()
	
public:

UPROPERTY(EditAnywhere)
struct FGameplayTagContainer                       RequiredEquipTags;
UPROPERTY(EditAnywhere)    
struct FGameplayTagContainer                       OverrideAutoEquipTags; 
UPROPERTY(EditAnywhere)                         
bool                                               bCanAutoEquipByClass : 1;  
UPROPERTY(EditAnywhere)                                                  
bool                                               bSupportsQuickbarFocus : 1; 
UPROPERTY(EditAnywhere)                    
bool                                               bShouldShowItemToast : 1;   
UPROPERTY(EditAnywhere)                    
bool                                               bShowDirectionalArrowWhenFarOff : 1;  
UPROPERTY(EditAnywhere)          
bool                                               bCanBeDropped : 1;   
UPROPERTY(EditAnywhere)                           
bool                                               bItemCanBeStolen : 1;     
UPROPERTY(EditAnywhere)                      
bool                                               bCanBeDepositedInStorageVault : 1; 
UPROPERTY(EditAnywhere)             
bool                                               bItemHasDurability : 1;        
UPROPERTY(EditAnywhere)                 
int                                                DropCount;      
UPROPERTY(EditAnywhere)                                
TEnumAsByte<EFortReplicatedStat>                   AccumulatingStatType;   
UPROPERTY(EditAnywhere)                                                     
struct FSlateBrush                                 MiniMapIconBrush;  
UPROPERTY(EditAnywhere)                             
float                                              MiniMapViewableDistance; 
UPROPERTY(EditAnywhere)                                                    
struct FText                                       OwnerPickupText;    
UPROPERTY(EditAnywhere)                            
struct FDataTableCategoryHandle                    LootLevelData;  
UPROPERTY(EditAnywhere)                                                             
struct FTransform                                  PickupMeshTransform;   
UPROPERTY(EditAnywhere)                         
bool                                               bOverridePickupMeshTransform : 1; 
UPROPERTY(EditAnywhere)              
bool                                               bDropOnDeath : 1;     
UPROPERTY(EditAnywhere)                          
bool                                               bDropOnLogout : 1;    
UPROPERTY(EditAnywhere)                                                       
TAssetPtr<class UStaticMesh>                       PickupStaticMesh;
UPROPERTY(EditAnywhere)                               
TAssetPtr<class USkeletalMesh>                     PickupSkeletalMesh;    
UPROPERTY(EditAnywhere)                         
TAssetPtr<class USoundBase>                        PickupSound;     
UPROPERTY(EditAnywhere)                               
TAssetPtr<class USoundBase>                        DropSound;   
UPROPERTY(EditAnywhere)                                   
struct FDataTableRowHandle                         DisassembleRecipe; 
UPROPERTY(EditAnywhere)                             
float                                              DisassembleDurabilityDegradeMinLootPercent;     
UPROPERTY(EditAnywhere)
float                                              DisassembleDurabilityDegradeMaxLootPercent;  
UPROPERTY(EditAnywhere)   
bool                                               bHasDisintegrationValue : 1;     
UPROPERTY(EditAnywhere)               
bool                                               bUsesCraftingRecipeToGetDisintegrationValue : 1;
UPROPERTY(EditAnywhere)
int                                                FabricationValueOverride; 
UPROPERTY(EditAnywhere)                      
int                                                PreferredQuickbarSlot;                          
};
