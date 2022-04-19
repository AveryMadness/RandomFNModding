#pragma once

#include "CoreMinimal.h"
#include "Chaos/ChaosEngineInterface.h"

// enums
UENUM()
enum class EFortRarity : uint8
{
	Common           = 0,
	Uncommon         = 1,
	Rare             = 2,
	NumQualityValues = 3,
	EFortQuality_MAX = 4
};


UENUM()
enum class EFortItemTier : uint8
{
  No_Tier         = 0,
	I               = 1,
	II              = 2,
	III             = 3,
	IV              = 4,
	V               = 5,
	VI              = 6,
	VII             = 7,
	VIII            = 8,
	IX              = 9,
	X               = 10,
	NumItemTierValues = 11,
	EFortItemTier_MAX = 12
};


UENUM()
enum class EFortWeaponCoreAnimation : uint8
{
  Melee = 0,
	Pistol = 1,
	Shotgun = 2,
	PaperBlueprint = 3,
	Rifle = 4,
	MeleeOneHand = 5,
	MachinePistol = 6,
	RocketLauncher = 7,
	GrenadeLauncher = 8,
	GoingCommando = 9,
	AssaultRifle = 10,
	TacticalShotgun = 11,
	SniperRifle = 12,
	TrapPlacement = 13,
	ShoulderLauncher = 14,
	AbilityDecoTool = 15,
	EFortWeaponCoreAnimation_MAX = 16
};

UENUM()
enum class EFortWeaponTriggerType : uint8
{
  OnPress = 0,
	Automatic = 1,
	OnRelease = 2,
	OnPressAndRelease = 3,
	EFortWeaponTriggerType_MAX = 4
};

UENUM()
enum class EFortReplicatedStat : uint8
{
  MonsterKills = 0,
	MonsterDamagePoints = 1,
	PlayerKills = 2,
	WoodGathered = 3,
	StoneGathered = 4,
	MetalGathered = 5,
	Deaths    = 6,
	BuildingsBuilt = 7,
	BuildingsBuilt_Wood = 8,
	BuildingsBuilt_Stone = 9,
	BuildingsBuilt_Metal = 10,
	BuildingsUpgraded_Wood2 = 11,
	BuildingsUpgraded_Wood3 = 12,
	BuildingsUpgraded_Stone2 = 13,
	BuildingsUpgraded_Stone3 = 14,
	BuildingsUpgraded_Metal2 = 15,
	BuildingsUpgraded_Metal3 = 16,
	BuildingsDestroyed = 17,
	Repair_Wood = 18,
	Repair_Stone = 19,
	Repair_Metal = 20,
	FlagsCaptured = 21,
	FlagsReturned = 22,
	ContainersLooted = 23,
	CraftingPoints = 24,
	TrapPlacementPoints = 25,
	TrapActivationPoints = 26,
	TotalScore = 27,
	OldTotalScore = 28,
	CombatScore = 29,
	BuildingScore = 30,
	UtilityScore = 31,
	BadgesScore = 32,
	None      = 33,
	MAX       = 34,
	EFortReplicatedStat_MAX = 35
};

//structs
USTRUCT()
struct FFortGameplayAbilityBehaviorDistanceData
{
	GENERATED_BODY()

public:                     

	UPROPERTY(EditAnywhere)
	struct FGameplayTagContainer                       DistanceDataTag;  
  UPROPERTY(EditAnywhere) // 0x0000(0x0020) (CPF_Edit)
	float                                              Distance;                              
                     
};

USTRUCT()
struct FFortAbilitySetHandle
{
	GENERATED_BODY()

public:                     

	UPROPERTY(EditAnywhere)
	TWeakObjectPtr<class UAbilitySystemComponent>      TargetAbilitySystemComponent;                      
  UPROPERTY(EditAnywhere)
	TArray<struct FGameplayAbilitySpecHandle>          GrantedAbilityHandles;    
  UPROPERTY(EditAnywhere)
	TArray<struct FActiveGameplayEffectHandle>         AppliedEffectHandles;                                                                             
        
};

USTRUCT()
struct FFortEffectDistanceQuality
{
  GENERATED_BODY()
    
 public:
  
  UPROPERTY(EditAnywhere)
  float                                              MinDistanceCinematic;               
  UPROPERTY(EditAnywhere)// 0x0000(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceEpic;              
  UPROPERTY(EditAnywhere)// 0x0004(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceHigh;            
  UPROPERTY(EditAnywhere)// 0x0008(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceMedium;      
  UPROPERTY(EditAnywhere)// 0x000C(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinDistanceLow;      
  UPROPERTY(EditAnywhere)// 0x0010(0x0004) (CPF_Edit, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bAllowCinematic : 1; 
  UPROPERTY(EditAnywhere)// 0x0014(0x0001)
	bool                                               bAllowEpic : 1;     
  UPROPERTY(EditAnywhere)// 0x0014(0x0001)
	bool                                               bAllowHigh : 1;    
  UPROPERTY(EditAnywhere)// 0x0014(0x0001)
	bool                                               bAllowMedium : 1;   
  UPROPERTY(EditAnywhere)// 0x0014(0x0001)
	bool                                               bAllowLow : 1;  

};
