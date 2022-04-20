// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "McpItemDefinitionBase.h"
#include "FortWorldItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortItemDefinition : public UMcpItemDefinitionBase
{
	GENERATED_BODY()
	
public:

    UPROPERTY(EditAnywhere)
	struct FScriptMulticastDelegate                    OnItemCountChanged;  
    UPROPERTY(EditAnywhere)
    EFortItemType					   ItemType;
    UPROPERTY(EditAnywhere)                                // 0x0038(0x0010) (CPF_ZeroConstructor, CPF_InstancedReference, CPF_BlueprintAssignable)
	int                                                MinLevel;          
    UPROPERTY(EditAnywhere)                                       // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                MaxLevel;    
    UPROPERTY(EditAnywhere)                                             // 0x0050(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       DisplayName; 
    UPROPERTY(EditAnywhere)                                             // 0x0058(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       ShortDescription;   
    UPROPERTY(EditAnywhere)                                      // 0x0070(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       Description; 
    UPROPERTY(EditAnywhere)                                             // 0x0088(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FText                                       DisplayNamePrefix; 
    UPROPERTY(EditAnywhere)                                       // 0x00A0(0x0018)
	struct FText                                       SearchTags;    
    UPROPERTY(EditAnywhere)                                           // 0x00B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       GameplayTags;  
    UPROPERTY(EditAnywhere)                                           // 0x00D0(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_DisableEditOnInstance)
	bool                                               bIsAccountItem : 1;   
    UPROPERTY(EditAnywhere)                                    // 0x00F4(0x0001)
	bool                                               bNeverPersisted : 1; 
    UPROPERTY(EditAnywhere)                                     // 0x00F4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       SecondaryCategoryOverrideTags;
    UPROPERTY(EditAnywhere)                            // 0x00F8(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	struct FGameplayTagContainer                       TertiaryCategoryOverrideTags; 
    UPROPERTY(EditAnywhere)                            // 0x0118(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	bool                                               bAllowMultipleStacks : 1;  
    UPROPERTY(EditAnywhere)                               // 0x0138(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	int                                                MaxStackSize; 
    UPROPERTY(EditAnywhere)                                            // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bPrivateTemplate : 1;      
    UPROPERTY(EditAnywhere)                               // 0x0140(0x0001) (CPF_ZeroConstructor, CPF_Deprecated, CPF_IsPlainOldData)
	bool                                               bInventorySizeLimited : 1;  
    UPROPERTY(EditAnywhere)                              // 0x0141(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bCalculateRarityFromQualityAndTier : 1; 
    UPROPERTY(EditAnywhere)                  // 0x0143(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortQuality>                          Quality;  
    UPROPERTY(EditAnywhere)                                                // 0x0144(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         Tier; 
    UPROPERTY(EditAnywhere)                                                    // 0x0145(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortItemTier>                         MaxTier;  
    UPROPERTY(EditAnywhere)                                                // 0x0146(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class UClass>                            TooltipClass;
    UPROPERTY(EditAnywhere)                                             // 0x0148(0x0020) (CPF_Edit)
	TAssetPtr<class UFortTooltipDisplayStatsList>      StatList;   
    UPROPERTY(EditAnywhere)                                              // 0x0168(0x0020) (CPF_Edit)
	struct FCurveTableRowHandle                        RatingLookup;  
    UPROPERTY(EditAnywhere)                                           // 0x0188(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly)
	class UTexture2D*                                  SmallPreviewImage; 
    UPROPERTY(EditAnywhere)                                       // 0x0198(0x0008) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UTexture2D>                        LargePreviewImage; 
    UPROPERTY(EditAnywhere)                                       // 0x01A0(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	struct FTransform                                  FrontendPreviewMeshOffset;   
    UPROPERTY(EditAnywhere)                             // 0x01D0(0x0030) (CPF_Edit, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TAssetPtr<class UStaticMesh>                       FrontendPreviewMeshOverride;                              // 0x0200(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
                          
};
