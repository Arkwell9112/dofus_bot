#include "BotCoreAPI.h"
#include <CharacterMinimalPlusLookInformations.h>
#include <CharacterBaseInformations.h>
#include <PartyMemberInformations.h>
#include <PartyMemberArenaInformations.h>
#include <PartyInvitationMemberInformations.h>
#include <CharacterHardcoreOrEpicInformations.h>
#include <CharacterMinimalGuildInformations.h>
#include <CharacterMinimalAllianceInformations.h>
#include <CharacterMinimalPlusLookAndGradeInformations.h>
#include <EntityDispositionInformations.h>
#include <IdentifiedEntityDispositionInformations.h>
#include <FightEntityDispositionInformations.h>
#include <AbstractSocialGroupInfos.h>
#include <BasicGuildInformations.h>
#include <GuildInformations.h>
#include <GuildFactSheetInformations.h>
#include <GuildInsiderFactSheetInformations.h>
#include <GuildInAllianceInformations.h>
#include <AlliancedGuildFactSheetInformations.h>
#include <BasicAllianceInformations.h>
#include <BasicNamedAllianceInformations.h>
#include <AllianceInformations.h>
#include <AllianceFactSheetInformations.h>
#include <GuildVersatileInformations.h>
#include <GuildInAllianceVersatileInformations.h>
#include <PrismSubareaEmptyInfo.h>
#include <PrismGeolocalizedInformation.h>
#include <PrismInformation.h>
#include <AlliancePrismInformation.h>
#include <AllianceInsiderPrismInformation.h>
#include <FightTeamMemberInformations.h>
#include <FightTeamMemberCharacterInformations.h>
#include <FightTeamMemberWithAllianceCharacterInformations.h>
#include <FightTeamMemberTaxCollectorInformations.h>
#include <FightTeamMemberMonsterInformations.h>
#include <FightTeamMemberEntityInformation.h>
#include <FightTeamInformations.h>
#include <FightAllianceTeamInformations.h>
#include <GameFightMinimalStats.h>
#include <GameFightMinimalStatsPreparation.h>
#include <FightResultListEntry.h>
#include <FightResultFighterListEntry.h>
#include <FightResultTaxCollectorListEntry.h>
#include <FightResultPlayerListEntry.h>
#include <FightResultMutantListEntry.h>
#include <FightResultAdditionalData.h>
#include <FightResultPvpData.h>
#include <FightResultExperienceData.h>
#include <AbstractFightDispellableEffect.h>
#include <FightTemporaryBoostEffect.h>
#include <FightTemporaryBoostStateEffect.h>
#include <FightTemporarySpellBoostEffect.h>
#include <FightTemporaryBoostWeaponDamagesEffect.h>
#include <FightTemporarySpellImmunityEffect.h>
#include <FightTriggeredEffect.h>
#include <ObjectEffect.h>
#include <ObjectEffectInteger.h>
#include <ObjectEffectCreature.h>
#include <ObjectEffectLadder.h>
#include <ObjectEffectMinMax.h>
#include <ObjectEffectDuration.h>
#include <ObjectEffectString.h>
#include <ObjectEffectDice.h>
#include <ObjectEffectDate.h>
#include <ObjectEffectMount.h>
#include <UpdateMountCharacteristic.h>
#include <UpdateMountBooleanCharacteristic.h>
#include <UpdateMountIntegerCharacteristic.h>
#include <Shortcut.h>
#include <ShortcutObject.h>
#include <ShortcutObjectPreset.h>
#include <ShortcutObjectIdolsPreset.h>
#include <ShortcutObjectItem.h>
#include <ShortcutSpell.h>
#include <ShortcutSmiley.h>
#include <ShortcutEmote.h>
#include <ShortcutEntitiesPreset.h>
#include <Idol.h>
#include <PartyIdol.h>
#include <AchievementAchieved.h>
#include <AchievementAchievedRewardable.h>
#include <IgnoredInformations.h>
#include <IgnoredOnlineInformations.h>
#include <FriendInformations.h>
#include <FriendOnlineInformations.h>
#include <AcquaintanceInformation.h>
#include <AcquaintanceOnlineInformation.h>
#include <FriendSpouseInformations.h>
#include <FriendSpouseOnlineInformations.h>
#include <InteractiveElementSkill.h>
#include <InteractiveElementNamedSkill.h>
#include <InteractiveElement.h>
#include <InteractiveElementWithAgeBonus.h>
#include <PartyEntityBaseInformation.h>
#include <PartyEntityMemberInformation.h>
#include <SkillActionDescription.h>
#include <SkillActionDescriptionTimed.h>
#include <SkillActionDescriptionCollect.h>
#include <SkillActionDescriptionCraft.h>
#include <HouseInformations.h>
#include <AccountHouseInformations.h>
#include <HouseInformationsInside.h>
#include <HouseInformationsForGuild.h>
#include <HouseOnMapInformations.h>
#include <HouseInstanceInformations.h>
#include <HouseGuildedInformations.h>
#include <PaddockBuyableInformations.h>
#include <PaddockGuildedInformations.h>
#include <GameContextActorPositionInformations.h>
#include <GameContextActorInformations.h>
#include <GameFightFighterInformations.h>
#include <GameFightAIInformations.h>
#include <GameFightMonsterInformations.h>
#include <GameFightMonsterWithAlignmentInformations.h>
#include <GameFightTaxCollectorInformations.h>
#include <GameFightFighterNamedInformations.h>
#include <GameFightCharacterInformations.h>
#include <GameFightMutantInformations.h>
#include <GameFightEntityInformation.h>
#include <GameRolePlayActorInformations.h>
#include <GameRolePlayNamedActorInformations.h>
#include <GameRolePlayHumanoidInformations.h>
#include <GameRolePlayMutantInformations.h>
#include <GameRolePlayCharacterInformations.h>
#include <GameRolePlayMountInformations.h>
#include <GameRolePlayMerchantInformations.h>
#include <GameRolePlayNpcInformations.h>
#include <GameRolePlayNpcWithQuestInformations.h>
#include <GameRolePlayGroupMonsterInformations.h>
#include <GameRolePlayGroupMonsterWaveInformations.h>
#include <GameRolePlayTreasureHintInformations.h>
#include <GameRolePlayTaxCollectorInformations.h>
#include <GameRolePlayPrismInformations.h>
#include <GameRolePlayPortalInformations.h>
#include <HumanInformations.h>
#include <HumanOption.h>
#include <HumanOptionObjectUse.h>
#include <HumanOptionAlliance.h>
#include <HumanOptionGuild.h>
#include <HumanOptionOrnament.h>
#include <HumanOptionEmote.h>
#include <HumanOptionTitle.h>
#include <HumanOptionSkillUse.h>
#include <HumanOptionFollowers.h>
#include <TaxCollectorStaticInformations.h>
#include <TaxCollectorStaticExtendedInformations.h>
#include <TaxCollectorInformations.h>
#include <TaxCollectorComplementaryInformations.h>
#include <TaxCollectorGuildInformations.h>
#include <TaxCollectorLootInformations.h>
#include <TaxCollectorWaitingForHelpInformations.h>
#include <GroupMonsterStaticInformations.h>
#include <GroupMonsterStaticInformationsWithAlternatives.h>
#include <QuestActiveInformations.h>
#include <QuestActiveDetailedInformations.h>
#include <QuestObjectiveInformations.h>
#include <QuestObjectiveInformationsWithCompletion.h>
#include <SpawnInformation.h>
#include <BaseSpawnMonsterInformation.h>
#include <SpawnScaledMonsterInformation.h>
#include <SpawnMonsterInformation.h>
#include <SpawnCharacterInformation.h>
#include <SpawnCompanionInformation.h>
#include <GameContextBasicSpawnInformation.h>
#include <GameContextSummonsInformation.h>
#include <GameFightFighterLightInformations.h>
#include <GameFightFighterMonsterLightInformations.h>
#include <GameFightFighterNamedLightInformations.h>
#include <GameFightFighterTaxCollectorLightInformations.h>
#include <GameFightFighterEntityLightInformation.h>
#include <MapCoordinates.h>
#include <MapCoordinatesAndId.h>
#include <MapCoordinatesExtended.h>
#include <Preset.h>
#include <PresetsContainerPreset.h>
#include <IconNamedPreset.h>
#include <SpellsPreset.h>
#include <ForgettableSpellsPreset.h>
#include <StatsPreset.h>
#include <IdolsPreset.h>
#include <EntitiesPreset.h>
#include <FullStatsPreset.h>
#include <ItemsPreset.h>
#include <TreasureHuntStep.h>
#include <TreasureHuntStepFollowDirectionToPOI.h>
#include <TreasureHuntStepDig.h>
#include <TreasureHuntStepFight.h>
#include <TreasureHuntStepFollowDirectionToHint.h>
#include <TreasureHuntStepFollowDirection.h>
#include <PortalInformation.h>
#include <BreachBranch.h>
#include <ExtendedBreachBranch.h>
#include <ExtendedLockedBreachBranch.h>
#include <PlayerStatus.h>
#include <PlayerStatusExtended.h>
#include <ServerSessionConstant.h>
#include <ServerSessionConstantString.h>
#include <ServerSessionConstantInteger.h>
#include <ServerSessionConstantLong.h>
#include <StatisticData.h>
#include <StatisticDataInt.h>
#include <StatisticDataBoolean.h>
#include <StatisticDataShort.h>
#include <StatisticDataString.h>
#include <StatisticDataByte.h>
#include <DebtInformation.h>
#include <KamaDebtInformation.h>
#include "../BotCore/BotCoreException.h"

