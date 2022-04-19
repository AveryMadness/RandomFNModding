// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortAlterationItemDefinition.h"
#include "FortWorldItemDefinition.h"
#include "FortWeaponItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortWeaponItemDefinition : public UFortWorldItemDefinition
{
	GENERATED_BODY()
	
public:

UPROPERTY(EditAnywhere)
TAssetPtr<class UClass>                            WeaponActorClass;   
UPROPERTY(EditAnywhere)                  
TAssetPtr<class USkeletalMesh>                     WeaponMeshOverride;
UPROPERTY(EditAnywhere)                   
struct FDataTableRowHandle                         WeaponStatHandle;          
UPROPERTY(EditAnywhere)           
TAssetPtr<class UFortAlterationItemDefinition>     BaseAlteration;      
UPROPERTY(EditAnywhere)                 
TAssetPtr<class UFortAlterationItemDefinition>     BaseCosmeticAlteration; 
UPROPERTY(EditAnywhere)              
TAssetPtr<class UClass>                            PrimaryFireAbility;    
UPROPERTY(EditAnywhere)               
TAssetPtr<class UClass>                            SecondaryFireAbility;  
UPROPERTY(EditAnywhere)               
TAssetPtr<class UClass>                            ReloadAbility;    
UPROPERTY(EditAnywhere)                    
TArray<TAssetPtr<class UClass>>                    EquippedAbilities;   
UPROPERTY(EditAnywhere)                 
TAssetPtr<class UFortWorldItemDefinition>          AmmoData;     
UPROPERTY(EditAnywhere)                        
float                                              LowAmmoPercentage;
UPROPERTY(EditAnywhere)                    
float                                              DegradedPercentage; 
UPROPERTY(EditAnywhere)                  
TEnumAsByte<EFortWeaponTriggerType>                TriggerType;    
UPROPERTY(EditAnywhere)                      
bool                                               bAllowTargetingDuringReload : 1;    
UPROPERTY(EditAnywhere)                     
TAssetPtr<class UTexture2D>                        ReticleImage;           
UPROPERTY(EditAnywhere)              
TArray<float>                                      ReticleCornerAngles;   
UPROPERTY(EditAnywhere)               
TAssetPtr<class UTexture2D>                        HitNotifyImage;    
UPROPERTY(EditAnywhere)                   
TAssetPtr<class UTexture2D>                        MuzzleBlockedImage;
UPROPERTY(EditAnywhere)                   
TArray<float>                                      HitNotifyCornerAngles; 
UPROPERTY(EditAnywhere)               
TAssetPtr<class UTexture2D>                        ReticleCenterImage;  
UPROPERTY(EditAnywhere)                 
struct FVector2D                                   ReticleCenterImageOffset; 
UPROPERTY(EditAnywhere)            
bool                                               bReticleCornerOutsideSpreadRadius : 1;
UPROPERTY(EditAnywhere)
float                                              HitNotifyDuration;         
UPROPERTY(EditAnywhere)           
TAssetPtr<class UCurveFloat>                       HitNotifyOpacityCurve;   
UPROPERTY(EditAnywhere)             
bool                                               bValidForLastEquipped : 1;            

   

};
