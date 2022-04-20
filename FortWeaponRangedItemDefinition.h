#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "./FortniteGame.h"
#include "FortWeaponItemDefinition.h"
#include "FortWeaponRangedItemDefinition.generated.h"




UCLASS(BlueprintType)
class FORTNITEGAME_API UFortWeaponRangedItemDefinition : public UFortWeaponItemDefinition
{

	GENERATED_BODY()
public:
	bool                                               bUseNativeWeaponTrace : 1;                                // 0x0648(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bTraceThroughPawns : 1;                                   // 0x0649(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TAssetPtr<class UParticleSystem>                   BulletShellFXTemplate;                                    // 0x0650(0x0020) (CPF_Edit, CPF_DisableEditOnInstance)
	bool                                               bShouldSpawnBulletShellFX : 1;                            // 0x0670(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	bool                                               bShouldUsePerfectAimWhenTargetingMinSpread : 1;           // 0x0671(0x0001) (CPF_Edit, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
  
 };
