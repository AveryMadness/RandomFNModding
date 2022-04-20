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

USTRUCT()
struct FQuickBar
{
	GENERATED_BODY()
	
		
 public:
	
	UPROPERTY(EditAnywhere)
	int                                                CurrentFocusedSlot;
	UPROPERTY(EditAnywhere)
	int                                                PreviousFocusedSlot;  
	UPROPERTY(EditAnywhere)                                    // 0x0004(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                SecondaryFocusedSlot; 
	UPROPERTY(EditAnywhere)                                     // 0x000C(0x0004) MISSED OFFSET
	TArray<struct FQuickBarSlot>                       Slots;               
	UPROPERTY(EditAnywhere)                                     // 0x0010(0x0010) (CPF_ZeroConstructor)
	struct FQuickBarData                               DataDefinition;    
	UPROPERTY(EditAnywhere)                                     // 0x0030(0x0050) UNKNOWN PROPERTY: SetProperty FortniteGame.QuickBar.EquippedItemDefinitions
	TArray<int>                                        SharedVisibleSlotIndicesWhenUsingGamepad;                 // 0x0080(0x0010) (CPF_ZeroConstructor, CPF_Transient, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
};

USTRUCT()
struct FFortBaseWeaponStats : public FTableRowBase
{

	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	int                                                BaseLevel;  
	UPROPERTY(EditAnywhere)                                              // 0x0008(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgPB;  
	UPROPERTY(EditAnywhere)                                                  // 0x000C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgMid;  
	UPROPERTY(EditAnywhere)                                                 // 0x0010(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgLong;  
	UPROPERTY(EditAnywhere)                                                // 0x0014(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgMaxRange; 
	UPROPERTY(EditAnywhere)                                             // 0x0018(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgPB; 
	UPROPERTY(EditAnywhere)                                                // 0x001C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgMid;
	UPROPERTY(EditAnywhere)                                                // 0x0020(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgLong;
	UPROPERTY(EditAnywhere)                                               // 0x0024(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgMaxRange;
	UPROPERTY(EditAnywhere)                                           // 0x0028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgPB;
	UPROPERTY(EditAnywhere)                                              // 0x002C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgMid;
	UPROPERTY(EditAnywhere)                                             // 0x0030(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgLong;
	UPROPERTY(EditAnywhere)                                            // 0x0034(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgMaxRange; 
	UPROPERTY(EditAnywhere)                                       // 0x0038(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool						   bForceControl : 1; 
	UPROPERTY(EditAnywhere)                                       // 0x003C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RngPB; 
	UPROPERTY(EditAnywhere)                                                   // 0x0040(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RngMid;
	UPROPERTY(EditAnywhere)                                                   // 0x0044(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RngLong;
	UPROPERTY(EditAnywhere)                                                  // 0x0048(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RngMax;
	UPROPERTY(EditAnywhere)                                                   // 0x004C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveTable*                                 DmgScaleTable; 
	UPROPERTY(EditAnywhere)                                           // 0x0050(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DmgScaleTableRow;
	UPROPERTY(EditAnywhere)                                         // 0x0058(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DmgScale;
	UPROPERTY(EditAnywhere)                                                 // 0x0060(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveTable*                                 EnvDmgScaleTable;
	UPROPERTY(EditAnywhere)                                         // 0x0068(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       EnvDmgScaleTableRow; 
	UPROPERTY(EditAnywhere)                                     // 0x0070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EnvDmgScale;   
	UPROPERTY(EditAnywhere)                                           // 0x0078(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCurveTable*                                 ImpactDmgScaleTable;
	UPROPERTY(EditAnywhere)                                      // 0x0080(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       ImpactDmgScaleTableRow;
	UPROPERTY(EditAnywhere)                                   // 0x0088(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ImpactDmgScale;
	UPROPERTY(EditAnywhere)                                           // 0x0090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       SurfaceRatioRowName; 
	UPROPERTY(EditAnywhere)                                     // 0x0098(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageZone_Light; 
	UPROPERTY(EditAnywhere)                                        // 0x00A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageZone_Normal; 
	UPROPERTY(EditAnywhere)                                       // 0x00A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageZone_Critical; 
	UPROPERTY(EditAnywhere)                                     // 0x00A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageZone_Vulnerability; 
	UPROPERTY(EditAnywhere)                                // 0x00AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockbackMagnitude; 
	UPROPERTY(EditAnywhere)                                      // 0x00B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MidRangeKnockbackMagnitude;
	UPROPERTY(EditAnywhere)                               // 0x00B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LongRangeKnockbackMagnitude;
	UPROPERTY(EditAnywhere)                              // 0x00B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              KnockbackZAngle;
	UPROPERTY(EditAnywhere)                                          // 0x00BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StunTime; 
	UPROPERTY(EditAnywhere)                                                // 0x00C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StunScale; 
	UPROPERTY(EditAnywhere)                                               // 0x00C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataTable*                                  Durability;
	UPROPERTY(EditAnywhere)                                               // 0x00C8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       DurabilityRowName;
	UPROPERTY(EditAnywhere)                                        // 0x00D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DurabilityScale;
	UPROPERTY(EditAnywhere)                                          // 0x00D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DurabilityPerUse;
	UPROPERTY(EditAnywhere)                                         // 0x00DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiceCritChance;
	UPROPERTY(EditAnywhere)                                           // 0x00E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DiceCritDamageMultiplier; 
	UPROPERTY(EditAnywhere)                                // 0x00E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReloadTime;  
	UPROPERTY(EditAnywhere)                                             // 0x00E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ReloadScale;      
	UPROPERTY(EditAnywhere)                                        // 0x00EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool						   bReloadIndividualBullets : 1; 
	UPROPERTY(EditAnywhere)                            // 0x00F0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool						   bReloadInterruptIsImmediate : 1;
	UPROPERTY(EditAnywhere)                          // 0x00F1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ClipSize;
	UPROPERTY(EditAnywhere)                                                 // 0x00F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ClipScale; 
	UPROPERTY(EditAnywhere)                                               // 0x00F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                InitialClips;
	UPROPERTY(EditAnywhere)                                             // 0x00FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                CartridgePerFire; 
	UPROPERTY(EditAnywhere)                                        // 0x0100(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AmmoCostPerFire; 
	UPROPERTY(EditAnywhere)                                         // 0x0104(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxAmmoCostPerFire; 
	UPROPERTY(EditAnywhere)                                      // 0x0108(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinChargeTime; 
	UPROPERTY(EditAnywhere)                                           // 0x010C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxChargeTime; 
	UPROPERTY(EditAnywhere)                                           // 0x0110(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ChargeDownTime;
	UPROPERTY(EditAnywhere)                                           // 0x0114(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinChargeDamageMultiplier; 
	UPROPERTY(EditAnywhere)                               // 0x0118(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxChargeDamageMultiplier;                                // 0x011C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};


USTRUCT()
struct FFortRangedWeaponStats : public FFortBaseWeaponStats
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	float                                              Spread;  
	UPROPERTY(EditAnywhere)                                                 // 0x0120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SpreadDownsights; 
	UPROPERTY(EditAnywhere)                                        // 0x0124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              StandingStillSpreadMultiplier;   
	UPROPERTY(EditAnywhere)                         // 0x0128(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AthenaCrouchingSpreadMultiplier; 
	UPROPERTY(EditAnywhere)                         // 0x012C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AthenaJumpingFallingSpreadMultiplier;  
	UPROPERTY(EditAnywhere)                   // 0x0130(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AthenaSprintingSpreadMultiplier;  
	UPROPERTY(EditAnywhere)                        // 0x0134(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinSpeedForSpreadMultiplier; 
	UPROPERTY(EditAnywhere)                             // 0x0138(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxSpeedForSpreadMultiplier;
	UPROPERTY(EditAnywhere)                              // 0x013C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatX1;
	UPROPERTY(EditAnywhere)                                                   // 0x0140(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY1;
	UPROPERTY(EditAnywhere)                                                   // 0x0144(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatX2;
	UPROPERTY(EditAnywhere)                                                   // 0x0148(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY2;
	UPROPERTY(EditAnywhere)                                                   // 0x014C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatX3;
	UPROPERTY(EditAnywhere)                                                   // 0x0150(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatY3;
	UPROPERTY(EditAnywhere)                                                   // 0x0154(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatXScale;
	UPROPERTY(EditAnywhere)                                               // 0x0158(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              HeatYScale;
	UPROPERTY(EditAnywhere)                                               // 0x015C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX1; 
	UPROPERTY(EditAnywhere)                                                  // 0x0160(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY1;
	UPROPERTY(EditAnywhere)                                                   // 0x0164(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX2;
	UPROPERTY(EditAnywhere)                                                   // 0x0168(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY2;
	UPROPERTY(EditAnywhere)                                                   // 0x016C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolX3; 
	UPROPERTY(EditAnywhere)                                                  // 0x0170(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolY3;
	UPROPERTY(EditAnywhere)                                                   // 0x0174(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolXScale;
	UPROPERTY(EditAnywhere)                                               // 0x0178(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              CoolYScale;
	UPROPERTY(EditAnywhere)                                               // 0x017C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BulletsPerCartridge;
	UPROPERTY(EditAnywhere)                                      // 0x0180(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              FiringRate; 
	UPROPERTY(EditAnywhere)                                              // 0x0184(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              ROFScale;
	UPROPERTY(EditAnywhere)                                                 // 0x0188(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              BurstFiringRate;
	UPROPERTY(EditAnywhere)                                          // 0x018C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVert;
	UPROPERTY(EditAnywhere)                                               // 0x0190(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVertScale; 
	UPROPERTY(EditAnywhere)                                         // 0x0194(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilVertScaleGamepad; 
	UPROPERTY(EditAnywhere)                                  // 0x0198(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              VertRecoilDownChance; 
	UPROPERTY(EditAnywhere)                                    // 0x019C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHoriz; 
	UPROPERTY(EditAnywhere)                                             // 0x01A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHorizScale;
	UPROPERTY(EditAnywhere)                                         // 0x01A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilHorizScaleGamepad;
	UPROPERTY(EditAnywhere)                                  // 0x01A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilInterpSpeed;
	UPROPERTY(EditAnywhere)                                        // 0x01AC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryInterpSpeed;
	UPROPERTY(EditAnywhere)                                // 0x01B0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryDelay;
	UPROPERTY(EditAnywhere)                                      // 0x01B4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilRecoveryFraction;
	UPROPERTY(EditAnywhere)                                   // 0x01B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RecoilDownsightsMultiplier; 
	UPROPERTY(EditAnywhere)                              // 0x01BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxSpareAmmo;
	UPROPERTY(EditAnywhere)                                             // 0x01C0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                BulletsPerTracer; 
	UPROPERTY(EditAnywhere)                                        // 0x01C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDelayBeforeFiringMin; 
	UPROPERTY(EditAnywhere)                                  // 0x01C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDelayBeforeFiringMax; 
	UPROPERTY(EditAnywhere)                                  // 0x01CC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIFireDurationMin; 
	UPROPERTY(EditAnywhere)                                       // 0x01D0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIFireDurationMax;
	UPROPERTY(EditAnywhere)                                        // 0x01D4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIMinSpreadDuration;
	UPROPERTY(EditAnywhere)                                      // 0x01D8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIMaxSpreadDuration;
	UPROPERTY(EditAnywhere)                                      // 0x01DC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIDurationSpreadMultiplier;
	UPROPERTY(EditAnywhere)                               // 0x01E0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AIAdditionalSpreadForTargetMovingLaterally;
	UPROPERTY(EditAnywhere)               // 0x01E4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              EQSDensity;
	UPROPERTY(EditAnywhere)                                               // 0x01E8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinApproachRange;
	UPROPERTY(EditAnywhere)                                         // 0x01EC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinActualRange;
	UPROPERTY(EditAnywhere)                                           // 0x01F0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPreferredRange;
	UPROPERTY(EditAnywhere)                                        // 0x01F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MinPreferredRangeEQS; 
	UPROPERTY(EditAnywhere)                                    // 0x01F8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPreferredRangeEQS;
	UPROPERTY(EditAnywhere)                                     // 0x01FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxPreferredRange; 
	UPROPERTY(EditAnywhere)                                       // 0x0200(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxActualRange;  
	UPROPERTY(EditAnywhere)                                         // 0x0204(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              MaxApproachRange; 
	UPROPERTY(EditAnywhere)                                        // 0x0208(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              SweepRadius;  
	UPROPERTY(EditAnywhere)                                            // 0x020C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoReloadDelayOverride;                                  // 0x0210(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_BlueprintReadOnly, CPF_ZeroConstructor, CPF_IsPlainOldData)
};