DeserializeInterface *ProtocolTypeManager::lastInstance = nullptr;

DeserializeInterface *ProtocolTypeManager::getInstance(unsigned int id, CustomDataInput *input) {
    DeserializeInterface *currentType = nullptr;
    switch (id) {
        case 2181:
            currentType = new CharacterMinimalPlusLookInformations();
            currentType->deserialize(input);
            break;
        case 6291:
            currentType = new CharacterBaseInformations();
            currentType->deserialize(input);
            break;
        case 918:
            currentType = new PartyMemberInformations();
            currentType->deserialize(input);
            break;
        case 460:
            currentType = new PartyMemberArenaInformations();
            currentType->deserialize(input);
            break;
        case 5851:
            currentType = new PartyInvitationMemberInformations();
            currentType->deserialize(input);
            break;
        case 2827:
            currentType = new CharacterHardcoreOrEpicInformations();
            currentType->deserialize(input);
            break;
        case 5177:
            currentType = new CharacterMinimalGuildInformations();
            currentType->deserialize(input);
            break;
        case 4067:
            currentType = new CharacterMinimalAllianceInformations();
            currentType->deserialize(input);
            break;
        case 4536:
            currentType = new CharacterMinimalPlusLookAndGradeInformations();
            currentType->deserialize(input);
            break;
        case 4880:
            currentType = new EntityDispositionInformations();
            currentType->deserialize(input);
            break;
        case 7938:
            currentType = new IdentifiedEntityDispositionInformations();
            currentType->deserialize(input);
            break;
        case 2127:
            currentType = new FightEntityDispositionInformations();
            currentType->deserialize(input);
            break;
        case 5025:
            currentType = new AbstractSocialGroupInfos();
            currentType->deserialize(input);
            break;
        case 1274:
            currentType = new BasicGuildInformations();
            currentType->deserialize(input);
            break;
        case 486:
            currentType = new GuildInformations();
            currentType->deserialize(input);
            break;
        case 3641:
            currentType = new GuildFactSheetInformations();
            currentType->deserialize(input);
            break;
        case 5929:
            currentType = new GuildInsiderFactSheetInformations();
            currentType->deserialize(input);
            break;
        case 989:
            currentType = new GuildInAllianceInformations();
            currentType->deserialize(input);
            break;
        case 7721:
            currentType = new AlliancedGuildFactSheetInformations();
            currentType->deserialize(input);
            break;
        case 8260:
            currentType = new BasicAllianceInformations();
            currentType->deserialize(input);
            break;
        case 3494:
            currentType = new BasicNamedAllianceInformations();
            currentType->deserialize(input);
            break;
        case 8760:
            currentType = new AllianceInformations();
            currentType->deserialize(input);
            break;
        case 4179:
            currentType = new AllianceFactSheetInformations();
            currentType->deserialize(input);
            break;
        case 7410:
            currentType = new GuildVersatileInformations();
            currentType->deserialize(input);
            break;
        case 7784:
            currentType = new GuildInAllianceVersatileInformations();
            currentType->deserialize(input);
            break;
        case 58:
            currentType = new PrismSubareaEmptyInfo();
            currentType->deserialize(input);
            break;
        case 6199:
            currentType = new PrismGeolocalizedInformation();
            currentType->deserialize(input);
            break;
        case 7029:
            currentType = new PrismInformation();
            currentType->deserialize(input);
            break;
        case 2626:
            currentType = new AlliancePrismInformation();
            currentType->deserialize(input);
            break;
        case 9949:
            currentType = new AllianceInsiderPrismInformation();
            currentType->deserialize(input);
            break;
        case 9464:
            currentType = new FightTeamMemberInformations();
            currentType->deserialize(input);
            break;
        case 314:
            currentType = new FightTeamMemberCharacterInformations();
            currentType->deserialize(input);
            break;
        case 790:
            currentType = new FightTeamMemberWithAllianceCharacterInformations();
            currentType->deserialize(input);
            break;
        case 7125:
            currentType = new FightTeamMemberTaxCollectorInformations();
            currentType->deserialize(input);
            break;
        case 8164:
            currentType = new FightTeamMemberMonsterInformations();
            currentType->deserialize(input);
            break;
        case 8911:
            currentType = new FightTeamMemberEntityInformation();
            currentType->deserialize(input);
            break;
        case 6495:
            currentType = new FightTeamInformations();
            currentType->deserialize(input);
            break;
        case 3334:
            currentType = new FightAllianceTeamInformations();
            currentType->deserialize(input);
            break;
        case 8766:
            currentType = new GameFightMinimalStats();
            currentType->deserialize(input);
            break;
        case 5419:
            currentType = new GameFightMinimalStatsPreparation();
            currentType->deserialize(input);
            break;
        case 2461:
            currentType = new FightResultListEntry();
            currentType->deserialize(input);
            break;
        case 7464:
            currentType = new FightResultFighterListEntry();
            currentType->deserialize(input);
            break;
        case 1061:
            currentType = new FightResultTaxCollectorListEntry();
            currentType->deserialize(input);
            break;
        case 2386:
            currentType = new FightResultPlayerListEntry();
            currentType->deserialize(input);
            break;
        case 3182:
            currentType = new FightResultMutantListEntry();
            currentType->deserialize(input);
            break;
        case 6509:
            currentType = new FightResultAdditionalData();
            currentType->deserialize(input);
            break;
        case 3055:
            currentType = new FightResultPvpData();
            currentType->deserialize(input);
            break;
        case 676:
            currentType = new FightResultExperienceData();
            currentType->deserialize(input);
            break;
        case 7567:
            currentType = new AbstractFightDispellableEffect();
            currentType->deserialize(input);
            break;
        case 4561:
            currentType = new FightTemporaryBoostEffect();
            currentType->deserialize(input);
            break;
        case 4218:
            currentType = new FightTemporaryBoostStateEffect();
            currentType->deserialize(input);
            break;
        case 1017:
            currentType = new FightTemporarySpellBoostEffect();
            currentType->deserialize(input);
            break;
        case 3021:
            currentType = new FightTemporaryBoostWeaponDamagesEffect();
            currentType->deserialize(input);
            break;
        case 8950:
            currentType = new FightTemporarySpellImmunityEffect();
            currentType->deserialize(input);
            break;
        case 7166:
            currentType = new FightTriggeredEffect();
            currentType->deserialize(input);
            break;
        case 5208:
            currentType = new ObjectEffect();
            currentType->deserialize(input);
            break;
        case 6720:
            currentType = new ObjectEffectInteger();
            currentType->deserialize(input);
            break;
        case 6596:
            currentType = new ObjectEffectCreature();
            currentType->deserialize(input);
            break;
        case 4007:
            currentType = new ObjectEffectLadder();
            currentType->deserialize(input);
            break;
        case 6806:
            currentType = new ObjectEffectMinMax();
            currentType->deserialize(input);
            break;
        case 5574:
            currentType = new ObjectEffectDuration();
            currentType->deserialize(input);
            break;
        case 2778:
            currentType = new ObjectEffectString();
            currentType->deserialize(input);
            break;
        case 3270:
            currentType = new ObjectEffectDice();
            currentType->deserialize(input);
            break;
        case 6666:
            currentType = new ObjectEffectDate();
            currentType->deserialize(input);
            break;
        case 4686:
            currentType = new ObjectEffectMount();
            currentType->deserialize(input);
            break;
        case 8844:
            currentType = new UpdateMountCharacteristic();
            currentType->deserialize(input);
            break;
        case 9905:
            currentType = new UpdateMountBooleanCharacteristic();
            currentType->deserialize(input);
            break;
        case 5446:
            currentType = new UpdateMountIntegerCharacteristic();
            currentType->deserialize(input);
            break;
        case 445:
            currentType = new Shortcut();
            currentType->deserialize(input);
            break;
        case 5864:
            currentType = new ShortcutObject();
            currentType->deserialize(input);
            break;
        case 5199:
            currentType = new ShortcutObjectPreset();
            currentType->deserialize(input);
            break;
        case 6872:
            currentType = new ShortcutObjectIdolsPreset();
            currentType->deserialize(input);
            break;
        case 4550:
            currentType = new ShortcutObjectItem();
            currentType->deserialize(input);
            break;
        case 7155:
            currentType = new ShortcutSpell();
            currentType->deserialize(input);
            break;
        case 5172:
            currentType = new ShortcutSmiley();
            currentType->deserialize(input);
            break;
        case 7079:
            currentType = new ShortcutEmote();
            currentType->deserialize(input);
            break;
        case 3114:
            currentType = new ShortcutEntitiesPreset();
            currentType->deserialize(input);
            break;
        case 2559:
            currentType = new Idol();
            currentType->deserialize(input);
            break;
        case 5532:
            currentType = new PartyIdol();
            currentType->deserialize(input);
            break;
        case 7081:
            currentType = new AchievementAchieved();
            currentType->deserialize(input);
            break;
        case 7853:
            currentType = new AchievementAchievedRewardable();
            currentType->deserialize(input);
            break;
        case 4692:
            currentType = new IgnoredInformations();
            currentType->deserialize(input);
            break;
        case 8684:
            currentType = new IgnoredOnlineInformations();
            currentType->deserialize(input);
            break;
        case 1048:
            currentType = new FriendInformations();
            currentType->deserialize(input);
            break;
        case 782:
            currentType = new FriendOnlineInformations();
            currentType->deserialize(input);
            break;
        case 3132:
            currentType = new AcquaintanceInformation();
            currentType->deserialize(input);
            break;
        case 2664:
            currentType = new AcquaintanceOnlineInformation();
            currentType->deserialize(input);
            break;
        case 5129:
            currentType = new FriendSpouseInformations();
            currentType->deserialize(input);
            break;
        case 5595:
            currentType = new FriendSpouseOnlineInformations();
            currentType->deserialize(input);
            break;
        case 1662:
            currentType = new InteractiveElementSkill();
            currentType->deserialize(input);
            break;
        case 1530:
            currentType = new InteractiveElementNamedSkill();
            currentType->deserialize(input);
            break;
        case 9391:
            currentType = new InteractiveElement();
            currentType->deserialize(input);
            break;
        case 5847:
            currentType = new InteractiveElementWithAgeBonus();
            currentType->deserialize(input);
            break;
        case 8629:
            currentType = new PartyEntityBaseInformation();
            currentType->deserialize(input);
            break;
        case 9826:
            currentType = new PartyEntityMemberInformation();
            currentType->deserialize(input);
            break;
        case 6637:
            currentType = new SkillActionDescription();
            currentType->deserialize(input);
            break;
        case 2763:
            currentType = new SkillActionDescriptionTimed();
            currentType->deserialize(input);
            break;
        case 4751:
            currentType = new SkillActionDescriptionCollect();
            currentType->deserialize(input);
            break;
        case 6486:
            currentType = new SkillActionDescriptionCraft();
            currentType->deserialize(input);
            break;
        case 346:
            currentType = new HouseInformations();
            currentType->deserialize(input);
            break;
        case 4600:
            currentType = new AccountHouseInformations();
            currentType->deserialize(input);
            break;
        case 3148:
            currentType = new HouseInformationsInside();
            currentType->deserialize(input);
            break;
        case 3959:
            currentType = new HouseInformationsForGuild();
            currentType->deserialize(input);
            break;
        case 7732:
            currentType = new HouseOnMapInformations();
            currentType->deserialize(input);
            break;
        case 8114:
            currentType = new HouseInstanceInformations();
            currentType->deserialize(input);
            break;
        case 4170:
            currentType = new HouseGuildedInformations();
            currentType->deserialize(input);
            break;
        case 6006:
            currentType = new PaddockBuyableInformations();
            currentType->deserialize(input);
            break;
        case 5633:
            currentType = new PaddockGuildedInformations();
            currentType->deserialize(input);
            break;
        case 2762:
            currentType = new GameContextActorPositionInformations();
            currentType->deserialize(input);
            break;
        case 1950:
            currentType = new GameContextActorInformations();
            currentType->deserialize(input);
            break;
        case 4629:
            currentType = new GameFightFighterInformations();
            currentType->deserialize(input);
            break;
        case 1404:
            currentType = new GameFightAIInformations();
            currentType->deserialize(input);
            break;
        case 2891:
            currentType = new GameFightMonsterInformations();
            currentType->deserialize(input);
            break;
        case 2259:
            currentType = new GameFightMonsterWithAlignmentInformations();
            currentType->deserialize(input);
            break;
        case 8569:
            currentType = new GameFightTaxCollectorInformations();
            currentType->deserialize(input);
            break;
        case 442:
            currentType = new GameFightFighterNamedInformations();
            currentType->deserialize(input);
            break;
        case 5123:
            currentType = new GameFightCharacterInformations();
            currentType->deserialize(input);
            break;
        case 6092:
            currentType = new GameFightMutantInformations();
            currentType->deserialize(input);
            break;
        case 7442:
            currentType = new GameFightEntityInformation();
            currentType->deserialize(input);
            break;
        case 4806:
            currentType = new GameRolePlayActorInformations();
            currentType->deserialize(input);
            break;
        case 2876:
            currentType = new GameRolePlayNamedActorInformations();
            currentType->deserialize(input);
            break;
        case 5783:
            currentType = new GameRolePlayHumanoidInformations();
            currentType->deserialize(input);
            break;
        case 860:
            currentType = new GameRolePlayMutantInformations();
            currentType->deserialize(input);
            break;
        case 5568:
            currentType = new GameRolePlayCharacterInformations();
            currentType->deserialize(input);
            break;
        case 25:
            currentType = new GameRolePlayMountInformations();
            currentType->deserialize(input);
            break;
        case 1806:
            currentType = new GameRolePlayMerchantInformations();
            currentType->deserialize(input);
            break;
        case 6845:
            currentType = new GameRolePlayNpcInformations();
            currentType->deserialize(input);
            break;
        case 784:
            currentType = new GameRolePlayNpcWithQuestInformations();
            currentType->deserialize(input);
            break;
        case 9493:
            currentType = new GameRolePlayGroupMonsterInformations();
            currentType->deserialize(input);
            break;
        case 4412:
            currentType = new GameRolePlayGroupMonsterWaveInformations();
            currentType->deserialize(input);
            break;
        case 9257:
            currentType = new GameRolePlayTreasureHintInformations();
            currentType->deserialize(input);
            break;
        case 1546:
            currentType = new GameRolePlayTaxCollectorInformations();
            currentType->deserialize(input);
            break;
        case 1573:
            currentType = new GameRolePlayPrismInformations();
            currentType->deserialize(input);
            break;
        case 1150:
            currentType = new GameRolePlayPortalInformations();
            currentType->deserialize(input);
            break;
        case 6985:
            currentType = new HumanInformations();
            currentType->deserialize(input);
            break;
        case 2965:
            currentType = new HumanOption();
            currentType->deserialize(input);
            break;
        case 2302:
            currentType = new HumanOptionObjectUse();
            currentType->deserialize(input);
            break;
        case 8006:
            currentType = new HumanOptionAlliance();
            currentType->deserialize(input);
            break;
        case 6774:
            currentType = new HumanOptionGuild();
            currentType->deserialize(input);
            break;
        case 5752:
            currentType = new HumanOptionOrnament();
            currentType->deserialize(input);
            break;
        case 4201:
            currentType = new HumanOptionEmote();
            currentType->deserialize(input);
            break;
        case 8205:
            currentType = new HumanOptionTitle();
            currentType->deserialize(input);
            break;
        case 371:
            currentType = new HumanOptionSkillUse();
            currentType->deserialize(input);
            break;
        case 773:
            currentType = new HumanOptionFollowers();
            currentType->deserialize(input);
            break;
        case 8427:
            currentType = new TaxCollectorStaticInformations();
            currentType->deserialize(input);
            break;
        case 7629:
            currentType = new TaxCollectorStaticExtendedInformations();
            currentType->deserialize(input);
            break;
        case 6557:
            currentType = new TaxCollectorInformations();
            currentType->deserialize(input);
            break;
        case 9114:
            currentType = new TaxCollectorComplementaryInformations();
            currentType->deserialize(input);
            break;
        case 904:
            currentType = new TaxCollectorGuildInformations();
            currentType->deserialize(input);
            break;
        case 5810:
            currentType = new TaxCollectorLootInformations();
            currentType->deserialize(input);
            break;
        case 2779:
            currentType = new TaxCollectorWaitingForHelpInformations();
            currentType->deserialize(input);
            break;
        case 1522:
            currentType = new GroupMonsterStaticInformations();
            currentType->deserialize(input);
            break;
        case 5848:
            currentType = new GroupMonsterStaticInformationsWithAlternatives();
            currentType->deserialize(input);
            break;
        case 3193:
            currentType = new QuestActiveInformations();
            currentType->deserialize(input);
            break;
        case 6:
            currentType = new QuestActiveDetailedInformations();
            currentType->deserialize(input);
            break;
        case 7333:
            currentType = new QuestObjectiveInformations();
            currentType->deserialize(input);
            break;
        case 1250:
            currentType = new QuestObjectiveInformationsWithCompletion();
            currentType->deserialize(input);
            break;
        case 8258:
            currentType = new SpawnInformation();
            currentType->deserialize(input);
            break;
        case 2645:
            currentType = new BaseSpawnMonsterInformation();
            currentType->deserialize(input);
            break;
        case 8592:
            currentType = new SpawnScaledMonsterInformation();
            currentType->deserialize(input);
            break;
        case 8512:
            currentType = new SpawnMonsterInformation();
            currentType->deserialize(input);
            break;
        case 9236:
            currentType = new SpawnCharacterInformation();
            currentType->deserialize(input);
            break;
        case 4898:
            currentType = new SpawnCompanionInformation();
            currentType->deserialize(input);
            break;
        case 8683:
            currentType = new GameContextBasicSpawnInformation();
            currentType->deserialize(input);
            break;
        case 8757:
            currentType = new GameContextSummonsInformation();
            currentType->deserialize(input);
            break;
        case 365:
            currentType = new GameFightFighterLightInformations();
            currentType->deserialize(input);
            break;
        case 1104:
            currentType = new GameFightFighterMonsterLightInformations();
            currentType->deserialize(input);
            break;
        case 6640:
            currentType = new GameFightFighterNamedLightInformations();
            currentType->deserialize(input);
            break;
        case 469:
            currentType = new GameFightFighterTaxCollectorLightInformations();
            currentType->deserialize(input);
            break;
        case 3105:
            currentType = new GameFightFighterEntityLightInformation();
            currentType->deserialize(input);
            break;
        case 3667:
            currentType = new MapCoordinates();
            currentType->deserialize(input);
            break;
        case 8784:
            currentType = new MapCoordinatesAndId();
            currentType->deserialize(input);
            break;
        case 7924:
            currentType = new MapCoordinatesExtended();
            currentType->deserialize(input);
            break;
        case 3252:
            currentType = new Preset();
            currentType->deserialize(input);
            break;
        case 9890:
            currentType = new PresetsContainerPreset();
            currentType->deserialize(input);
            break;
        case 7810:
            currentType = new IconNamedPreset();
            currentType->deserialize(input);
            break;
        case 9527:
            currentType = new SpellsPreset();
            currentType->deserialize(input);
            break;
        case 8993:
            currentType = new ForgettableSpellsPreset();
            currentType->deserialize(input);
            break;
        case 1953:
            currentType = new StatsPreset();
            currentType->deserialize(input);
            break;
        case 2670:
            currentType = new IdolsPreset();
            currentType->deserialize(input);
            break;
        case 9807:
            currentType = new EntitiesPreset();
            currentType->deserialize(input);
            break;
        case 908:
            currentType = new FullStatsPreset();
            currentType->deserialize(input);
            break;
        case 7276:
            currentType = new ItemsPreset();
            currentType->deserialize(input);
            break;
        case 7623:
            currentType = new TreasureHuntStep();
            currentType->deserialize(input);
            break;
        case 6922:
            currentType = new TreasureHuntStepFollowDirectionToPOI();
            currentType->deserialize(input);
            break;
        case 8590:
            currentType = new TreasureHuntStepDig();
            currentType->deserialize(input);
            break;
        case 5856:
            currentType = new TreasureHuntStepFight();
            currentType->deserialize(input);
            break;
        case 3743:
            currentType = new TreasureHuntStepFollowDirectionToHint();
            currentType->deserialize(input);
            break;
        case 2737:
            currentType = new TreasureHuntStepFollowDirection();
            currentType->deserialize(input);
            break;
        case 477:
            currentType = new PortalInformation();
            currentType->deserialize(input);
            break;
        case 2941:
            currentType = new BreachBranch();
            currentType->deserialize(input);
            break;
        case 2810:
            currentType = new ExtendedBreachBranch();
            currentType->deserialize(input);
            break;
        case 7557:
            currentType = new ExtendedLockedBreachBranch();
            currentType->deserialize(input);
            break;
        case 2234:
            currentType = new PlayerStatus();
            currentType->deserialize(input);
            break;
        case 9783:
            currentType = new PlayerStatusExtended();
            currentType->deserialize(input);
            break;
        case 2481:
            currentType = new ServerSessionConstant();
            currentType->deserialize(input);
            break;
        case 4930:
            currentType = new ServerSessionConstantString();
            currentType->deserialize(input);
            break;
        case 3622:
            currentType = new ServerSessionConstantInteger();
            currentType->deserialize(input);
            break;
        case 2359:
            currentType = new ServerSessionConstantLong();
            currentType->deserialize(input);
            break;
        case 3901:
            currentType = new StatisticData();
            currentType->deserialize(input);
            break;
        case 6412:
            currentType = new StatisticDataInt();
            currentType->deserialize(input);
            break;
        case 5613:
            currentType = new StatisticDataBoolean();
            currentType->deserialize(input);
            break;
        case 3853:
            currentType = new StatisticDataShort();
            currentType->deserialize(input);
            break;
        case 3215:
            currentType = new StatisticDataString();
            currentType->deserialize(input);
            break;
        case 5484:
            currentType = new StatisticDataByte();
            currentType->deserialize(input);
            break;
        case 4642:
            currentType = new DebtInformation();
            currentType->deserialize(input);
            break;
        case 859:
            currentType = new KamaDebtInformation();
            currentType->deserialize(input);
            break;
    }
    if (currentType != nullptr) {
        ProtocolTypeManager::lastInstance = currentType;
        return currentType;
    } else {
        throw BotCoreException(4);
    }
}

void ProtocolTypeManager::deleteLastInstance() {
    delete lastInstance;
}