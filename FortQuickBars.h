#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortWorldItem.h"
#include "FortQuickBars.generated.h"


UCLASS(BlueprintType)
class FORTNITE_API AFortQuickBars : public AActor
{

    GENERATED_BODY()
    
public:
	struct FQuickBar                                   PrimaryQuickBar;                                          // 0x0388(0x0090) (CPF_Net)
	struct FQuickBar                                   SecondaryQuickBar;                                        // 0x0418(0x0090) (CPF_Net)
	TArray<class UFortWorldItem*>                      CachedFloorTraps;                                         // 0x0670(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UFortWorldItem*>                      CachedWallTraps;                                          // 0x0680(0x0010) (CPF_ZeroConstructor, CPF_Transient)
	TArray<class UFortWorldItem*>                      CachedCeilingTraps;                                       // 0x0690(0x0010) (CPF_ZeroConstructor, CPF_Transient)
  };
