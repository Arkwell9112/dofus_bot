#include "Packet.h"
#include <AdminCommandMessage.h>
#include <AdminQuietCommandMessage.h>
#include <ConsoleCommandsListMessage.h>
#include <ConsoleMessage.h>
#include <CredentialsAcknowledgementMessage.h>
#include <HelloConnectMessage.h>
#include <IdentificationAccountForceMessage.h>
#include <IdentificationFailedBannedMessage.h>
#include <IdentificationFailedForBadVersionMessage.h>
#include <IdentificationFailedMessage.h>
#include <IdentificationMessage.h>
#include <IdentificationSuccessMessage.h>
#include <IdentificationSuccessWithLoginTokenMessage.h>
#include <MigratedServerListMessage.h>
#include <SelectedServerDataExtendedMessage.h>
#include <SelectedServerDataMessage.h>
#include <SelectedServerRefusedMessage.h>
#include <ServerSelectionMessage.h>
#include <ServersListMessage.h>
#include <ServerStatusUpdateMessage.h>
#include <DebugClearHighlightCellsMessage.h>
#include <DebugHighlightCellsMessage.h>
#include <DebugInClientMessage.h>
#include <ProtocolRequired.h>
#include <LoginQueueStatusMessage.h>
#include <QueueStatusMessage.h>
#include <TrustStatusMessage.h>
#include <CheckFileMessage.h>
#include <CheckFileRequestMessage.h>
#include <CheckIntegrityMessage.h>
#include <ClientKeyMessage.h>
#include <AccountInformationsUpdateMessage.h>
#include <ClientYouAreDrunkMessage.h>
#include <BasicPingMessage.h>
#include <BasicPongMessage.h>
#include <BasicStatMessage.h>
#include <BasicStatWithDataMessage.h>
#include <AccountLinkRequiredMessage.h>
#include <NicknameAcceptedMessage.h>
#include <NicknameChoiceRequestMessage.h>
#include <NicknameRefusedMessage.h>
#include <NicknameRegistrationMessage.h>
#include <AcquaintanceSearchErrorMessage.h>
#include <AcquaintanceSearchMessage.h>
#include <AcquaintanceServerListMessage.h>
#include <AchievementDetailedListMessage.h>
#include <AchievementDetailedListRequestMessage.h>
#include <AchievementDetailsMessage.h>
#include <AchievementDetailsRequestMessage.h>
#include <AchievementFinishedInformationMessage.h>
#include <AchievementFinishedMessage.h>
#include <AchievementListMessage.h>
#include <AchievementRewardErrorMessage.h>
#include <AchievementRewardRequestMessage.h>
#include <AchievementRewardSuccessMessage.h>
#include <FriendGuildSetWarnOnAchievementCompleteMessage.h>
#include <FriendGuildWarnOnAchievementCompleteStateMessage.h>
#include <AbstractGameActionMessage.h>
#include <AbstractGameActionWithAckMessage.h>
#include <GameActionAcknowledgementMessage.h>
#include <GameActionNoopMessage.h>
#include <GameActionSpamMessage.h>
#include <AllianceBulletinMessage.h>
#include <AllianceBulletinSetErrorMessage.h>
#include <AllianceBulletinSetRequestMessage.h>
#include <AllianceChangeGuildRightsMessage.h>
#include <AllianceCreationResultMessage.h>
#include <AllianceCreationStartedMessage.h>
#include <AllianceCreationValidMessage.h>
#include <AllianceFactsErrorMessage.h>
#include <AllianceFactsMessage.h>
#include <AllianceFactsRequestMessage.h>
#include <AllianceGuildLeavingMessage.h>
#include <AllianceInsiderInfoMessage.h>
#include <AllianceInsiderInfoRequestMessage.h>
#include <AllianceInvitationAnswerMessage.h>
#include <AllianceInvitationMessage.h>
#include <AllianceInvitationStateRecrutedMessage.h>
#include <AllianceInvitationStateRecruterMessage.h>
#include <AllianceInvitedMessage.h>
#include <AllianceJoinedMessage.h>
#include <AllianceKickRequestMessage.h>
#include <AllianceLeftMessage.h>
#include <AllianceListMessage.h>
#include <AllianceMembershipMessage.h>
#include <AllianceModificationEmblemValidMessage.h>
#include <AllianceModificationNameAndTagValidMessage.h>
#include <AllianceModificationStartedMessage.h>
#include <AllianceModificationValidMessage.h>
#include <AllianceMotdMessage.h>
#include <AllianceMotdSetErrorMessage.h>
#include <AllianceMotdSetRequestMessage.h>
#include <AlliancePartialListMessage.h>
#include <AllianceVersatileInfoListMessage.h>
#include <KohUpdateMessage.h>
#include <AlmanachCalendarDateMessage.h>
#include <AccountCapabilitiesMessage.h>
#include <AccountLoggingKickedMessage.h>
#include <AlreadyConnectedMessage.h>
#include <AuthenticationTicketAcceptedMessage.h>
#include <AuthenticationTicketMessage.h>
#include <AuthenticationTicketRefusedMessage.h>
#include <HelloGameMessage.h>
#include <ReloginTokenRequestMessage.h>
#include <ReloginTokenStatusMessage.h>
#include <ServerOptionalFeaturesMessage.h>
#include <ServerSessionConstantsMessage.h>
#include <ServerSettingsMessage.h>
#include <AtlasPointInformationsMessage.h>
#include <BasicAckMessage.h>
#include <BasicDateMessage.h>
#include <BasicLatencyStatsMessage.h>
#include <BasicLatencyStatsRequestMessage.h>
#include <BasicNoOperationMessage.h>
#include <BasicTimeMessage.h>
#include <BasicWhoAmIRequestMessage.h>
#include <BasicWhoIsMessage.h>
#include <BasicWhoIsNoMatchMessage.h>
#include <BasicWhoIsRequestMessage.h>
#include <CurrentServerStatusUpdateMessage.h>
#include <NumericWhoIsMessage.h>
#include <NumericWhoIsRequestMessage.h>
#include <SequenceNumberMessage.h>
#include <SequenceNumberRequestMessage.h>
#include <TextInformationMessage.h>
#include <ChatAbstractClientMessage.h>
#include <ChatAbstractServerMessage.h>
#include <ChatAdminServerMessage.h>
#include <ChatClientMultiMessage.h>
#include <ChatClientMultiWithObjectMessage.h>
#include <ChatClientPrivateMessage.h>
#include <ChatClientPrivateWithObjectMessage.h>
#include <ChatErrorMessage.h>
#include <ChatServerCopyMessage.h>
#include <ChatServerCopyWithObjectMessage.h>
#include <ChatServerMessage.h>
#include <ChatServerWithObjectMessage.h>
#include <GameCautiousMapMovementMessage.h>
#include <GameCautiousMapMovementRequestMessage.h>
#include <GameContextCreateErrorMessage.h>
#include <GameContextCreateMessage.h>
#include <GameContextCreateRequestMessage.h>
#include <GameContextDestroyMessage.h>
#include <GameContextKickMessage.h>
#include <GameContextMoveElementMessage.h>
#include <GameContextMoveMultipleElementsMessage.h>
#include <GameContextQuitMessage.h>
#include <GameContextReadyMessage.h>
#include <GameContextRefreshEntityLookMessage.h>
#include <GameContextRemoveElementMessage.h>
#include <GameContextRemoveElementWithEventMessage.h>
#include <GameContextRemoveMultipleElementsMessage.h>
#include <GameContextRemoveMultipleElementsWithEventsMessage.h>
#include <GameEntitiesDispositionMessage.h>
#include <GameEntityDispositionErrorMessage.h>
#include <GameEntityDispositionMessage.h>
#include <GameMapChangeOrientationMessage.h>
#include <GameMapChangeOrientationRequestMessage.h>
#include <GameMapChangeOrientationsMessage.h>
#include <GameMapMovementCancelMessage.h>
#include <GameMapMovementConfirmMessage.h>
#include <GameMapMovementMessage.h>
#include <GameMapMovementRequestMessage.h>
#include <GameMapNoMovementMessage.h>
#include <GameRefreshMonsterBoostsMessage.h>
#include <ShowCellMessage.h>
#include <ShowCellRequestMessage.h>
#include <ShowCellSpectatorMessage.h>
#include <LeaveDialogMessage.h>
#include <LeaveDialogRequestMessage.h>
#include <PauseDialogMessage.h>
#include <EntitiesInformationMessage.h>
#include <EntityInformationMessage.h>
#include <ObjectFeedMessage.h>
#include <FinishMoveListMessage.h>
#include <FinishMoveListRequestMessage.h>
#include <FinishMoveSetRequestMessage.h>
#include <AcquaintanceAddedMessage.h>
#include <AcquaintancesGetListMessage.h>
#include <AcquaintancesListMessage.h>
#include <ContactAddFailureMessage.h>
#include <FriendAddedMessage.h>
#include <FriendAddFailureMessage.h>
#include <FriendAddRequestMessage.h>
#include <FriendDeleteRequestMessage.h>
#include <FriendDeleteResultMessage.h>
#include <FriendJoinRequestMessage.h>
#include <FriendSetStatusShareMessage.h>
#include <FriendSetWarnOnConnectionMessage.h>
#include <FriendSetWarnOnLevelGainMessage.h>
#include <FriendsGetListMessage.h>
#include <FriendsListMessage.h>
#include <FriendSpouseFollowWithCompassRequestMessage.h>
#include <FriendSpouseJoinRequestMessage.h>
#include <FriendStatusShareStateMessage.h>
#include <FriendUpdateMessage.h>
#include <FriendWarnOnConnectionStateMessage.h>
#include <FriendWarnOnLevelGainStateMessage.h>
#include <GuildMemberSetWarnOnConnectionMessage.h>
#include <GuildMemberWarnOnConnectionStateMessage.h>
#include <IgnoredAddedMessage.h>
#include <IgnoredAddFailureMessage.h>
#include <IgnoredAddRequestMessage.h>
#include <IgnoredDeleteRequestMessage.h>
#include <IgnoredDeleteResultMessage.h>
#include <IgnoredGetListMessage.h>
#include <IgnoredListMessage.h>
#include <SpouseGetInformationsMessage.h>
#include <SpouseInformationsMessage.h>
#include <SpouseStatusMessage.h>
#include <WarnOnPermaDeathStateMessage.h>
#include <GuestLimitationMessage.h>
#include <GuestModeMessage.h>
#include <ChallengeFightJoinRefusedMessage.h>
#include <GuildBulletinMessage.h>
#include <GuildBulletinSetErrorMessage.h>
#include <GuildBulletinSetRequestMessage.h>
#include <GuildChangeMemberParametersMessage.h>
#include <GuildCharacsUpgradeRequestMessage.h>
#include <GuildCreationResultMessage.h>
#include <GuildCreationStartedMessage.h>
#include <GuildCreationValidMessage.h>
#include <GuildFactsErrorMessage.h>
#include <GuildFactsMessage.h>
#include <GuildFactsRequestMessage.h>
#include <GuildGetInformationsMessage.h>
#include <GuildHouseRemoveMessage.h>
#include <GuildHousesInformationMessage.h>
#include <GuildHouseUpdateInformationMessage.h>
#include <GuildInAllianceFactsMessage.h>
#include <GuildInformationsGeneralMessage.h>
#include <GuildInformationsMembersMessage.h>
#include <GuildInformationsMemberUpdateMessage.h>
#include <GuildInformationsPaddocksMessage.h>
#include <GuildInfosUpgradeMessage.h>
#include <GuildInvitationAnswerMessage.h>
#include <GuildInvitationByNameMessage.h>
#include <GuildInvitationMessage.h>
#include <GuildInvitationStateRecrutedMessage.h>
#include <GuildInvitationStateRecruterMessage.h>
#include <GuildInvitedMessage.h>
#include <GuildJoinedMessage.h>
#include <GuildKickRequestMessage.h>
#include <GuildLeftMessage.h>
#include <GuildLevelUpMessage.h>
#include <GuildListMessage.h>
#include <GuildMemberLeavingMessage.h>
#include <GuildMemberOnlineStatusMessage.h>
#include <GuildMembershipMessage.h>
#include <GuildModificationEmblemValidMessage.h>
#include <GuildModificationNameValidMessage.h>
#include <GuildModificationStartedMessage.h>
#include <GuildModificationValidMessage.h>
#include <GuildMotdMessage.h>
#include <GuildMotdSetErrorMessage.h>
#include <GuildMotdSetRequestMessage.h>
#include <GuildPaddockBoughtMessage.h>
#include <GuildPaddockRemovedMessage.h>
#include <GuildPaddockTeleportRequestMessage.h>
#include <GuildSpellUpgradeRequestMessage.h>
#include <GuildVersatileInfoListMessage.h>
#include <HouseTeleportRequestMessage.h>
#include <IdolFightPreparationUpdateMessage.h>
#include <IdolListMessage.h>
#include <IdolPartyLostMessage.h>
#include <IdolPartyRefreshMessage.h>
#include <IdolPartyRegisterRequestMessage.h>
#include <IdolSelectedMessage.h>
#include <IdolSelectErrorMessage.h>
#include <IdolSelectRequestMessage.h>
#include <CharacterCapabilitiesMessage.h>
#include <CharacterLoadingCompleteMessage.h>
#include <OnConnectionEventMessage.h>
#include <ServerExperienceModificatorMessage.h>
#include <SetCharacterRestrictionsMessage.h>
#include <InteractiveElementUpdatedMessage.h>
#include <InteractiveMapUpdateMessage.h>
#include <InteractiveUsedMessage.h>
#include <InteractiveUseEndedMessage.h>
#include <InteractiveUseErrorMessage.h>
#include <InteractiveUseRequestMessage.h>
#include <StatedElementUpdatedMessage.h>
#include <StatedMapUpdateMessage.h>
#include <KamasUpdateMessage.h>
#include <ObjectAveragePricesErrorMessage.h>
#include <ObjectAveragePricesGetMessage.h>
#include <ObjectAveragePricesMessage.h>
#include <AccessoryPreviewErrorMessage.h>
#include <AccessoryPreviewMessage.h>
#include <AccessoryPreviewRequestMessage.h>
#include <PopupWarningMessage.h>
#include <AreaFightModificatorUpdateMessage.h>
#include <IconNamedPresetSaveRequestMessage.h>
#include <IconPresetSaveRequestMessage.h>
#include <IdolsPresetSaveRequestMessage.h>
#include <InvalidPresetsMessage.h>
#include <ItemForPresetUpdateMessage.h>
#include <PresetDeleteRequestMessage.h>
#include <PresetDeleteResultMessage.h>
#include <PresetSavedMessage.h>
#include <PresetSaveErrorMessage.h>
#include <PresetsMessage.h>
#include <PresetUseRequestMessage.h>
#include <PresetUseResultMessage.h>
#include <PresetUseResultWithMissingIdsMessage.h>
#include <PrismAttackRequestMessage.h>
#include <PrismFightAddedMessage.h>
#include <PrismFightAttackerAddMessage.h>
#include <PrismFightAttackerRemoveMessage.h>
#include <PrismFightDefenderAddMessage.h>
#include <PrismFightDefenderLeaveMessage.h>
#include <PrismFightJoinLeaveRequestMessage.h>
#include <PrismFightRemovedMessage.h>
#include <PrismFightStateUpdateMessage.h>
#include <PrismFightSwapRequestMessage.h>
#include <PrismInfoCloseMessage.h>
#include <PrismInfoInValidMessage.h>
#include <PrismInfoJoinLeaveRequestMessage.h>
#include <PrismModuleExchangeRequestMessage.h>
#include <PrismSetSabotagedRefusedMessage.h>
#include <PrismSetSabotagedRequestMessage.h>
#include <PrismSettingsErrorMessage.h>
#include <PrismSettingsRequestMessage.h>
#include <PrismsInfoValidMessage.h>
#include <PrismsListMessage.h>
#include <PrismsListRegisterMessage.h>
#include <PrismsListUpdateMessage.h>
#include <PrismUseRequestMessage.h>
#include <AlignmentRankUpdateMessage.h>
#include <SetEnableAVARequestMessage.h>
#include <SetEnablePVPRequestMessage.h>
#include <UpdateMapPlayersAgressableStatusMessage.h>
#include <UpdateSelfAgressableStatusMessage.h>
#include <CinematicMessage.h>
#include <URLOpenMessage.h>
#include <ShortcutBarAddErrorMessage.h>
#include <ShortcutBarAddRequestMessage.h>
#include <ShortcutBarContentMessage.h>
#include <ShortcutBarRefreshMessage.h>
#include <ShortcutBarRemovedMessage.h>
#include <ShortcutBarRemoveErrorMessage.h>
#include <ShortcutBarRemoveRequestMessage.h>
#include <ShortcutBarReplacedMessage.h>
#include <ShortcutBarSwapErrorMessage.h>
#include <ShortcutBarSwapRequestMessage.h>
#include <BulletinMessage.h>
#include <ContactLookErrorMessage.h>
#include <ContactLookMessage.h>
#include <ContactLookRequestByIdMessage.h>
#include <ContactLookRequestByNameMessage.h>
#include <ContactLookRequestMessage.h>
#include <SocialNoticeMessage.h>
#include <SocialNoticeSetErrorMessage.h>
#include <SocialNoticeSetRequestMessage.h>
#include <StartupActionAddMessage.h>
#include <StartupActionFinishedMessage.h>
#include <StartupActionsAllAttributionMessage.h>
#include <StartupActionsExecuteMessage.h>
#include <StartupActionsListMessage.h>
#include <StartupActionsObjetAttributionMessage.h>
#include <SubscriptionLimitationMessage.h>
#include <SubscriptionZoneMessage.h>
#include <OrnamentGainedMessage.h>
#include <OrnamentLostMessage.h>
#include <OrnamentSelectedMessage.h>
#include <OrnamentSelectErrorMessage.h>
#include <OrnamentSelectRequestMessage.h>
#include <TitleGainedMessage.h>
#include <TitleLostMessage.h>
#include <TitlesAndOrnamentsListMessage.h>
#include <TitlesAndOrnamentsListRequestMessage.h>
#include <TitleSelectedMessage.h>
#include <TitleSelectErrorMessage.h>
#include <TitleSelectRequestMessage.h>
#include <ClientUIOpenedByObjectMessage.h>
#include <ClientUIOpenedMessage.h>
#include <SystemMessageDisplayMessage.h>
#include <MailStatusMessage.h>
#include <NewMailMessage.h>
#include <HaapiApiKeyMessage.h>
#include <HaapiApiKeyRequestMessage.h>
#include <HaapiAuthErrorMessage.h>
#include <HaapiBufferListMessage.h>
#include <HaapiBufferListRequestMessage.h>
#include <HaapiBuyValidationMessage.h>
#include <HaapiCancelBidRequestMessage.h>
#include <HaapiConfirmationMessage.h>
#include <HaapiConfirmationRequestMessage.h>
#include <HaapiConsumeBufferRequestMessage.h>
#include <HaapiSessionMessage.h>
#include <HaapiShopApiKeyMessage.h>
#include <HaapiShopApiKeyRequestMessage.h>
#include <HaapiTokenMessage.h>
#include <HaapiTokenRequestMessage.h>
#include <HaapiValidationMessage.h>
#include <HaapiValidationRequestMessage.h>
#include <AbstractGameActionFightTargetedAbilityMessage.h>
#include <GameActionFightActivateGlyphTrapMessage.h>
#include <GameActionFightCarryCharacterMessage.h>
#include <GameActionFightCastOnTargetRequestMessage.h>
#include <GameActionFightCastRequestMessage.h>
#include <GameActionFightChangeLookMessage.h>
#include <GameActionFightCloseCombatMessage.h>
#include <GameActionFightDeathMessage.h>
#include <GameActionFightDispellableEffectMessage.h>
#include <GameActionFightDispellEffectMessage.h>
#include <GameActionFightDispellMessage.h>
#include <GameActionFightDispellSpellMessage.h>
#include <GameActionFightDodgePointLossMessage.h>
#include <GameActionFightDropCharacterMessage.h>
#include <GameActionFightExchangePositionsMessage.h>
#include <GameActionFightInvisibilityMessage.h>
#include <GameActionFightInvisibleDetectedMessage.h>
#include <GameActionFightKillMessage.h>
#include <GameActionFightLifeAndShieldPointsLostMessage.h>
#include <GameActionFightLifePointsGainMessage.h>
#include <GameActionFightLifePointsLostMessage.h>
#include <GameActionFightMarkCellsMessage.h>
#include <GameActionFightModifyEffectsDurationMessage.h>
#include <GameActionFightMultipleSummonMessage.h>
#include <GameActionFightNoSpellCastMessage.h>
#include <GameActionFightPointsVariationMessage.h>
#include <GameActionFightReduceDamagesMessage.h>
#include <GameActionFightReflectDamagesMessage.h>
#include <GameActionFightReflectSpellMessage.h>
#include <GameActionFightSlideMessage.h>
#include <GameActionFightSpellCastMessage.h>
#include <GameActionFightSpellCooldownVariationMessage.h>
#include <GameActionFightSpellImmunityMessage.h>
#include <GameActionFightStealKamaMessage.h>
#include <GameActionFightSummonMessage.h>
#include <GameActionFightTackledMessage.h>
#include <GameActionFightTeleportOnSameMapMessage.h>
#include <GameActionFightThrowCharacterMessage.h>
#include <GameActionFightTriggerEffectMessage.h>
#include <GameActionFightTriggerGlyphTrapMessage.h>
#include <GameActionFightUnmarkCellsMessage.h>
#include <GameActionFightVanishMessage.h>
#include <GameActionUpdateEffectTriggerCountMessage.h>
#include <SequenceEndMessage.h>
#include <SequenceStartMessage.h>
#include <CompassResetMessage.h>
#include <CompassUpdateMessage.h>
#include <CompassUpdatePartyMemberMessage.h>
#include <CompassUpdatePvpSeekMessage.h>
#include <BasicCharactersListMessage.h>
#include <CharacterFirstSelectionMessage.h>
#include <CharacterReplayWithRemodelRequestMessage.h>
#include <CharacterSelectedErrorMessage.h>
#include <CharacterSelectedForceMessage.h>
#include <CharacterSelectedForceReadyMessage.h>
#include <CharacterSelectedSuccessMessage.h>
#include <CharacterSelectionMessage.h>
#include <CharacterSelectionWithRemodelMessage.h>
#include <CharactersListErrorMessage.h>
#include <CharactersListMessage.h>
#include <CharactersListRequestMessage.h>
#include <CharactersListWithRemodelingMessage.h>
#include <CharacterCanBeCreatedRequestMessage.h>
#include <CharacterCanBeCreatedResultMessage.h>
#include <CharacterCreationRequestMessage.h>
#include <CharacterCreationResultMessage.h>
#include <CharacterNameSuggestionFailureMessage.h>
#include <CharacterNameSuggestionRequestMessage.h>
#include <CharacterNameSuggestionSuccessMessage.h>
#include <DebtsDeleteMessage.h>
#include <DebtsUpdateMessage.h>
#include <CharacterDeletionErrorMessage.h>
#include <CharacterDeletionRequestMessage.h>
#include <CharacterReplayRequestMessage.h>
#include <CharacterExperienceGainMessage.h>
#include <CharacterLevelUpInformationMessage.h>
#include <CharacterLevelUpMessage.h>
#include <CharacterStatsListMessage.h>
#include <FighterStatsListMessage.h>
#include <LifePointsRegenBeginMessage.h>
#include <LifePointsRegenEndMessage.h>
#include <ResetCharacterStatsRequestMessage.h>
#include <UpdateLifePointsMessage.h>
#include <PlayerStatusUpdateErrorMessage.h>
#include <PlayerStatusUpdateMessage.h>
#include <PlayerStatusUpdateRequestMessage.h>
#include <ChannelEnablingChangeMessage.h>
#include <ChannelEnablingMessage.h>
#include <EnabledChannelsMessage.h>
#include <ChatCommunityChannelCommunityMessage.h>
#include <ChatCommunityChannelSetCommunityRequestMessage.h>
#include <ChatSmileyExtraPackListMessage.h>
#include <ChatSmileyMessage.h>
#include <ChatSmileyRequestMessage.h>
#include <LocalizedChatSmileyMessage.h>
#include <MoodSmileyRequestMessage.h>
#include <MoodSmileyResultMessage.h>
#include <MoodSmileyUpdateMessage.h>
#include <DisplayNumericalValuePaddockMessage.h>
#include <DungeonKeyRingMessage.h>
#include <DungeonKeyRingUpdateMessage.h>
#include <GameFightEndMessage.h>
#include <GameFightHumanReadyStateMessage.h>
#include <GameFightJoinMessage.h>
#include <GameFightJoinRequestMessage.h>
#include <GameFightLeaveMessage.h>
#include <GameFightNewRoundMessage.h>
#include <GameFightNewWaveMessage.h>
#include <GameFightOptionStateUpdateMessage.h>
#include <GameFightOptionToggleMessage.h>
#include <GameFightPauseMessage.h>
#include <GameFightPlacementPositionRequestMessage.h>
#include <GameFightPlacementPossiblePositionsMessage.h>
#include <GameFightPlacementSwapPositionsAcceptMessage.h>
#include <GameFightPlacementSwapPositionsCancelledMessage.h>
#include <GameFightPlacementSwapPositionsCancelMessage.h>
#include <GameFightPlacementSwapPositionsErrorMessage.h>
#include <GameFightPlacementSwapPositionsMessage.h>
#include <GameFightPlacementSwapPositionsOfferMessage.h>
#include <GameFightPlacementSwapPositionsRequestMessage.h>
#include <GameFightReadyMessage.h>
#include <GameFightRemoveTeamMemberMessage.h>
#include <GameFightResumeMessage.h>
#include <GameFightResumeWithSlavesMessage.h>
#include <GameFightSpectateMessage.h>
#include <GameFightSpectatePlayerRequestMessage.h>
#include <GameFightSpectatorJoinMessage.h>
#include <GameFightStartingMessage.h>
#include <GameFightStartMessage.h>
#include <GameFightSynchronizeMessage.h>
#include <GameFightTurnEndMessage.h>
#include <GameFightTurnFinishMessage.h>
#include <GameFightTurnListMessage.h>
#include <GameFightTurnReadyMessage.h>
#include <GameFightTurnReadyRequestMessage.h>
#include <GameFightTurnResumeMessage.h>
#include <GameFightTurnStartMessage.h>
#include <GameFightTurnStartPlayingMessage.h>
#include <GameFightUpdateTeamMessage.h>
#include <RefreshCharacterStatsMessage.h>
#include <SlaveNoLongerControledMessage.h>
#include <SlaveSwitchContextMessage.h>
#include <GameDataPaddockObjectAddMessage.h>
#include <GameDataPaddockObjectListAddMessage.h>
#include <GameDataPaddockObjectRemoveMessage.h>
#include <MountDataErrorMessage.h>
#include <MountDataMessage.h>
#include <MountEmoteIconUsedOkMessage.h>
#include <MountEquipedErrorMessage.h>
#include <MountFeedRequestMessage.h>
#include <MountHarnessColorsUpdateRequestMessage.h>
#include <MountHarnessDissociateRequestMessage.h>
#include <MountInformationInPaddockRequestMessage.h>
#include <MountInformationRequestMessage.h>
#include <MountReleasedMessage.h>
#include <MountReleaseRequestMessage.h>
#include <MountRenamedMessage.h>
#include <MountRenameRequestMessage.h>
#include <MountRidingMessage.h>
#include <MountSetMessage.h>
#include <MountSetXpRatioRequestMessage.h>
#include <MountSterilizedMessage.h>
#include <MountSterilizeRequestMessage.h>
#include <MountToggleRidingRequestMessage.h>
#include <MountUnSetMessage.h>
#include <MountXpRatioMessage.h>
#include <PaddockBuyRequestMessage.h>
#include <PaddockBuyResultMessage.h>
#include <PaddockMoveItemRequestMessage.h>
#include <PaddockRemoveItemRequestMessage.h>
#include <PaddockSellRequestMessage.h>
#include <NotificationByServerMessage.h>
#include <NotificationListMessage.h>
#include <NotificationResetMessage.h>
#include <NotificationUpdateFlagMessage.h>
#include <AnomalySubareaInformationRequestMessage.h>
#include <AnomalySubareaInformationResponseMessage.h>
#include <ChangeMapMessage.h>
#include <CurrentMapInstanceMessage.h>
#include <CurrentMapMessage.h>
#include <ErrorMapNotFoundMessage.h>
#include <GameRolePlayShowActorMessage.h>
#include <GameRolePlayShowActorWithEventMessage.h>
#include <GameRolePlayShowMultipleActorsMessage.h>
#include <MapComplementaryInformationsDataInHavenBagMessage.h>
#include <MapComplementaryInformationsDataInHouseMessage.h>
#include <MapComplementaryInformationsDataMessage.h>
#include <MapComplementaryInformationsWithCoordsMessage.h>
#include <MapFightCountMessage.h>
#include <MapFightStartPositionsUpdateMessage.h>
#include <MapInformationsRequestMessage.h>
#include <MapObstacleUpdateMessage.h>
#include <MapRewardRateMessage.h>
#include <MapRunningFightDetailsExtendedMessage.h>
#include <MapRunningFightDetailsMessage.h>
#include <MapRunningFightDetailsRequestMessage.h>
#include <MapRunningFightListMessage.h>
#include <MapRunningFightListRequestMessage.h>
#include <StopToListenRunningFightRequestMessage.h>
#include <TeleportOnSameMapMessage.h>
#include <AbstractTaxCollectorListMessage.h>
#include <GameRolePlayTaxCollectorFightRequestMessage.h>
#include <GuildFightJoinRequestMessage.h>
#include <GuildFightLeaveRequestMessage.h>
#include <GuildFightPlayersEnemiesListMessage.h>
#include <GuildFightPlayersEnemyRemoveMessage.h>
#include <GuildFightPlayersHelpersJoinMessage.h>
#include <GuildFightPlayersHelpersLeaveMessage.h>
#include <GuildFightTakePlaceRequestMessage.h>
#include <TaxCollectorAttackedMessage.h>
#include <TaxCollectorAttackedResultMessage.h>
#include <TaxCollectorErrorMessage.h>
#include <TaxCollectorListMessage.h>
#include <TaxCollectorMovementAddMessage.h>
#include <TaxCollectorMovementMessage.h>
#include <TaxCollectorMovementRemoveMessage.h>
#include <TaxCollectorMovementsOfflineMessage.h>
#include <TaxCollectorStateUpdateMessage.h>
#include <TopTaxCollectorListMessage.h>
#include <TeleportBuddiesAnswerMessage.h>
#include <TeleportBuddiesMessage.h>
#include <TeleportBuddiesRequestedMessage.h>
#include <TeleportToBuddyAnswerMessage.h>
#include <TeleportToBuddyCloseMessage.h>
#include <TeleportToBuddyOfferMessage.h>
#include <InteractiveUseWithParamRequestMessage.h>
#include <KnownZaapListMessage.h>
#include <TeleportDestinationsMessage.h>
#include <TeleportRequestMessage.h>
#include <ZaapDestinationsMessage.h>
#include <ZaapRespawnSaveRequestMessage.h>
#include <ZaapRespawnUpdatedMessage.h>
#include <DecraftResultMessage.h>
#include <EvolutiveObjectRecycleResultMessage.h>
#include <ExchangeAcceptMessage.h>
#include <ExchangeBidHouseBuyMessage.h>
#include <ExchangeBidHouseBuyResultMessage.h>
#include <ExchangeBidHouseGenericItemAddedMessage.h>
#include <ExchangeBidHouseGenericItemRemovedMessage.h>
#include <ExchangeBidHouseInListAddedMessage.h>
#include <ExchangeBidHouseInListRemovedMessage.h>
#include <ExchangeBidHouseInListUpdatedMessage.h>
#include <ExchangeBidHouseItemAddOkMessage.h>
#include <ExchangeBidHouseItemRemoveOkMessage.h>
#include <ExchangeBidHouseListMessage.h>
#include <ExchangeBidHousePriceMessage.h>
#include <ExchangeBidHouseSearchMessage.h>
#include <ExchangeBidHouseTypeMessage.h>
#include <ExchangeBidHouseUnsoldItemsMessage.h>
#include <ExchangeBidPriceForSellerMessage.h>
#include <ExchangeBidPriceMessage.h>
#include <ExchangeBidSearchOkMessage.h>
#include <ExchangeBuyMessage.h>
#include <ExchangeBuyOkMessage.h>
#include <ExchangeCraftCountModifiedMessage.h>
#include <ExchangeCraftCountRequestMessage.h>
#include <ExchangeCrafterJobLevelupMessage.h>
#include <ExchangeCraftInformationObjectMessage.h>
#include <ExchangeCraftPaymentModificationRequestMessage.h>
#include <ExchangeCraftPaymentModifiedMessage.h>
#include <ExchangeCraftResultMagicWithObjectDescMessage.h>
#include <ExchangeCraftResultMessage.h>
#include <ExchangeCraftResultWithObjectDescMessage.h>
#include <ExchangeCraftResultWithObjectIdMessage.h>
#include <ExchangeErrorMessage.h>
#include <ExchangeGuildTaxCollectorGetMessage.h>
#include <ExchangeHandleMountsMessage.h>
#include <ExchangeIsReadyMessage.h>
#include <ExchangeItemAutoCraftStopedMessage.h>
#include <ExchangeLeaveMessage.h>
#include <ExchangeMoneyMovementInformationMessage.h>
#include <ExchangeMountFreeFromPaddockMessage.h>
#include <ExchangeMountsPaddockAddMessage.h>
#include <ExchangeMountsPaddockRemoveMessage.h>
#include <ExchangeMountsStableAddMessage.h>
#include <ExchangeMountsStableBornAddMessage.h>
#include <ExchangeMountsStableRemoveMessage.h>
#include <ExchangeMountStableErrorMessage.h>
#include <ExchangeMountsTakenFromPaddockMessage.h>
#include <ExchangeMountSterilizeFromPaddockMessage.h>
#include <ExchangeObjectAddedMessage.h>
#include <ExchangeObjectMessage.h>
#include <ExchangeObjectModifyPricedMessage.h>
#include <ExchangeObjectMoveKamaMessage.h>
#include <ExchangeObjectMoveMessage.h>
#include <ExchangeObjectMovePricedMessage.h>
#include <ExchangeObjectsAddedMessage.h>
#include <ExchangeObjectTransfertAllFromInvMessage.h>
#include <ExchangeObjectTransfertAllToInvMessage.h>
#include <ExchangeObjectTransfertExistingFromInvMessage.h>
#include <ExchangeObjectTransfertExistingToInvMessage.h>
#include <ExchangeObjectTransfertListFromInvMessage.h>
#include <ExchangeObjectTransfertListToInvMessage.h>
#include <ExchangeObjectTransfertListWithQuantityToInvMessage.h>
#include <ExchangeObjectUseInWorkshopMessage.h>
#include <ExchangeOfflineSoldItemsMessage.h>
#include <ExchangeOkMultiCraftMessage.h>
#include <ExchangeOnHumanVendorRequestMessage.h>
#include <ExchangePlayerMultiCraftRequestMessage.h>
#include <ExchangePlayerRequestMessage.h>
#include <ExchangeReadyMessage.h>
#include <ExchangeReplayStopMessage.h>
#include <ExchangeReplyTaxVendorMessage.h>
#include <ExchangeRequestedMessage.h>
#include <ExchangeRequestedTradeMessage.h>
#include <ExchangeRequestMessage.h>
#include <ExchangeRequestOnMountStockMessage.h>
#include <ExchangeRequestOnShopStockMessage.h>
#include <ExchangeRequestOnTaxCollectorMessage.h>
#include <ExchangeSellMessage.h>
#include <ExchangeSellOkMessage.h>
#include <ExchangeSetCraftRecipeMessage.h>
#include <ExchangeShopStockMovementRemovedMessage.h>
#include <ExchangeShopStockMovementUpdatedMessage.h>
#include <ExchangeShopStockMultiMovementRemovedMessage.h>
#include <ExchangeShopStockMultiMovementUpdatedMessage.h>
#include <ExchangeShopStockStartedMessage.h>
#include <ExchangeShowVendorTaxMessage.h>
#include <ExchangeStartAsVendorMessage.h>
#include <ExchangeStartedBidBuyerMessage.h>
#include <ExchangeStartedBidSellerMessage.h>
#include <ExchangeStartedMessage.h>
#include <ExchangeStartedMountStockMessage.h>
#include <ExchangeStartedTaxCollectorShopMessage.h>
#include <ExchangeStartedWithPodsMessage.h>
#include <ExchangeStartedWithStorageMessage.h>
#include <ExchangeStartOkCraftMessage.h>
#include <ExchangeStartOkCraftWithInformationMessage.h>
#include <ExchangeStartOkEvolutiveObjectRecycleTradeMessage.h>
#include <ExchangeStartOkHumanVendorMessage.h>
#include <ExchangeStartOkJobIndexMessage.h>
#include <ExchangeStartOkMountMessage.h>
#include <ExchangeStartOkMountWithOutPaddockMessage.h>
#include <ExchangeStartOkMulticraftCrafterMessage.h>
#include <ExchangeStartOkMulticraftCustomerMessage.h>
#include <ExchangeStartOkNpcShopMessage.h>
#include <ExchangeStartOkNpcTradeMessage.h>
#include <ExchangeStartOkRecycleTradeMessage.h>
#include <ExchangeStartOkRunesTradeMessage.h>
#include <ExchangeStoppedMessage.h>
#include <ExchangeTypesExchangerDescriptionForUserMessage.h>
#include <ExchangeTypesItemsExchangerDescriptionForUserMessage.h>
#include <ExchangeWaitingResultMessage.h>
#include <ExchangeWeightMessage.h>
#include <FocusedExchangeReadyMessage.h>
#include <ItemNoMoreAvailableMessage.h>
#include <JobBookSubscribeRequestMessage.h>
#include <RecycleResultMessage.h>
#include <UpdateMountCharacteristicsMessage.h>
#include <ExchangeKamaModifiedMessage.h>
#include <ExchangeMultiCraftCrafterCanUseHisRessourcesMessage.h>
#include <ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage.h>
#include <ExchangeObjectModifiedInBagMessage.h>
#include <ExchangeObjectModifiedMessage.h>
#include <ExchangeObjectPutInBagMessage.h>
#include <ExchangeObjectRemovedFromBagMessage.h>
#include <ExchangeObjectRemovedMessage.h>
#include <ExchangeObjectsModifiedMessage.h>
#include <ExchangeObjectsRemovedMessage.h>
#include <ExchangePodsModifiedMessage.h>
#include <GoldAddedMessage.h>
#include <InventoryContentMessage.h>
#include <InventoryWeightMessage.h>
#include <LivingObjectChangeSkinRequestMessage.h>
#include <LivingObjectDissociateMessage.h>
#include <LivingObjectMessageMessage.h>
#include <LivingObjectMessageRequestMessage.h>
#include <MimicryObjectAssociatedMessage.h>
#include <MimicryObjectEraseRequestMessage.h>
#include <MimicryObjectErrorMessage.h>
#include <MimicryObjectFeedAndAssociateRequestMessage.h>
#include <MimicryObjectPreviewMessage.h>
#include <ObjectAddedMessage.h>
#include <ObjectDeletedMessage.h>
#include <ObjectDeleteMessage.h>
#include <ObjectDropMessage.h>
#include <ObjectErrorMessage.h>
#include <ObjectJobAddedMessage.h>
#include <ObjectModifiedMessage.h>
#include <ObjectMovementMessage.h>
#include <ObjectQuantityMessage.h>
#include <ObjectsAddedMessage.h>
#include <ObjectsDeletedMessage.h>
#include <ObjectSetPositionMessage.h>
#include <ObjectsQuantityMessage.h>
#include <ObjectUseMessage.h>
#include <ObjectUseMultipleMessage.h>
#include <ObjectUseOnCellMessage.h>
#include <ObjectUseOnCharacterMessage.h>
#include <ObtainedItemMessage.h>
#include <ObtainedItemWithBonusMessage.h>
#include <SetUpdateMessage.h>
#include <SymbioticObjectAssociatedMessage.h>
#include <SymbioticObjectAssociateRequestMessage.h>
#include <SymbioticObjectErrorMessage.h>
#include <WatchInventoryContentMessage.h>
#include <WrapperObjectAssociatedMessage.h>
#include <WrapperObjectDissociateRequestMessage.h>
#include <WrapperObjectErrorMessage.h>
#include <SpellListMessage.h>
#include <StorageInventoryContentMessage.h>
#include <StorageKamasUpdateMessage.h>
#include <StorageObjectRemoveMessage.h>
#include <StorageObjectsRemoveMessage.h>
#include <StorageObjectsUpdateMessage.h>
#include <StorageObjectUpdateMessage.h>
#include <ForgettableSpellClientActionMessage.h>
#include <ForgettableSpellDeleteMessage.h>
#include <ForgettableSpellEquipmentSlotsMessage.h>
#include <ForgettableSpellListUpdateMessage.h>
#include <ArenaFighterLeaveMessage.h>
#include <BreachGameFightEndMessage.h>
#include <ChallengeInfoMessage.h>
#include <ChallengeResultMessage.h>
#include <ChallengeTargetsListMessage.h>
#include <ChallengeTargetsListRequestMessage.h>
#include <ChallengeTargetUpdateMessage.h>
#include <GameFightRefreshFighterMessage.h>
#include <GameFightShowFighterMessage.h>
#include <GameFightShowFighterRandomStaticPoseMessage.h>
#include <AnomalyStateMessage.h>
#include <MapComplementaryInformationsAnomalyMessage.h>
#include <BreachBonusMessage.h>
#include <BreachBudgetMessage.h>
#include <BreachCharactersMessage.h>
#include <BreachEnterMessage.h>
#include <BreachExitRequestMessage.h>
#include <BreachExitResponseMessage.h>
#include <BreachRoomLockedMessage.h>
#include <BreachRoomUnlockRequestMessage.h>
#include <BreachRoomUnlockResultMessage.h>
#include <BreachSavedMessage.h>
#include <BreachStateMessage.h>
#include <BreachTeleportRequestMessage.h>
#include <BreachTeleportResponseMessage.h>
#include <MapComplementaryInformationsBreachMessage.h>
#include <GameRolePlayFreeSoulRequestMessage.h>
#include <GameRolePlayGameOverMessage.h>
#include <GameRolePlayPlayerLifeStatusMessage.h>
#include <WarnOnPermaDeathMessage.h>
#include <GameRolePlayDelayedActionFinishedMessage.h>
#include <GameRolePlayDelayedActionMessage.h>
#include <GameRolePlayDelayedObjectUseMessage.h>
#include <DocumentReadingBeginMessage.h>
#include <EmoteAddMessage.h>
#include <EmoteListMessage.h>
#include <EmotePlayAbstractMessage.h>
#include <EmotePlayErrorMessage.h>
#include <EmotePlayMassiveMessage.h>
#include <EmotePlayMessage.h>
#include <EmotePlayRequestMessage.h>
#include <EmoteRemoveMessage.h>
#include <GameRolePlayAggressionMessage.h>
#include <GameRolePlayAttackMonsterRequestMessage.h>
#include <GameRolePlayFightRequestCanceledMessage.h>
#include <GameRolePlayMonsterAngryAtPlayerMessage.h>
#include <GameRolePlayMonsterNotAngryAtPlayerMessage.h>
#include <GameRolePlayPlayerFightFriendlyAnsweredMessage.h>
#include <GameRolePlayPlayerFightFriendlyAnswerMessage.h>
#include <GameRolePlayPlayerFightFriendlyRequestedMessage.h>
#include <GameRolePlayPlayerFightRequestMessage.h>
#include <GameRolePlayRemoveChallengeMessage.h>
#include <GameRolePlayShowChallengeMessage.h>
#include <ChangeHavenBagRoomRequestMessage.h>
#include <ChangeThemeRequestMessage.h>
#include <CloseHavenBagFurnitureSequenceRequestMessage.h>
#include <EditHavenBagCancelRequestMessage.h>
#include <EditHavenBagFinishedMessage.h>
#include <EditHavenBagRequestMessage.h>
#include <EditHavenBagStartMessage.h>
#include <EnterHavenBagRequestMessage.h>
#include <ExitHavenBagRequestMessage.h>
#include <HavenBagDailyLoteryMessage.h>
#include <HavenBagFurnituresMessage.h>
#include <HavenBagFurnituresRequestMessage.h>
#include <HavenBagPackListMessage.h>
#include <HavenBagRoomUpdateMessage.h>
#include <KickHavenBagRequestMessage.h>
#include <OpenHavenBagFurnitureSequenceRequestMessage.h>
#include <AccountHouseMessage.h>
#include <HouseBuyRequestMessage.h>
#include <HouseBuyResultMessage.h>
#include <HouseKickIndoorMerchantRequestMessage.h>
#include <HouseKickRequestMessage.h>
#include <HouseLockFromInsideRequestMessage.h>
#include <HousePropertiesMessage.h>
#include <HouseSellFromInsideRequestMessage.h>
#include <HouseSellingUpdateMessage.h>
#include <HouseSellRequestMessage.h>
#include <HouseToSellFilterMessage.h>
#include <HouseToSellListMessage.h>
#include <HouseToSellListRequestMessage.h>
#include <JobAllowMultiCraftRequestMessage.h>
#include <JobBookSubscriptionMessage.h>
#include <JobCrafterDirectoryAddMessage.h>
#include <JobCrafterDirectoryDefineSettingsMessage.h>
#include <JobCrafterDirectoryEntryMessage.h>
#include <JobCrafterDirectoryEntryRequestMessage.h>
#include <JobCrafterDirectoryListMessage.h>
#include <JobCrafterDirectoryListRequestMessage.h>
#include <JobCrafterDirectoryRemoveMessage.h>
#include <JobCrafterDirectorySettingsMessage.h>
#include <JobDescriptionMessage.h>
#include <JobExperienceMultiUpdateMessage.h>
#include <JobExperienceOtherPlayerUpdateMessage.h>
#include <JobExperienceUpdateMessage.h>
#include <JobLevelUpMessage.h>
#include <JobMultiCraftAvailableSkillsMessage.h>
#include <LockableChangeCodeMessage.h>
#include <LockableCodeResultMessage.h>
#include <LockableShowCodeDialogMessage.h>
#include <LockableStateUpdateAbstractMessage.h>
#include <LockableStateUpdateHouseDoorMessage.h>
#include <LockableStateUpdateStorageMessage.h>
#include <LockableUseCodeMessage.h>
#include <AlliancePrismDialogQuestionMessage.h>
#include <AllianceTaxCollectorDialogQuestionExtendedMessage.h>
#include <EntityTalkMessage.h>
#include <MapNpcsQuestStatusUpdateMessage.h>
#include <NpcDialogCreationMessage.h>
#include <NpcDialogQuestionMessage.h>
#include <NpcDialogReplyMessage.h>
#include <NpcGenericActionFailureMessage.h>
#include <NpcGenericActionRequestMessage.h>
#include <PortalDialogCreationMessage.h>
#include <TaxCollectorDialogQuestionBasicMessage.h>
#include <TaxCollectorDialogQuestionExtendedMessage.h>
#include <ObjectGroundAddedMessage.h>
#include <ObjectGroundListAddedMessage.h>
#include <ObjectGroundRemovedMessage.h>
#include <ObjectGroundRemovedMultipleMessage.h>
#include <GameDataPlayFarmObjectAnimationMessage.h>
#include <PaddockPropertiesMessage.h>
#include <PaddockSellBuyDialogMessage.h>
#include <PaddockToSellFilterMessage.h>
#include <PaddockToSellListMessage.h>
#include <PaddockToSellListRequestMessage.h>
#include <AbstractPartyEventMessage.h>
#include <AbstractPartyMemberInFightMessage.h>
#include <AbstractPartyMessage.h>
#include <DungeonPartyFinderAvailableDungeonsMessage.h>
#include <DungeonPartyFinderAvailableDungeonsRequestMessage.h>
#include <DungeonPartyFinderListenErrorMessage.h>
#include <DungeonPartyFinderListenRequestMessage.h>
#include <DungeonPartyFinderRegisterErrorMessage.h>
#include <DungeonPartyFinderRegisterRequestMessage.h>
#include <DungeonPartyFinderRegisterSuccessMessage.h>
#include <DungeonPartyFinderRoomContentMessage.h>
#include <DungeonPartyFinderRoomContentUpdateMessage.h>
#include <PartyAbdicateThroneMessage.h>
#include <PartyAcceptInvitationMessage.h>
#include <PartyCancelInvitationMessage.h>
#include <PartyCancelInvitationNotificationMessage.h>
#include <PartyCannotJoinErrorMessage.h>
#include <PartyDeletedMessage.h>
#include <PartyFollowMemberRequestMessage.h>
#include <PartyFollowStatusUpdateMessage.h>
#include <PartyFollowThisMemberRequestMessage.h>
#include <PartyInvitationArenaRequestMessage.h>
#include <PartyInvitationCancelledForGuestMessage.h>
#include <PartyInvitationDetailsMessage.h>
#include <PartyInvitationDetailsRequestMessage.h>
#include <PartyInvitationDungeonDetailsMessage.h>
#include <PartyInvitationDungeonMessage.h>
#include <PartyInvitationDungeonRequestMessage.h>
#include <PartyInvitationMessage.h>
#include <PartyInvitationRequestMessage.h>
#include <PartyJoinMessage.h>
#include <PartyKickedByMessage.h>
#include <PartyKickRequestMessage.h>
#include <PartyLeaderUpdateMessage.h>
#include <PartyLeaveMessage.h>
#include <PartyLeaveRequestMessage.h>
#include <PartyLocateMembersMessage.h>
#include <PartyLocateMembersRequestMessage.h>
#include <PartyLoyaltyStatusMessage.h>
#include <PartyMemberEjectedMessage.h>
#include <PartyMemberInStandardFightMessage.h>
#include <PartyMemberRemoveMessage.h>
#include <PartyModifiableStatusMessage.h>
#include <PartyNameSetErrorMessage.h>
#include <PartyNameSetRequestMessage.h>
#include <PartyNameUpdateMessage.h>
#include <PartyNewGuestMessage.h>
#include <PartyNewMemberMessage.h>
#include <PartyPledgeLoyaltyRequestMessage.h>
#include <PartyRefuseInvitationMessage.h>
#include <PartyRefuseInvitationNotificationMessage.h>
#include <PartyRestrictedMessage.h>
#include <PartyStopFollowRequestMessage.h>
#include <PartyUpdateLightMessage.h>
#include <PartyUpdateMessage.h>
#include <PurchasableDialogMessage.h>
#include <FollowedQuestsMessage.h>
#include <FollowQuestObjectiveRequestMessage.h>
#include <GuidedModeQuitRequestMessage.h>
#include <GuidedModeReturnRequestMessage.h>
#include <QuestListMessage.h>
#include <QuestListRequestMessage.h>
#include <QuestObjectiveValidatedMessage.h>
#include <QuestObjectiveValidationMessage.h>
#include <QuestStartedMessage.h>
#include <QuestStartRequestMessage.h>
#include <QuestStepInfoMessage.h>
#include <QuestStepInfoRequestMessage.h>
#include <QuestStepStartedMessage.h>
#include <QuestStepValidatedMessage.h>
#include <QuestValidatedMessage.h>
#include <RefreshFollowedQuestsOrderRequestMessage.h>
#include <UnfollowQuestObjectiveRequestMessage.h>
#include <SpellVariantActivationMessage.h>
#include <SpellVariantActivationRequestMessage.h>
#include <StatsUpgradeRequestMessage.h>
#include <StatsUpgradeResultMessage.h>
#include <PortalUseRequestMessage.h>
#include <TreasureHuntAvailableRetryCountUpdateMessage.h>
#include <TreasureHuntDigRequestAnswerFailedMessage.h>
#include <TreasureHuntDigRequestAnswerMessage.h>
#include <TreasureHuntDigRequestMessage.h>
#include <TreasureHuntFinishedMessage.h>
#include <TreasureHuntFlagRemoveRequestMessage.h>
#include <TreasureHuntFlagRequestAnswerMessage.h>
#include <TreasureHuntFlagRequestMessage.h>
#include <TreasureHuntGiveUpRequestMessage.h>
#include <TreasureHuntLegendaryRequestMessage.h>
#include <TreasureHuntMessage.h>
#include <TreasureHuntRequestAnswerMessage.h>
#include <TreasureHuntShowLegendaryUIMessage.h>
#include <GameRolePlaySpellAnimMessage.h>
#include <AlignmentWarEffortDonatePreviewMessage.h>
#include <AlignmentWarEffortDonateRequestMessage.h>
#include <AlignmentWarEffortDonationResultMessage.h>
#include <CharacterAlignmentWarEffortProgressionMessage.h>
#include <CharacterAlignmentWarEffortProgressionRequestMessage.h>
#include <BreachBranchesMessage.h>
#include <BreachInvitationAnswerMessage.h>
#include <BreachInvitationCloseMessage.h>
#include <BreachInvitationOfferMessage.h>
#include <BreachInvitationRequestMessage.h>
#include <BreachInvitationResponseMessage.h>
#include <BreachKickRequestMessage.h>
#include <BreachKickResponseMessage.h>
#include <BreachRewardBoughtMessage.h>
#include <BreachRewardBuyMessage.h>
#include <BreachRewardsMessage.h>
#include <GameRolePlayArenaFightAnswerMessage.h>
#include <GameRolePlayArenaFighterStatusMessage.h>
#include <GameRolePlayArenaFightPropositionMessage.h>
#include <GameRolePlayArenaInvitationCandidatesAnswer.h>
#include <GameRolePlayArenaLeagueRewardsMessage.h>
#include <GameRolePlayArenaRegisterMessage.h>
#include <GameRolePlayArenaRegistrationStatusMessage.h>
#include <GameRolePlayArenaSwitchToFightServerMessage.h>
#include <GameRolePlayArenaSwitchToGameServerMessage.h>
#include <GameRolePlayArenaUnregisterMessage.h>
#include <GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage.h>
#include <GameRolePlayArenaUpdatePlayerInfosMessage.h>
#include <HavenBagPermissionsUpdateMessage.h>
#include <HavenBagPermissionsUpdateRequestMessage.h>
#include <InviteInHavenBagClosedMessage.h>
#include <InviteInHavenBagMessage.h>
#include <InviteInHavenBagOfferMessage.h>
#include <TeleportHavenBagAnswerMessage.h>
#include <TeleportHavenBagRequestMessage.h>
#include <HouseGuildNoneMessage.h>
#include <HouseGuildRightsMessage.h>
#include <HouseGuildRightsViewMessage.h>
#include <HouseGuildShareRequestMessage.h>
#include <PartyMemberInBreachFightMessage.h>
#include <PartyEntityUpdateLightMessage.h>
#include <AlignmentWarEffortProgressionMessage.h>
#include <AlignmentWarEffortProgressionRequestMessage.h>

Packet::Packet(unsigned int packetId, unsigned int instanceId, char *realInstanceId, unsigned int packetSize,
               char *data) {
    this->packetId = packetId;
    this->packetSize = packetSize;
    this->realInstanceId = realInstanceId;
    this->instanceId = instanceId;
    this->content = static_cast<char *>(malloc(packetSize));
    if (this->content == nullptr) {
        throw BotCoreException(1);
    }
    memcpy(&this->content[0], &data[0], packetSize);
}

char *Packet::getPacketContent() {
    return this->content;
}

unsigned int Packet::getPacketId() {
    return this->packetId;
}

unsigned int Packet::getPacketSize() {
    return this->packetSize;
}

DeserializeInterface *Packet::getMessage() {
    return this->message;
}

Packet::~Packet() {
    free(this->content);
    delete this->message;
}

void Packet::deserializePacket() {
    DeserializeInterface *currentMessage = nullptr;
    switch (this->packetId) {
        case 5178:
            currentMessage = new AdminCommandMessage();
            break;
        case 1379:
            currentMessage = new AdminQuietCommandMessage();
            break;
        case 1923:
            currentMessage = new ConsoleCommandsListMessage();
            break;
        case 3514:
            currentMessage = new ConsoleMessage();
            break;
        case 9930:
            currentMessage = new CredentialsAcknowledgementMessage();
            break;
        case 2607:
            currentMessage = new HelloConnectMessage();
            break;
        case 4388:
            currentMessage = new IdentificationAccountForceMessage();
            break;
        case 7380:
            currentMessage = new IdentificationFailedBannedMessage();
            break;
        case 8091:
            currentMessage = new IdentificationFailedForBadVersionMessage();
            break;
        case 5865:
            currentMessage = new IdentificationFailedMessage();
            break;
        case 5833:
            currentMessage = new IdentificationMessage();
            break;
        case 8394:
            currentMessage = new IdentificationSuccessMessage();
            break;
        case 5260:
            currentMessage = new IdentificationSuccessWithLoginTokenMessage();
            break;
        case 5457:
            currentMessage = new MigratedServerListMessage();
            break;
        case 8204:
            currentMessage = new SelectedServerDataExtendedMessage();
            break;
        case 6182:
            currentMessage = new SelectedServerDataMessage();
            break;
        case 6211:
            currentMessage = new SelectedServerRefusedMessage();
            break;
        case 1927:
            currentMessage = new ServerSelectionMessage();
            break;
        case 8688:
            currentMessage = new ServersListMessage();
            break;
        case 3937:
            currentMessage = new ServerStatusUpdateMessage();
            break;
        case 8426:
            currentMessage = new DebugClearHighlightCellsMessage();
            break;
        case 1636:
            currentMessage = new DebugHighlightCellsMessage();
            break;
        case 1327:
            currentMessage = new DebugInClientMessage();
            break;
        case 5481:
            currentMessage = new ProtocolRequired();
            break;
        case 7010:
            currentMessage = new LoginQueueStatusMessage();
            break;
        case 9955:
            currentMessage = new QueueStatusMessage();
            break;
        case 2030:
            currentMessage = new TrustStatusMessage();
            break;
        case 8145:
            currentMessage = new CheckFileMessage();
            break;
        case 4509:
            currentMessage = new CheckFileRequestMessage();
            break;
        case 8606:
            currentMessage = new CheckIntegrityMessage();
            break;
        case 6268:
            currentMessage = new ClientKeyMessage();
            break;
        case 4873:
            currentMessage = new AccountInformationsUpdateMessage();
            break;
        case 1472:
            currentMessage = new ClientYouAreDrunkMessage();
            break;
        case 9489:
            currentMessage = new BasicPingMessage();
            break;
        case 5053:
            currentMessage = new BasicPongMessage();
            break;
        case 9271:
            currentMessage = new BasicStatMessage();
            break;
        case 5159:
            currentMessage = new BasicStatWithDataMessage();
            break;
        case 5001:
            currentMessage = new AccountLinkRequiredMessage();
            break;
        case 5508:
            currentMessage = new NicknameAcceptedMessage();
            break;
        case 5126:
            currentMessage = new NicknameChoiceRequestMessage();
            break;
        case 4734:
            currentMessage = new NicknameRefusedMessage();
            break;
        case 3860:
            currentMessage = new NicknameRegistrationMessage();
            break;
        case 3119:
            currentMessage = new AcquaintanceSearchErrorMessage();
            break;
        case 1282:
            currentMessage = new AcquaintanceSearchMessage();
            break;
        case 137:
            currentMessage = new AcquaintanceServerListMessage();
            break;
        case 8491:
            currentMessage = new AchievementDetailedListMessage();
            break;
        case 7504:
            currentMessage = new AchievementDetailedListRequestMessage();
            break;
        case 360:
            currentMessage = new AchievementDetailsMessage();
            break;
        case 1661:
            currentMessage = new AchievementDetailsRequestMessage();
            break;
        case 7636:
            currentMessage = new AchievementFinishedInformationMessage();
            break;
        case 2350:
            currentMessage = new AchievementFinishedMessage();
            break;
        case 3550:
            currentMessage = new AchievementListMessage();
            break;
        case 5299:
            currentMessage = new AchievementRewardErrorMessage();
            break;
        case 368:
            currentMessage = new AchievementRewardRequestMessage();
            break;
        case 5247:
            currentMessage = new AchievementRewardSuccessMessage();
            break;
        case 822:
            currentMessage = new FriendGuildSetWarnOnAchievementCompleteMessage();
            break;
        case 169:
            currentMessage = new FriendGuildWarnOnAchievementCompleteStateMessage();
            break;
        case 3972:
            currentMessage = new AbstractGameActionMessage();
            break;
        case 1777:
            currentMessage = new AbstractGameActionWithAckMessage();
            break;
        case 7836:
            currentMessage = new GameActionAcknowledgementMessage();
            break;
        case 5520:
            currentMessage = new GameActionNoopMessage();
            break;
        case 1035:
            currentMessage = new GameActionSpamMessage();
            break;
        case 4946:
            currentMessage = new AllianceBulletinMessage();
            break;
        case 1895:
            currentMessage = new AllianceBulletinSetErrorMessage();
            break;
        case 8756:
            currentMessage = new AllianceBulletinSetRequestMessage();
            break;
        case 8726:
            currentMessage = new AllianceChangeGuildRightsMessage();
            break;
        case 7888:
            currentMessage = new AllianceCreationResultMessage();
            break;
        case 5298:
            currentMessage = new AllianceCreationStartedMessage();
            break;
        case 8739:
            currentMessage = new AllianceCreationValidMessage();
            break;
        case 2007:
            currentMessage = new AllianceFactsErrorMessage();
            break;
        case 9721:
            currentMessage = new AllianceFactsMessage();
            break;
        case 2628:
            currentMessage = new AllianceFactsRequestMessage();
            break;
        case 2611:
            currentMessage = new AllianceGuildLeavingMessage();
            break;
        case 4742:
            currentMessage = new AllianceInsiderInfoMessage();
            break;
        case 856:
            currentMessage = new AllianceInsiderInfoRequestMessage();
            break;
        case 6986:
            currentMessage = new AllianceInvitationAnswerMessage();
            break;
        case 7156:
            currentMessage = new AllianceInvitationMessage();
            break;
        case 5125:
            currentMessage = new AllianceInvitationStateRecrutedMessage();
            break;
        case 4543:
            currentMessage = new AllianceInvitationStateRecruterMessage();
            break;
        case 6002:
            currentMessage = new AllianceInvitedMessage();
            break;
        case 6500:
            currentMessage = new AllianceJoinedMessage();
            break;
        case 9735:
            currentMessage = new AllianceKickRequestMessage();
            break;
        case 7287:
            currentMessage = new AllianceLeftMessage();
            break;
        case 5246:
            currentMessage = new AllianceListMessage();
            break;
        case 7070:
            currentMessage = new AllianceMembershipMessage();
            break;
        case 2632:
            currentMessage = new AllianceModificationEmblemValidMessage();
            break;
        case 8421:
            currentMessage = new AllianceModificationNameAndTagValidMessage();
            break;
        case 2652:
            currentMessage = new AllianceModificationStartedMessage();
            break;
        case 8871:
            currentMessage = new AllianceModificationValidMessage();
            break;
        case 1157:
            currentMessage = new AllianceMotdMessage();
            break;
        case 1499:
            currentMessage = new AllianceMotdSetErrorMessage();
            break;
        case 6658:
            currentMessage = new AllianceMotdSetRequestMessage();
            break;
        case 71:
            currentMessage = new AlliancePartialListMessage();
            break;
        case 2433:
            currentMessage = new AllianceVersatileInfoListMessage();
            break;
        case 6840:
            currentMessage = new KohUpdateMessage();
            break;
        case 8154:
            currentMessage = new AlmanachCalendarDateMessage();
            break;
        case 6878:
            currentMessage = new AccountCapabilitiesMessage();
            break;
        case 1881:
            currentMessage = new AccountLoggingKickedMessage();
            break;
        case 9166:
            currentMessage = new AlreadyConnectedMessage();
            break;
        case 3991:
            currentMessage = new AuthenticationTicketAcceptedMessage();
            break;
        case 8374:
            currentMessage = new AuthenticationTicketMessage();
            break;
        case 5915:
            currentMessage = new AuthenticationTicketRefusedMessage();
            break;
        case 8008:
            currentMessage = new HelloGameMessage();
            break;
        case 8552:
            currentMessage = new ReloginTokenRequestMessage();
            break;
        case 8519:
            currentMessage = new ReloginTokenStatusMessage();
            break;
        case 2305:
            currentMessage = new ServerOptionalFeaturesMessage();
            break;
        case 9947:
            currentMessage = new ServerSessionConstantsMessage();
            break;
        case 3435:
            currentMessage = new ServerSettingsMessage();
            break;
        case 6636:
            currentMessage = new AtlasPointInformationsMessage();
            break;
        case 4378:
            currentMessage = new BasicAckMessage();
            break;
        case 4547:
            currentMessage = new BasicDateMessage();
            break;
        case 6675:
            currentMessage = new BasicLatencyStatsMessage();
            break;
        case 22:
            currentMessage = new BasicLatencyStatsRequestMessage();
            break;
        case 1111:
            currentMessage = new BasicNoOperationMessage();
            break;
        case 1002:
            currentMessage = new BasicTimeMessage();
            break;
        case 5576:
            currentMessage = new BasicWhoAmIRequestMessage();
            break;
        case 6352:
            currentMessage = new BasicWhoIsMessage();
            break;
        case 5493:
            currentMessage = new BasicWhoIsNoMatchMessage();
            break;
        case 7214:
            currentMessage = new BasicWhoIsRequestMessage();
            break;
        case 7020:
            currentMessage = new CurrentServerStatusUpdateMessage();
            break;
        case 9545:
            currentMessage = new NumericWhoIsMessage();
            break;
        case 8770:
            currentMessage = new NumericWhoIsRequestMessage();
            break;
        case 2848:
            currentMessage = new SequenceNumberMessage();
            break;
        case 9851:
            currentMessage = new SequenceNumberRequestMessage();
            break;
        case 5636:
            currentMessage = new TextInformationMessage();
            break;
        case 8438:
            currentMessage = new ChatAbstractClientMessage();
            break;
        case 1532:
            currentMessage = new ChatAbstractServerMessage();
            break;
        case 2041:
            currentMessage = new ChatAdminServerMessage();
            break;
        case 5022:
            currentMessage = new ChatClientMultiMessage();
            break;
        case 85:
            currentMessage = new ChatClientMultiWithObjectMessage();
            break;
        case 9769:
            currentMessage = new ChatClientPrivateMessage();
            break;
        case 2672:
            currentMessage = new ChatClientPrivateWithObjectMessage();
            break;
        case 5057:
            currentMessage = new ChatErrorMessage();
            break;
        case 5867:
            currentMessage = new ChatServerCopyMessage();
            break;
        case 4706:
            currentMessage = new ChatServerCopyWithObjectMessage();
            break;
        case 5722:
            currentMessage = new ChatServerMessage();
            break;
        case 4275:
            currentMessage = new ChatServerWithObjectMessage();
            break;
        case 3587:
            currentMessage = new GameCautiousMapMovementMessage();
            break;
        case 189:
            currentMessage = new GameCautiousMapMovementRequestMessage();
            break;
        case 2151:
            currentMessage = new GameContextCreateErrorMessage();
            break;
        case 7391:
            currentMessage = new GameContextCreateMessage();
            break;
        case 7493:
            currentMessage = new GameContextCreateRequestMessage();
            break;
        case 5443:
            currentMessage = new GameContextDestroyMessage();
            break;
        case 7244:
            currentMessage = new GameContextKickMessage();
            break;
        case 8769:
            currentMessage = new GameContextMoveElementMessage();
            break;
        case 3748:
            currentMessage = new GameContextMoveMultipleElementsMessage();
            break;
        case 8333:
            currentMessage = new GameContextQuitMessage();
            break;
        case 6225:
            currentMessage = new GameContextReadyMessage();
            break;
        case 5695:
            currentMessage = new GameContextRefreshEntityLookMessage();
            break;
        case 52:
            currentMessage = new GameContextRemoveElementMessage();
            break;
        case 3832:
            currentMessage = new GameContextRemoveElementWithEventMessage();
            break;
        case 3474:
            currentMessage = new GameContextRemoveMultipleElementsMessage();
            break;
        case 6586:
            currentMessage = new GameContextRemoveMultipleElementsWithEventsMessage();
            break;
        case 1072:
            currentMessage = new GameEntitiesDispositionMessage();
            break;
        case 6347:
            currentMessage = new GameEntityDispositionErrorMessage();
            break;
        case 3301:
            currentMessage = new GameEntityDispositionMessage();
            break;
        case 8450:
            currentMessage = new GameMapChangeOrientationMessage();
            break;
        case 1337:
            currentMessage = new GameMapChangeOrientationRequestMessage();
            break;
        case 1921:
            currentMessage = new GameMapChangeOrientationsMessage();
            break;
        case 615:
            currentMessage = new GameMapMovementCancelMessage();
            break;
        case 7525:
            currentMessage = new GameMapMovementConfirmMessage();
            break;
        case 8712:
            currentMessage = new GameMapMovementMessage();
            break;
        case 7064:
            currentMessage = new GameMapMovementRequestMessage();
            break;
        case 6980:
            currentMessage = new GameMapNoMovementMessage();
            break;
        case 1992:
            currentMessage = new GameRefreshMonsterBoostsMessage();
            break;
        case 7767:
            currentMessage = new ShowCellMessage();
            break;
        case 7647:
            currentMessage = new ShowCellRequestMessage();
            break;
        case 6554:
            currentMessage = new ShowCellSpectatorMessage();
            break;
        case 9843:
            currentMessage = new LeaveDialogMessage();
            break;
        case 2225:
            currentMessage = new LeaveDialogRequestMessage();
            break;
        case 6004:
            currentMessage = new PauseDialogMessage();
            break;
        case 9029:
            currentMessage = new EntitiesInformationMessage();
            break;
        case 7068:
            currentMessage = new EntityInformationMessage();
            break;
        case 5627:
            currentMessage = new ObjectFeedMessage();
            break;
        case 6941:
            currentMessage = new FinishMoveListMessage();
            break;
        case 6971:
            currentMessage = new FinishMoveListRequestMessage();
            break;
        case 8541:
            currentMessage = new FinishMoveSetRequestMessage();
            break;
        case 7111:
            currentMessage = new AcquaintanceAddedMessage();
            break;
        case 4250:
            currentMessage = new AcquaintancesGetListMessage();
            break;
        case 1163:
            currentMessage = new AcquaintancesListMessage();
            break;
        case 2662:
            currentMessage = new ContactAddFailureMessage();
            break;
        case 7094:
            currentMessage = new FriendAddedMessage();
            break;
        case 5244:
            currentMessage = new FriendAddFailureMessage();
            break;
        case 5946:
            currentMessage = new FriendAddRequestMessage();
            break;
        case 3469:
            currentMessage = new FriendDeleteRequestMessage();
            break;
        case 4241:
            currentMessage = new FriendDeleteResultMessage();
            break;
        case 4174:
            currentMessage = new FriendJoinRequestMessage();
            break;
        case 4184:
            currentMessage = new FriendSetStatusShareMessage();
            break;
        case 6441:
            currentMessage = new FriendSetWarnOnConnectionMessage();
            break;
        case 6883:
            currentMessage = new FriendSetWarnOnLevelGainMessage();
            break;
        case 1285:
            currentMessage = new FriendsGetListMessage();
            break;
        case 3107:
            currentMessage = new FriendsListMessage();
            break;
        case 560:
            currentMessage = new FriendSpouseFollowWithCompassRequestMessage();
            break;
        case 9420:
            currentMessage = new FriendSpouseJoinRequestMessage();
            break;
        case 9081:
            currentMessage = new FriendStatusShareStateMessage();
            break;
        case 9116:
            currentMessage = new FriendUpdateMessage();
            break;
        case 8749:
            currentMessage = new FriendWarnOnConnectionStateMessage();
            break;
        case 1140:
            currentMessage = new FriendWarnOnLevelGainStateMessage();
            break;
        case 9973:
            currentMessage = new GuildMemberSetWarnOnConnectionMessage();
            break;
        case 3164:
            currentMessage = new GuildMemberWarnOnConnectionStateMessage();
            break;
        case 2861:
            currentMessage = new IgnoredAddedMessage();
            break;
        case 9626:
            currentMessage = new IgnoredAddFailureMessage();
            break;
        case 9784:
            currentMessage = new IgnoredAddRequestMessage();
            break;
        case 7856:
            currentMessage = new IgnoredDeleteRequestMessage();
            break;
        case 5614:
            currentMessage = new IgnoredDeleteResultMessage();
            break;
        case 9731:
            currentMessage = new IgnoredGetListMessage();
            break;
        case 8697:
            currentMessage = new IgnoredListMessage();
            break;
        case 299:
            currentMessage = new SpouseGetInformationsMessage();
            break;
        case 7590:
            currentMessage = new SpouseInformationsMessage();
            break;
        case 6318:
            currentMessage = new SpouseStatusMessage();
            break;
        case 2119:
            currentMessage = new WarnOnPermaDeathStateMessage();
            break;
        case 2462:
            currentMessage = new GuestLimitationMessage();
            break;
        case 3850:
            currentMessage = new GuestModeMessage();
            break;
        case 7995:
            currentMessage = new ChallengeFightJoinRefusedMessage();
            break;
        case 552:
            currentMessage = new GuildBulletinMessage();
            break;
        case 283:
            currentMessage = new GuildBulletinSetErrorMessage();
            break;
        case 2821:
            currentMessage = new GuildBulletinSetRequestMessage();
            break;
        case 2513:
            currentMessage = new GuildChangeMemberParametersMessage();
            break;
        case 6519:
            currentMessage = new GuildCharacsUpgradeRequestMessage();
            break;
        case 3699:
            currentMessage = new GuildCreationResultMessage();
            break;
        case 6723:
            currentMessage = new GuildCreationStartedMessage();
            break;
        case 4933:
            currentMessage = new GuildCreationValidMessage();
            break;
        case 7622:
            currentMessage = new GuildFactsErrorMessage();
            break;
        case 6652:
            currentMessage = new GuildFactsMessage();
            break;
        case 8768:
            currentMessage = new GuildFactsRequestMessage();
            break;
        case 3578:
            currentMessage = new GuildGetInformationsMessage();
            break;
        case 4163:
            currentMessage = new GuildHouseRemoveMessage();
            break;
        case 872:
            currentMessage = new GuildHousesInformationMessage();
            break;
        case 6190:
            currentMessage = new GuildHouseUpdateInformationMessage();
            break;
        case 3384:
            currentMessage = new GuildInAllianceFactsMessage();
            break;
        case 5234:
            currentMessage = new GuildInformationsGeneralMessage();
            break;
        case 1702:
            currentMessage = new GuildInformationsMembersMessage();
            break;
        case 7592:
            currentMessage = new GuildInformationsMemberUpdateMessage();
            break;
        case 6791:
            currentMessage = new GuildInformationsPaddocksMessage();
            break;
        case 2143:
            currentMessage = new GuildInfosUpgradeMessage();
            break;
        case 8465:
            currentMessage = new GuildInvitationAnswerMessage();
            break;
        case 4298:
            currentMessage = new GuildInvitationByNameMessage();
            break;
        case 6688:
            currentMessage = new GuildInvitationMessage();
            break;
        case 4418:
            currentMessage = new GuildInvitationStateRecrutedMessage();
            break;
        case 1230:
            currentMessage = new GuildInvitationStateRecruterMessage();
            break;
        case 3856:
            currentMessage = new GuildInvitedMessage();
            break;
        case 7966:
            currentMessage = new GuildJoinedMessage();
            break;
        case 2484:
            currentMessage = new GuildKickRequestMessage();
            break;
        case 8619:
            currentMessage = new GuildLeftMessage();
            break;
        case 2785:
            currentMessage = new GuildLevelUpMessage();
            break;
        case 641:
            currentMessage = new GuildListMessage();
            break;
        case 2202:
            currentMessage = new GuildMemberLeavingMessage();
            break;
        case 6259:
            currentMessage = new GuildMemberOnlineStatusMessage();
            break;
        case 1467:
            currentMessage = new GuildMembershipMessage();
            break;
        case 6538:
            currentMessage = new GuildModificationEmblemValidMessage();
            break;
        case 942:
            currentMessage = new GuildModificationNameValidMessage();
            break;
        case 2536:
            currentMessage = new GuildModificationStartedMessage();
            break;
        case 2304:
            currentMessage = new GuildModificationValidMessage();
            break;
        case 8244:
            currentMessage = new GuildMotdMessage();
            break;
        case 801:
            currentMessage = new GuildMotdSetErrorMessage();
            break;
        case 2776:
            currentMessage = new GuildMotdSetRequestMessage();
            break;
        case 9535:
            currentMessage = new GuildPaddockBoughtMessage();
            break;
        case 6712:
            currentMessage = new GuildPaddockRemovedMessage();
            break;
        case 3900:
            currentMessage = new GuildPaddockTeleportRequestMessage();
            break;
        case 8084:
            currentMessage = new GuildSpellUpgradeRequestMessage();
            break;
        case 9944:
            currentMessage = new GuildVersatileInfoListMessage();
            break;
        case 6194:
            currentMessage = new HouseTeleportRequestMessage();
            break;
        case 4802:
            currentMessage = new IdolFightPreparationUpdateMessage();
            break;
        case 9934:
            currentMessage = new IdolListMessage();
            break;
        case 2578:
            currentMessage = new IdolPartyLostMessage();
            break;
        case 2232:
            currentMessage = new IdolPartyRefreshMessage();
            break;
        case 5600:
            currentMessage = new IdolPartyRegisterRequestMessage();
            break;
        case 704:
            currentMessage = new IdolSelectedMessage();
            break;
        case 3869:
            currentMessage = new IdolSelectErrorMessage();
            break;
        case 7388:
            currentMessage = new IdolSelectRequestMessage();
            break;
        case 4411:
            currentMessage = new CharacterCapabilitiesMessage();
            break;
        case 3354:
            currentMessage = new CharacterLoadingCompleteMessage();
            break;
        case 2093:
            currentMessage = new OnConnectionEventMessage();
            break;
        case 4756:
            currentMessage = new ServerExperienceModificatorMessage();
            break;
        case 5009:
            currentMessage = new SetCharacterRestrictionsMessage();
            break;
        case 2801:
            currentMessage = new InteractiveElementUpdatedMessage();
            break;
        case 7734:
            currentMessage = new InteractiveMapUpdateMessage();
            break;
        case 9839:
            currentMessage = new InteractiveUsedMessage();
            break;
        case 785:
            currentMessage = new InteractiveUseEndedMessage();
            break;
        case 9202:
            currentMessage = new InteractiveUseErrorMessage();
            break;
        case 3724:
            currentMessage = new InteractiveUseRequestMessage();
            break;
        case 4169:
            currentMessage = new StatedElementUpdatedMessage();
            break;
        case 7849:
            currentMessage = new StatedMapUpdateMessage();
            break;
        case 2022:
            currentMessage = new KamasUpdateMessage();
            break;
        case 3713:
            currentMessage = new ObjectAveragePricesErrorMessage();
            break;
        case 3561:
            currentMessage = new ObjectAveragePricesGetMessage();
            break;
        case 5825:
            currentMessage = new ObjectAveragePricesMessage();
            break;
        case 2799:
            currentMessage = new AccessoryPreviewErrorMessage();
            break;
        case 5:
            currentMessage = new AccessoryPreviewMessage();
            break;
        case 9763:
            currentMessage = new AccessoryPreviewRequestMessage();
            break;
        case 6411:
            currentMessage = new PopupWarningMessage();
            break;
        case 4723:
            currentMessage = new AreaFightModificatorUpdateMessage();
            break;
        case 9336:
            currentMessage = new IconNamedPresetSaveRequestMessage();
            break;
        case 6308:
            currentMessage = new IconPresetSaveRequestMessage();
            break;
        case 1043:
            currentMessage = new IdolsPresetSaveRequestMessage();
            break;
        case 2448:
            currentMessage = new InvalidPresetsMessage();
            break;
        case 8924:
            currentMessage = new ItemForPresetUpdateMessage();
            break;
        case 7425:
            currentMessage = new PresetDeleteRequestMessage();
            break;
        case 9792:
            currentMessage = new PresetDeleteResultMessage();
            break;
        case 4545:
            currentMessage = new PresetSavedMessage();
            break;
        case 8976:
            currentMessage = new PresetSaveErrorMessage();
            break;
        case 1558:
            currentMessage = new PresetsMessage();
            break;
        case 3898:
            currentMessage = new PresetUseRequestMessage();
            break;
        case 3758:
            currentMessage = new PresetUseResultMessage();
            break;
        case 1400:
            currentMessage = new PresetUseResultWithMissingIdsMessage();
            break;
        case 3286:
            currentMessage = new PrismAttackRequestMessage();
            break;
        case 9780:
            currentMessage = new PrismFightAddedMessage();
            break;
        case 2846:
            currentMessage = new PrismFightAttackerAddMessage();
            break;
        case 6001:
            currentMessage = new PrismFightAttackerRemoveMessage();
            break;
        case 1666:
            currentMessage = new PrismFightDefenderAddMessage();
            break;
        case 9060:
            currentMessage = new PrismFightDefenderLeaveMessage();
            break;
        case 7685:
            currentMessage = new PrismFightJoinLeaveRequestMessage();
            break;
        case 6587:
            currentMessage = new PrismFightRemovedMessage();
            break;
        case 1999:
            currentMessage = new PrismFightStateUpdateMessage();
            break;
        case 5907:
            currentMessage = new PrismFightSwapRequestMessage();
            break;
        case 496:
            currentMessage = new PrismInfoCloseMessage();
            break;
        case 3063:
            currentMessage = new PrismInfoInValidMessage();
            break;
        case 997:
            currentMessage = new PrismInfoJoinLeaveRequestMessage();
            break;
        case 9417:
            currentMessage = new PrismModuleExchangeRequestMessage();
            break;
        case 1834:
            currentMessage = new PrismSetSabotagedRefusedMessage();
            break;
        case 9154:
            currentMessage = new PrismSetSabotagedRequestMessage();
            break;
        case 8894:
            currentMessage = new PrismSettingsErrorMessage();
            break;
        case 8733:
            currentMessage = new PrismSettingsRequestMessage();
            break;
        case 5377:
            currentMessage = new PrismsInfoValidMessage();
            break;
        case 3577:
            currentMessage = new PrismsListMessage();
            break;
        case 9690:
            currentMessage = new PrismsListRegisterMessage();
            break;
        case 8061:
            currentMessage = new PrismsListUpdateMessage();
            break;
        case 6760:
            currentMessage = new PrismUseRequestMessage();
            break;
        case 4604:
            currentMessage = new AlignmentRankUpdateMessage();
            break;
        case 4687:
            currentMessage = new SetEnableAVARequestMessage();
            break;
        case 4606:
            currentMessage = new SetEnablePVPRequestMessage();
            break;
        case 2994:
            currentMessage = new UpdateMapPlayersAgressableStatusMessage();
            break;
        case 1451:
            currentMessage = new UpdateSelfAgressableStatusMessage();
            break;
        case 4277:
            currentMessage = new CinematicMessage();
            break;
        case 1508:
            currentMessage = new URLOpenMessage();
            break;
        case 788:
            currentMessage = new ShortcutBarAddErrorMessage();
            break;
        case 2373:
            currentMessage = new ShortcutBarAddRequestMessage();
            break;
        case 400:
            currentMessage = new ShortcutBarContentMessage();
            break;
        case 9875:
            currentMessage = new ShortcutBarRefreshMessage();
            break;
        case 3974:
            currentMessage = new ShortcutBarRemovedMessage();
            break;
        case 5768:
            currentMessage = new ShortcutBarRemoveErrorMessage();
            break;
        case 373:
            currentMessage = new ShortcutBarRemoveRequestMessage();
            break;
        case 6910:
            currentMessage = new ShortcutBarReplacedMessage();
            break;
        case 8919:
            currentMessage = new ShortcutBarSwapErrorMessage();
            break;
        case 6397:
            currentMessage = new ShortcutBarSwapRequestMessage();
            break;
        case 5698:
            currentMessage = new BulletinMessage();
            break;
        case 4583:
            currentMessage = new ContactLookErrorMessage();
            break;
        case 6821:
            currentMessage = new ContactLookMessage();
            break;
        case 4004:
            currentMessage = new ContactLookRequestByIdMessage();
            break;
        case 2201:
            currentMessage = new ContactLookRequestByNameMessage();
            break;
        case 4354:
            currentMessage = new ContactLookRequestMessage();
            break;
        case 1521:
            currentMessage = new SocialNoticeMessage();
            break;
        case 671:
            currentMessage = new SocialNoticeSetErrorMessage();
            break;
        case 7293:
            currentMessage = new SocialNoticeSetRequestMessage();
            break;
        case 9836:
            currentMessage = new StartupActionAddMessage();
            break;
        case 3256:
            currentMessage = new StartupActionFinishedMessage();
            break;
        case 4714:
            currentMessage = new StartupActionsAllAttributionMessage();
            break;
        case 2943:
            currentMessage = new StartupActionsExecuteMessage();
            break;
        case 1192:
            currentMessage = new StartupActionsListMessage();
            break;
        case 6445:
            currentMessage = new StartupActionsObjetAttributionMessage();
            break;
        case 8198:
            currentMessage = new SubscriptionLimitationMessage();
            break;
        case 9729:
            currentMessage = new SubscriptionZoneMessage();
            break;
        case 3842:
            currentMessage = new OrnamentGainedMessage();
            break;
        case 4335:
            currentMessage = new OrnamentLostMessage();
            break;
        case 7227:
            currentMessage = new OrnamentSelectedMessage();
            break;
        case 9564:
            currentMessage = new OrnamentSelectErrorMessage();
            break;
        case 7916:
            currentMessage = new OrnamentSelectRequestMessage();
            break;
        case 821:
            currentMessage = new TitleGainedMessage();
            break;
        case 9752:
            currentMessage = new TitleLostMessage();
            break;
        case 7824:
            currentMessage = new TitlesAndOrnamentsListMessage();
            break;
        case 195:
            currentMessage = new TitlesAndOrnamentsListRequestMessage();
            break;
        case 9499:
            currentMessage = new TitleSelectedMessage();
            break;
        case 7192:
            currentMessage = new TitleSelectErrorMessage();
            break;
        case 7473:
            currentMessage = new TitleSelectRequestMessage();
            break;
        case 2095:
            currentMessage = new ClientUIOpenedByObjectMessage();
            break;
        case 1056:
            currentMessage = new ClientUIOpenedMessage();
            break;
        case 4995:
            currentMessage = new SystemMessageDisplayMessage();
            break;
        case 3369:
            currentMessage = new MailStatusMessage();
            break;
        case 7617:
            currentMessage = new NewMailMessage();
            break;
        case 1489:
            currentMessage = new HaapiApiKeyMessage();
            break;
        case 9286:
            currentMessage = new HaapiApiKeyRequestMessage();
            break;
        case 1617:
            currentMessage = new HaapiAuthErrorMessage();
            break;
        case 7471:
            currentMessage = new HaapiBufferListMessage();
            break;
        case 7789:
            currentMessage = new HaapiBufferListRequestMessage();
            break;
        case 7568:
            currentMessage = new HaapiBuyValidationMessage();
            break;
        case 9408:
            currentMessage = new HaapiCancelBidRequestMessage();
            break;
        case 7797:
            currentMessage = new HaapiConfirmationMessage();
            break;
        case 3477:
            currentMessage = new HaapiConfirmationRequestMessage();
            break;
        case 4296:
            currentMessage = new HaapiConsumeBufferRequestMessage();
            break;
        case 6833:
            currentMessage = new HaapiSessionMessage();
            break;
        case 6552:
            currentMessage = new HaapiShopApiKeyMessage();
            break;
        case 8537:
            currentMessage = new HaapiShopApiKeyRequestMessage();
            break;
        case 9546:
            currentMessage = new HaapiTokenMessage();
            break;
        case 9192:
            currentMessage = new HaapiTokenRequestMessage();
            break;
        case 8309:
            currentMessage = new HaapiValidationMessage();
            break;
        case 9199:
            currentMessage = new HaapiValidationRequestMessage();
            break;
        case 4295:
            currentMessage = new AbstractGameActionFightTargetedAbilityMessage();
            break;
        case 4225:
            currentMessage = new GameActionFightActivateGlyphTrapMessage();
            break;
        case 5624:
            currentMessage = new GameActionFightCarryCharacterMessage();
            break;
        case 1071:
            currentMessage = new GameActionFightCastOnTargetRequestMessage();
            break;
        case 8507:
            currentMessage = new GameActionFightCastRequestMessage();
            break;
        case 3680:
            currentMessage = new GameActionFightChangeLookMessage();
            break;
        case 1677:
            currentMessage = new GameActionFightCloseCombatMessage();
            break;
        case 4815:
            currentMessage = new GameActionFightDeathMessage();
            break;
        case 5052:
            currentMessage = new GameActionFightDispellableEffectMessage();
            break;
        case 827:
            currentMessage = new GameActionFightDispellEffectMessage();
            break;
        case 7134:
            currentMessage = new GameActionFightDispellMessage();
            break;
        case 4229:
            currentMessage = new GameActionFightDispellSpellMessage();
            break;
        case 9316:
            currentMessage = new GameActionFightDodgePointLossMessage();
            break;
        case 4435:
            currentMessage = new GameActionFightDropCharacterMessage();
            break;
        case 753:
            currentMessage = new GameActionFightExchangePositionsMessage();
            break;
        case 8056:
            currentMessage = new GameActionFightInvisibilityMessage();
            break;
        case 2560:
            currentMessage = new GameActionFightInvisibleDetectedMessage();
            break;
        case 8096:
            currentMessage = new GameActionFightKillMessage();
            break;
        case 5065:
            currentMessage = new GameActionFightLifeAndShieldPointsLostMessage();
            break;
        case 5687:
            currentMessage = new GameActionFightLifePointsGainMessage();
            break;
        case 2479:
            currentMessage = new GameActionFightLifePointsLostMessage();
            break;
        case 7743:
            currentMessage = new GameActionFightMarkCellsMessage();
            break;
        case 6919:
            currentMessage = new GameActionFightModifyEffectsDurationMessage();
            break;
        case 4979:
            currentMessage = new GameActionFightMultipleSummonMessage();
            break;
        case 2733:
            currentMessage = new GameActionFightNoSpellCastMessage();
            break;
        case 1965:
            currentMessage = new GameActionFightPointsVariationMessage();
            break;
        case 3507:
            currentMessage = new GameActionFightReduceDamagesMessage();
            break;
        case 3447:
            currentMessage = new GameActionFightReflectDamagesMessage();
            break;
        case 7706:
            currentMessage = new GameActionFightReflectSpellMessage();
            break;
        case 9185:
            currentMessage = new GameActionFightSlideMessage();
            break;
        case 3754:
            currentMessage = new GameActionFightSpellCastMessage();
            break;
        case 3484:
            currentMessage = new GameActionFightSpellCooldownVariationMessage();
            break;
        case 6537:
            currentMessage = new GameActionFightSpellImmunityMessage();
            break;
        case 7772:
            currentMessage = new GameActionFightStealKamaMessage();
            break;
        case 2182:
            currentMessage = new GameActionFightSummonMessage();
            break;
        case 8815:
            currentMessage = new GameActionFightTackledMessage();
            break;
        case 2698:
            currentMessage = new GameActionFightTeleportOnSameMapMessage();
            break;
        case 1639:
            currentMessage = new GameActionFightThrowCharacterMessage();
            break;
        case 2730:
            currentMessage = new GameActionFightTriggerEffectMessage();
            break;
        case 9588:
            currentMessage = new GameActionFightTriggerGlyphTrapMessage();
            break;
        case 3826:
            currentMessage = new GameActionFightUnmarkCellsMessage();
            break;
        case 4859:
            currentMessage = new GameActionFightVanishMessage();
            break;
        case 4310:
            currentMessage = new GameActionUpdateEffectTriggerCountMessage();
            break;
        case 8673:
            currentMessage = new SequenceEndMessage();
            break;
        case 9373:
            currentMessage = new SequenceStartMessage();
            break;
        case 2894:
            currentMessage = new CompassResetMessage();
            break;
        case 3439:
            currentMessage = new CompassUpdateMessage();
            break;
        case 7911:
            currentMessage = new CompassUpdatePartyMemberMessage();
            break;
        case 6287:
            currentMessage = new CompassUpdatePvpSeekMessage();
            break;
        case 3322:
            currentMessage = new BasicCharactersListMessage();
            break;
        case 1228:
            currentMessage = new CharacterFirstSelectionMessage();
            break;
        case 9190:
            currentMessage = new CharacterReplayWithRemodelRequestMessage();
            break;
        case 5817:
            currentMessage = new CharacterSelectedErrorMessage();
            break;
        case 6332:
            currentMessage = new CharacterSelectedForceMessage();
            break;
        case 765:
            currentMessage = new CharacterSelectedForceReadyMessage();
            break;
        case 1931:
            currentMessage = new CharacterSelectedSuccessMessage();
            break;
        case 7254:
            currentMessage = new CharacterSelectionMessage();
            break;
        case 5795:
            currentMessage = new CharacterSelectionWithRemodelMessage();
            break;
        case 7577:
            currentMessage = new CharactersListErrorMessage();
            break;
        case 9869:
            currentMessage = new CharactersListMessage();
            break;
        case 3340:
            currentMessage = new CharactersListRequestMessage();
            break;
        case 1644:
            currentMessage = new CharactersListWithRemodelingMessage();
            break;
        case 2712:
            currentMessage = new CharacterCanBeCreatedRequestMessage();
            break;
        case 9514:
            currentMessage = new CharacterCanBeCreatedResultMessage();
            break;
        case 1633:
            currentMessage = new CharacterCreationRequestMessage();
            break;
        case 7140:
            currentMessage = new CharacterCreationResultMessage();
            break;
        case 768:
            currentMessage = new CharacterNameSuggestionFailureMessage();
            break;
        case 5249:
            currentMessage = new CharacterNameSuggestionRequestMessage();
            break;
        case 421:
            currentMessage = new CharacterNameSuggestionSuccessMessage();
            break;
        case 190:
            currentMessage = new DebtsDeleteMessage();
            break;
        case 3503:
            currentMessage = new DebtsUpdateMessage();
            break;
        case 6428:
            currentMessage = new CharacterDeletionErrorMessage();
            break;
        case 5853:
            currentMessage = new CharacterDeletionRequestMessage();
            break;
        case 1391:
            currentMessage = new CharacterReplayRequestMessage();
            break;
        case 9931:
            currentMessage = new CharacterExperienceGainMessage();
            break;
        case 1775:
            currentMessage = new CharacterLevelUpInformationMessage();
            break;
        case 366:
            currentMessage = new CharacterLevelUpMessage();
            break;
        case 8872:
            currentMessage = new CharacterStatsListMessage();
            break;
        case 6334:
            currentMessage = new FighterStatsListMessage();
            break;
        case 1894:
            currentMessage = new LifePointsRegenBeginMessage();
            break;
        case 3437:
            currentMessage = new LifePointsRegenEndMessage();
            break;
        case 7291:
            currentMessage = new ResetCharacterStatsRequestMessage();
            break;
        case 8175:
            currentMessage = new UpdateLifePointsMessage();
            break;
        case 9102:
            currentMessage = new PlayerStatusUpdateErrorMessage();
            break;
        case 2354:
            currentMessage = new PlayerStatusUpdateMessage();
            break;
        case 6455:
            currentMessage = new PlayerStatusUpdateRequestMessage();
            break;
        case 3541:
            currentMessage = new ChannelEnablingChangeMessage();
            break;
        case 9158:
            currentMessage = new ChannelEnablingMessage();
            break;
        case 2771:
            currentMessage = new EnabledChannelsMessage();
            break;
        case 7105:
            currentMessage = new ChatCommunityChannelCommunityMessage();
            break;
        case 2713:
            currentMessage = new ChatCommunityChannelSetCommunityRequestMessage();
            break;
        case 2629:
            currentMessage = new ChatSmileyExtraPackListMessage();
            break;
        case 2519:
            currentMessage = new ChatSmileyMessage();
            break;
        case 7901:
            currentMessage = new ChatSmileyRequestMessage();
            break;
        case 8274:
            currentMessage = new LocalizedChatSmileyMessage();
            break;
        case 2814:
            currentMessage = new MoodSmileyRequestMessage();
            break;
        case 3199:
            currentMessage = new MoodSmileyResultMessage();
            break;
        case 5285:
            currentMessage = new MoodSmileyUpdateMessage();
            break;
        case 5107:
            currentMessage = new DisplayNumericalValuePaddockMessage();
            break;
        case 6151:
            currentMessage = new DungeonKeyRingMessage();
            break;
        case 848:
            currentMessage = new DungeonKeyRingUpdateMessage();
            break;
        case 1090:
            currentMessage = new GameFightEndMessage();
            break;
        case 386:
            currentMessage = new GameFightHumanReadyStateMessage();
            break;
        case 2650:
            currentMessage = new GameFightJoinMessage();
            break;
        case 3211:
            currentMessage = new GameFightJoinRequestMessage();
            break;
        case 8271:
            currentMessage = new GameFightLeaveMessage();
            break;
        case 9076:
            currentMessage = new GameFightNewRoundMessage();
            break;
        case 5791:
            currentMessage = new GameFightNewWaveMessage();
            break;
        case 4253:
            currentMessage = new GameFightOptionStateUpdateMessage();
            break;
        case 5741:
            currentMessage = new GameFightOptionToggleMessage();
            break;
        case 6766:
            currentMessage = new GameFightPauseMessage();
            break;
        case 2837:
            currentMessage = new GameFightPlacementPositionRequestMessage();
            break;
        case 8748:
            currentMessage = new GameFightPlacementPossiblePositionsMessage();
            break;
        case 5750:
            currentMessage = new GameFightPlacementSwapPositionsAcceptMessage();
            break;
        case 898:
            currentMessage = new GameFightPlacementSwapPositionsCancelledMessage();
            break;
        case 533:
            currentMessage = new GameFightPlacementSwapPositionsCancelMessage();
            break;
        case 9407:
            currentMessage = new GameFightPlacementSwapPositionsErrorMessage();
            break;
        case 4901:
            currentMessage = new GameFightPlacementSwapPositionsMessage();
            break;
        case 568:
            currentMessage = new GameFightPlacementSwapPositionsOfferMessage();
            break;
        case 9517:
            currentMessage = new GameFightPlacementSwapPositionsRequestMessage();
            break;
        case 4679:
            currentMessage = new GameFightReadyMessage();
            break;
        case 6353:
            currentMessage = new GameFightRemoveTeamMemberMessage();
            break;
        case 7999:
            currentMessage = new GameFightResumeMessage();
            break;
        case 1238:
            currentMessage = new GameFightResumeWithSlavesMessage();
            break;
        case 6511:
            currentMessage = new GameFightSpectateMessage();
            break;
        case 4807:
            currentMessage = new GameFightSpectatePlayerRequestMessage();
            break;
        case 6917:
            currentMessage = new GameFightSpectatorJoinMessage();
            break;
        case 6131:
            currentMessage = new GameFightStartingMessage();
            break;
        case 9280:
            currentMessage = new GameFightStartMessage();
            break;
        case 276:
            currentMessage = new GameFightSynchronizeMessage();
            break;
        case 1444:
            currentMessage = new GameFightTurnEndMessage();
            break;
        case 385:
            currentMessage = new GameFightTurnFinishMessage();
            break;
        case 399:
            currentMessage = new GameFightTurnListMessage();
            break;
        case 983:
            currentMessage = new GameFightTurnReadyMessage();
            break;
        case 9704:
            currentMessage = new GameFightTurnReadyRequestMessage();
            break;
        case 1375:
            currentMessage = new GameFightTurnResumeMessage();
            break;
        case 9429:
            currentMessage = new GameFightTurnStartMessage();
            break;
        case 9716:
            currentMessage = new GameFightTurnStartPlayingMessage();
            break;
        case 8783:
            currentMessage = new GameFightUpdateTeamMessage();
            break;
        case 3914:
            currentMessage = new RefreshCharacterStatsMessage();
            break;
        case 8594:
            currentMessage = new SlaveNoLongerControledMessage();
            break;
        case 9736:
            currentMessage = new SlaveSwitchContextMessage();
            break;
        case 7563:
            currentMessage = new GameDataPaddockObjectAddMessage();
            break;
        case 3488:
            currentMessage = new GameDataPaddockObjectListAddMessage();
            break;
        case 8782:
            currentMessage = new GameDataPaddockObjectRemoveMessage();
            break;
        case 9319:
            currentMessage = new MountDataErrorMessage();
            break;
        case 8157:
            currentMessage = new MountDataMessage();
            break;
        case 4039:
            currentMessage = new MountEmoteIconUsedOkMessage();
            break;
        case 6900:
            currentMessage = new MountEquipedErrorMessage();
            break;
        case 1812:
            currentMessage = new MountFeedRequestMessage();
            break;
        case 5586:
            currentMessage = new MountHarnessColorsUpdateRequestMessage();
            break;
        case 3065:
            currentMessage = new MountHarnessDissociateRequestMessage();
            break;
        case 2919:
            currentMessage = new MountInformationInPaddockRequestMessage();
            break;
        case 5729:
            currentMessage = new MountInformationRequestMessage();
            break;
        case 3002:
            currentMessage = new MountReleasedMessage();
            break;
        case 9401:
            currentMessage = new MountReleaseRequestMessage();
            break;
        case 7458:
            currentMessage = new MountRenamedMessage();
            break;
        case 9887:
            currentMessage = new MountRenameRequestMessage();
            break;
        case 9431:
            currentMessage = new MountRidingMessage();
            break;
        case 8199:
            currentMessage = new MountSetMessage();
            break;
        case 4309:
            currentMessage = new MountSetXpRatioRequestMessage();
            break;
        case 4700:
            currentMessage = new MountSterilizedMessage();
            break;
        case 5274:
            currentMessage = new MountSterilizeRequestMessage();
            break;
        case 9639:
            currentMessage = new MountToggleRidingRequestMessage();
            break;
        case 5575:
            currentMessage = new MountUnSetMessage();
            break;
        case 9818:
            currentMessage = new MountXpRatioMessage();
            break;
        case 6999:
            currentMessage = new PaddockBuyRequestMessage();
            break;
        case 9413:
            currentMessage = new PaddockBuyResultMessage();
            break;
        case 815:
            currentMessage = new PaddockMoveItemRequestMessage();
            break;
        case 6943:
            currentMessage = new PaddockRemoveItemRequestMessage();
            break;
        case 647:
            currentMessage = new PaddockSellRequestMessage();
            break;
        case 312:
            currentMessage = new NotificationByServerMessage();
            break;
        case 3042:
            currentMessage = new NotificationListMessage();
            break;
        case 2913:
            currentMessage = new NotificationResetMessage();
            break;
        case 6989:
            currentMessage = new NotificationUpdateFlagMessage();
            break;
        case 6775:
            currentMessage = new AnomalySubareaInformationRequestMessage();
            break;
        case 8393:
            currentMessage = new AnomalySubareaInformationResponseMessage();
            break;
        case 3575:
            currentMessage = new ChangeMapMessage();
            break;
        case 4034:
            currentMessage = new CurrentMapInstanceMessage();
            break;
        case 7422:
            currentMessage = new CurrentMapMessage();
            break;
        case 8048:
            currentMessage = new ErrorMapNotFoundMessage();
            break;
        case 9281:
            currentMessage = new GameRolePlayShowActorMessage();
            break;
        case 1817:
            currentMessage = new GameRolePlayShowActorWithEventMessage();
            break;
        case 4416:
            currentMessage = new GameRolePlayShowMultipleActorsMessage();
            break;
        case 3465:
            currentMessage = new MapComplementaryInformationsDataInHavenBagMessage();
            break;
        case 4292:
            currentMessage = new MapComplementaryInformationsDataInHouseMessage();
            break;
        case 9732:
            currentMessage = new MapComplementaryInformationsDataMessage();
            break;
        case 8121:
            currentMessage = new MapComplementaryInformationsWithCoordsMessage();
            break;
        case 7990:
            currentMessage = new MapFightCountMessage();
            break;
        case 6209:
            currentMessage = new MapFightStartPositionsUpdateMessage();
            break;
        case 2540:
            currentMessage = new MapInformationsRequestMessage();
            break;
        case 5663:
            currentMessage = new MapObstacleUpdateMessage();
            break;
        case 9715:
            currentMessage = new MapRewardRateMessage();
            break;
        case 8300:
            currentMessage = new MapRunningFightDetailsExtendedMessage();
            break;
        case 2688:
            currentMessage = new MapRunningFightDetailsMessage();
            break;
        case 4836:
            currentMessage = new MapRunningFightDetailsRequestMessage();
            break;
        case 3292:
            currentMessage = new MapRunningFightListMessage();
            break;
        case 7756:
            currentMessage = new MapRunningFightListRequestMessage();
            break;
        case 7620:
            currentMessage = new StopToListenRunningFightRequestMessage();
            break;
        case 7423:
            currentMessage = new TeleportOnSameMapMessage();
            break;
        case 4914:
            currentMessage = new AbstractTaxCollectorListMessage();
            break;
        case 8446:
            currentMessage = new GameRolePlayTaxCollectorFightRequestMessage();
            break;
        case 6522:
            currentMessage = new GuildFightJoinRequestMessage();
            break;
        case 3803:
            currentMessage = new GuildFightLeaveRequestMessage();
            break;
        case 1605:
            currentMessage = new GuildFightPlayersEnemiesListMessage();
            break;
        case 6792:
            currentMessage = new GuildFightPlayersEnemyRemoveMessage();
            break;
        case 4515:
            currentMessage = new GuildFightPlayersHelpersJoinMessage();
            break;
        case 2966:
            currentMessage = new GuildFightPlayersHelpersLeaveMessage();
            break;
        case 8763:
            currentMessage = new GuildFightTakePlaceRequestMessage();
            break;
        case 4380:
            currentMessage = new TaxCollectorAttackedMessage();
            break;
        case 8211:
            currentMessage = new TaxCollectorAttackedResultMessage();
            break;
        case 3339:
            currentMessage = new TaxCollectorErrorMessage();
            break;
        case 1980:
            currentMessage = new TaxCollectorListMessage();
            break;
        case 9684:
            currentMessage = new TaxCollectorMovementAddMessage();
            break;
        case 9446:
            currentMessage = new TaxCollectorMovementMessage();
            break;
        case 6992:
            currentMessage = new TaxCollectorMovementRemoveMessage();
            break;
        case 2499:
            currentMessage = new TaxCollectorMovementsOfflineMessage();
            break;
        case 5755:
            currentMessage = new TaxCollectorStateUpdateMessage();
            break;
        case 3788:
            currentMessage = new TopTaxCollectorListMessage();
            break;
        case 7598:
            currentMessage = new TeleportBuddiesAnswerMessage();
            break;
        case 650:
            currentMessage = new TeleportBuddiesMessage();
            break;
        case 9376:
            currentMessage = new TeleportBuddiesRequestedMessage();
            break;
        case 7626:
            currentMessage = new TeleportToBuddyAnswerMessage();
            break;
        case 6271:
            currentMessage = new TeleportToBuddyCloseMessage();
            break;
        case 5460:
            currentMessage = new TeleportToBuddyOfferMessage();
            break;
        case 4240:
            currentMessage = new InteractiveUseWithParamRequestMessage();
            break;
        case 9552:
            currentMessage = new KnownZaapListMessage();
            break;
        case 1851:
            currentMessage = new TeleportDestinationsMessage();
            break;
        case 1080:
            currentMessage = new TeleportRequestMessage();
            break;
        case 7339:
            currentMessage = new ZaapDestinationsMessage();
            break;
        case 4551:
            currentMessage = new ZaapRespawnSaveRequestMessage();
            break;
        case 3597:
            currentMessage = new ZaapRespawnUpdatedMessage();
            break;
        case 8523:
            currentMessage = new DecraftResultMessage();
            break;
        case 6221:
            currentMessage = new EvolutiveObjectRecycleResultMessage();
            break;
        case 6022:
            currentMessage = new ExchangeAcceptMessage();
            break;
        case 8882:
            currentMessage = new ExchangeBidHouseBuyMessage();
            break;
        case 3583:
            currentMessage = new ExchangeBidHouseBuyResultMessage();
            break;
        case 1178:
            currentMessage = new ExchangeBidHouseGenericItemAddedMessage();
            break;
        case 8250:
            currentMessage = new ExchangeBidHouseGenericItemRemovedMessage();
            break;
        case 9210:
            currentMessage = new ExchangeBidHouseInListAddedMessage();
            break;
        case 6283:
            currentMessage = new ExchangeBidHouseInListRemovedMessage();
            break;
        case 5016:
            currentMessage = new ExchangeBidHouseInListUpdatedMessage();
            break;
        case 4893:
            currentMessage = new ExchangeBidHouseItemAddOkMessage();
            break;
        case 8207:
            currentMessage = new ExchangeBidHouseItemRemoveOkMessage();
            break;
        case 7113:
            currentMessage = new ExchangeBidHouseListMessage();
            break;
        case 362:
            currentMessage = new ExchangeBidHousePriceMessage();
            break;
        case 6034:
            currentMessage = new ExchangeBidHouseSearchMessage();
            break;
        case 417:
            currentMessage = new ExchangeBidHouseTypeMessage();
            break;
        case 5367:
            currentMessage = new ExchangeBidHouseUnsoldItemsMessage();
            break;
        case 3208:
            currentMessage = new ExchangeBidPriceForSellerMessage();
            break;
        case 7344:
            currentMessage = new ExchangeBidPriceMessage();
            break;
        case 1977:
            currentMessage = new ExchangeBidSearchOkMessage();
            break;
        case 4224:
            currentMessage = new ExchangeBuyMessage();
            break;
        case 7543:
            currentMessage = new ExchangeBuyOkMessage();
            break;
        case 3547:
            currentMessage = new ExchangeCraftCountModifiedMessage();
            break;
        case 6588:
            currentMessage = new ExchangeCraftCountRequestMessage();
            break;
        case 8633:
            currentMessage = new ExchangeCrafterJobLevelupMessage();
            break;
        case 2393:
            currentMessage = new ExchangeCraftInformationObjectMessage();
            break;
        case 6839:
            currentMessage = new ExchangeCraftPaymentModificationRequestMessage();
            break;
        case 1491:
            currentMessage = new ExchangeCraftPaymentModifiedMessage();
            break;
        case 819:
            currentMessage = new ExchangeCraftResultMagicWithObjectDescMessage();
            break;
        case 1988:
            currentMessage = new ExchangeCraftResultMessage();
            break;
        case 8570:
            currentMessage = new ExchangeCraftResultWithObjectDescMessage();
            break;
        case 9309:
            currentMessage = new ExchangeCraftResultWithObjectIdMessage();
            break;
        case 3594:
            currentMessage = new ExchangeErrorMessage();
            break;
        case 2767:
            currentMessage = new ExchangeGuildTaxCollectorGetMessage();
            break;
        case 3008:
            currentMessage = new ExchangeHandleMountsMessage();
            break;
        case 2446:
            currentMessage = new ExchangeIsReadyMessage();
            break;
        case 2052:
            currentMessage = new ExchangeItemAutoCraftStopedMessage();
            break;
        case 279:
            currentMessage = new ExchangeLeaveMessage();
            break;
        case 1836:
            currentMessage = new ExchangeMoneyMovementInformationMessage();
            break;
        case 9283:
            currentMessage = new ExchangeMountFreeFromPaddockMessage();
            break;
        case 8112:
            currentMessage = new ExchangeMountsPaddockAddMessage();
            break;
        case 9109:
            currentMessage = new ExchangeMountsPaddockRemoveMessage();
            break;
        case 9398:
            currentMessage = new ExchangeMountsStableAddMessage();
            break;
        case 8651:
            currentMessage = new ExchangeMountsStableBornAddMessage();
            break;
        case 9478:
            currentMessage = new ExchangeMountsStableRemoveMessage();
            break;
        case 3820:
            currentMessage = new ExchangeMountStableErrorMessage();
            break;
        case 8081:
            currentMessage = new ExchangeMountsTakenFromPaddockMessage();
            break;
        case 7328:
            currentMessage = new ExchangeMountSterilizeFromPaddockMessage();
            break;
        case 88:
            currentMessage = new ExchangeObjectAddedMessage();
            break;
        case 5028:
            currentMessage = new ExchangeObjectMessage();
            break;
        case 9325:
            currentMessage = new ExchangeObjectModifyPricedMessage();
            break;
        case 4713:
            currentMessage = new ExchangeObjectMoveKamaMessage();
            break;
        case 3601:
            currentMessage = new ExchangeObjectMoveMessage();
            break;
        case 763:
            currentMessage = new ExchangeObjectMovePricedMessage();
            break;
        case 9302:
            currentMessage = new ExchangeObjectsAddedMessage();
            break;
        case 1376:
            currentMessage = new ExchangeObjectTransfertAllFromInvMessage();
            break;
        case 3115:
            currentMessage = new ExchangeObjectTransfertAllToInvMessage();
            break;
        case 4104:
            currentMessage = new ExchangeObjectTransfertExistingFromInvMessage();
            break;
        case 1081:
            currentMessage = new ExchangeObjectTransfertExistingToInvMessage();
            break;
        case 4400:
            currentMessage = new ExchangeObjectTransfertListFromInvMessage();
            break;
        case 622:
            currentMessage = new ExchangeObjectTransfertListToInvMessage();
            break;
        case 3741:
            currentMessage = new ExchangeObjectTransfertListWithQuantityToInvMessage();
            break;
        case 2394:
            currentMessage = new ExchangeObjectUseInWorkshopMessage();
            break;
        case 5913:
            currentMessage = new ExchangeOfflineSoldItemsMessage();
            break;
        case 6926:
            currentMessage = new ExchangeOkMultiCraftMessage();
            break;
        case 9270:
            currentMessage = new ExchangeOnHumanVendorRequestMessage();
            break;
        case 2055:
            currentMessage = new ExchangePlayerMultiCraftRequestMessage();
            break;
        case 9521:
            currentMessage = new ExchangePlayerRequestMessage();
            break;
        case 4086:
            currentMessage = new ExchangeReadyMessage();
            break;
        case 2959:
            currentMessage = new ExchangeReplayStopMessage();
            break;
        case 5635:
            currentMessage = new ExchangeReplyTaxVendorMessage();
            break;
        case 8816:
            currentMessage = new ExchangeRequestedMessage();
            break;
        case 5850:
            currentMessage = new ExchangeRequestedTradeMessage();
            break;
        case 5127:
            currentMessage = new ExchangeRequestMessage();
            break;
        case 6013:
            currentMessage = new ExchangeRequestOnMountStockMessage();
            break;
        case 4563:
            currentMessage = new ExchangeRequestOnShopStockMessage();
            break;
        case 7987:
            currentMessage = new ExchangeRequestOnTaxCollectorMessage();
            break;
        case 367:
            currentMessage = new ExchangeSellMessage();
            break;
        case 8485:
            currentMessage = new ExchangeSellOkMessage();
            break;
        case 49:
            currentMessage = new ExchangeSetCraftRecipeMessage();
            break;
        case 5373:
            currentMessage = new ExchangeShopStockMovementRemovedMessage();
            break;
        case 2472:
            currentMessage = new ExchangeShopStockMovementUpdatedMessage();
            break;
        case 5560:
            currentMessage = new ExchangeShopStockMultiMovementRemovedMessage();
            break;
        case 6920:
            currentMessage = new ExchangeShopStockMultiMovementUpdatedMessage();
            break;
        case 3010:
            currentMessage = new ExchangeShopStockStartedMessage();
            break;
        case 1269:
            currentMessage = new ExchangeShowVendorTaxMessage();
            break;
        case 1782:
            currentMessage = new ExchangeStartAsVendorMessage();
            break;
        case 6668:
            currentMessage = new ExchangeStartedBidBuyerMessage();
            break;
        case 6758:
            currentMessage = new ExchangeStartedBidSellerMessage();
            break;
        case 954:
            currentMessage = new ExchangeStartedMessage();
            break;
        case 6111:
            currentMessage = new ExchangeStartedMountStockMessage();
            break;
        case 8259:
            currentMessage = new ExchangeStartedTaxCollectorShopMessage();
            break;
        case 4599:
            currentMessage = new ExchangeStartedWithPodsMessage();
            break;
        case 8605:
            currentMessage = new ExchangeStartedWithStorageMessage();
            break;
        case 7776:
            currentMessage = new ExchangeStartOkCraftMessage();
            break;
        case 7187:
            currentMessage = new ExchangeStartOkCraftWithInformationMessage();
            break;
        case 1539:
            currentMessage = new ExchangeStartOkEvolutiveObjectRecycleTradeMessage();
            break;
        case 5999:
            currentMessage = new ExchangeStartOkHumanVendorMessage();
            break;
        case 342:
            currentMessage = new ExchangeStartOkJobIndexMessage();
            break;
        case 1272:
            currentMessage = new ExchangeStartOkMountMessage();
            break;
        case 8908:
            currentMessage = new ExchangeStartOkMountWithOutPaddockMessage();
            break;
        case 9643:
            currentMessage = new ExchangeStartOkMulticraftCrafterMessage();
            break;
        case 1363:
            currentMessage = new ExchangeStartOkMulticraftCustomerMessage();
            break;
        case 1046:
            currentMessage = new ExchangeStartOkNpcShopMessage();
            break;
        case 6982:
            currentMessage = new ExchangeStartOkNpcTradeMessage();
            break;
        case 9490:
            currentMessage = new ExchangeStartOkRecycleTradeMessage();
            break;
        case 7399:
            currentMessage = new ExchangeStartOkRunesTradeMessage();
            break;
        case 6266:
            currentMessage = new ExchangeStoppedMessage();
            break;
        case 9562:
            currentMessage = new ExchangeTypesExchangerDescriptionForUserMessage();
            break;
        case 8949:
            currentMessage = new ExchangeTypesItemsExchangerDescriptionForUserMessage();
            break;
        case 5686:
            currentMessage = new ExchangeWaitingResultMessage();
            break;
        case 6558:
            currentMessage = new ExchangeWeightMessage();
            break;
        case 9510:
            currentMessage = new FocusedExchangeReadyMessage();
            break;
        case 2884:
            currentMessage = new ItemNoMoreAvailableMessage();
            break;
        case 7697:
            currentMessage = new JobBookSubscribeRequestMessage();
            break;
        case 3014:
            currentMessage = new RecycleResultMessage();
            break;
        case 9975:
            currentMessage = new UpdateMountCharacteristicsMessage();
            break;
        case 3838:
            currentMessage = new ExchangeKamaModifiedMessage();
            break;
        case 5515:
            currentMessage = new ExchangeMultiCraftCrafterCanUseHisRessourcesMessage();
            break;
        case 2395:
            currentMessage = new ExchangeMultiCraftSetCrafterCanUseHisRessourcesMessage();
            break;
        case 6601:
            currentMessage = new ExchangeObjectModifiedInBagMessage();
            break;
        case 6307:
            currentMessage = new ExchangeObjectModifiedMessage();
            break;
        case 6105:
            currentMessage = new ExchangeObjectPutInBagMessage();
            break;
        case 1268:
            currentMessage = new ExchangeObjectRemovedFromBagMessage();
            break;
        case 1377:
            currentMessage = new ExchangeObjectRemovedMessage();
            break;
        case 363:
            currentMessage = new ExchangeObjectsModifiedMessage();
            break;
        case 5450:
            currentMessage = new ExchangeObjectsRemovedMessage();
            break;
        case 7733:
            currentMessage = new ExchangePodsModifiedMessage();
            break;
        case 1942:
            currentMessage = new GoldAddedMessage();
            break;
        case 4140:
            currentMessage = new InventoryContentMessage();
            break;
        case 1306:
            currentMessage = new InventoryWeightMessage();
            break;
        case 1423:
            currentMessage = new LivingObjectChangeSkinRequestMessage();
            break;
        case 6028:
            currentMessage = new LivingObjectDissociateMessage();
            break;
        case 9436:
            currentMessage = new LivingObjectMessageMessage();
            break;
        case 4103:
            currentMessage = new LivingObjectMessageRequestMessage();
            break;
        case 1889:
            currentMessage = new MimicryObjectAssociatedMessage();
            break;
        case 1801:
            currentMessage = new MimicryObjectEraseRequestMessage();
            break;
        case 2434:
            currentMessage = new MimicryObjectErrorMessage();
            break;
        case 8282:
            currentMessage = new MimicryObjectFeedAndAssociateRequestMessage();
            break;
        case 1082:
            currentMessage = new MimicryObjectPreviewMessage();
            break;
        case 4410:
            currentMessage = new ObjectAddedMessage();
            break;
        case 5667:
            currentMessage = new ObjectDeletedMessage();
            break;
        case 3368:
            currentMessage = new ObjectDeleteMessage();
            break;
        case 5169:
            currentMessage = new ObjectDropMessage();
            break;
        case 5736:
            currentMessage = new ObjectErrorMessage();
            break;
        case 355:
            currentMessage = new ObjectJobAddedMessage();
            break;
        case 8399:
            currentMessage = new ObjectModifiedMessage();
            break;
        case 3380:
            currentMessage = new ObjectMovementMessage();
            break;
        case 9459:
            currentMessage = new ObjectQuantityMessage();
            break;
        case 6913:
            currentMessage = new ObjectsAddedMessage();
            break;
        case 5628:
            currentMessage = new ObjectsDeletedMessage();
            break;
        case 1317:
            currentMessage = new ObjectSetPositionMessage();
            break;
        case 5111:
            currentMessage = new ObjectsQuantityMessage();
            break;
        case 8771:
            currentMessage = new ObjectUseMessage();
            break;
        case 3678:
            currentMessage = new ObjectUseMultipleMessage();
            break;
        case 6871:
            currentMessage = new ObjectUseOnCellMessage();
            break;
        case 1575:
            currentMessage = new ObjectUseOnCharacterMessage();
            break;
        case 6853:
            currentMessage = new ObtainedItemMessage();
            break;
        case 2422:
            currentMessage = new ObtainedItemWithBonusMessage();
            break;
        case 1745:
            currentMessage = new SetUpdateMessage();
            break;
        case 8203:
            currentMessage = new SymbioticObjectAssociatedMessage();
            break;
        case 5840:
            currentMessage = new SymbioticObjectAssociateRequestMessage();
            break;
        case 1383:
            currentMessage = new SymbioticObjectErrorMessage();
            break;
        case 7807:
            currentMessage = new WatchInventoryContentMessage();
            break;
        case 6635:
            currentMessage = new WrapperObjectAssociatedMessage();
            break;
        case 9939:
            currentMessage = new WrapperObjectDissociateRequestMessage();
            break;
        case 936:
            currentMessage = new WrapperObjectErrorMessage();
            break;
        case 6326:
            currentMessage = new SpellListMessage();
            break;
        case 1543:
            currentMessage = new StorageInventoryContentMessage();
            break;
        case 4456:
            currentMessage = new StorageKamasUpdateMessage();
            break;
        case 6168:
            currentMessage = new StorageObjectRemoveMessage();
            break;
        case 5584:
            currentMessage = new StorageObjectsRemoveMessage();
            break;
        case 5590:
            currentMessage = new StorageObjectsUpdateMessage();
            break;
        case 1134:
            currentMessage = new StorageObjectUpdateMessage();
            break;
        case 6056:
            currentMessage = new ForgettableSpellClientActionMessage();
            break;
        case 8765:
            currentMessage = new ForgettableSpellDeleteMessage();
            break;
        case 600:
            currentMessage = new ForgettableSpellEquipmentSlotsMessage();
            break;
        case 1059:
            currentMessage = new ForgettableSpellListUpdateMessage();
            break;
        case 8113:
            currentMessage = new ArenaFighterLeaveMessage();
            break;
        case 4165:
            currentMessage = new BreachGameFightEndMessage();
            break;
        case 3983:
            currentMessage = new ChallengeInfoMessage();
            break;
        case 1446:
            currentMessage = new ChallengeResultMessage();
            break;
        case 7959:
            currentMessage = new ChallengeTargetsListMessage();
            break;
        case 8171:
            currentMessage = new ChallengeTargetsListRequestMessage();
            break;
        case 3277:
            currentMessage = new ChallengeTargetUpdateMessage();
            break;
        case 4468:
            currentMessage = new GameFightRefreshFighterMessage();
            break;
        case 9957:
            currentMessage = new GameFightShowFighterMessage();
            break;
        case 2765:
            currentMessage = new GameFightShowFighterRandomStaticPoseMessage();
            break;
        case 4556:
            currentMessage = new AnomalyStateMessage();
            break;
        case 6320:
            currentMessage = new MapComplementaryInformationsAnomalyMessage();
            break;
        case 1679:
            currentMessage = new BreachBonusMessage();
            break;
        case 6408:
            currentMessage = new BreachBudgetMessage();
            break;
        case 5583:
            currentMessage = new BreachCharactersMessage();
            break;
        case 3176:
            currentMessage = new BreachEnterMessage();
            break;
        case 8694:
            currentMessage = new BreachExitRequestMessage();
            break;
        case 624:
            currentMessage = new BreachExitResponseMessage();
            break;
        case 3599:
            currentMessage = new BreachRoomLockedMessage();
            break;
        case 2349:
            currentMessage = new BreachRoomUnlockRequestMessage();
            break;
        case 7688:
            currentMessage = new BreachRoomUnlockResultMessage();
            break;
        case 8940:
            currentMessage = new BreachSavedMessage();
            break;
        case 4331:
            currentMessage = new BreachStateMessage();
            break;
        case 9008:
            currentMessage = new BreachTeleportRequestMessage();
            break;
        case 870:
            currentMessage = new BreachTeleportResponseMessage();
            break;
        case 5079:
            currentMessage = new MapComplementaryInformationsBreachMessage();
            break;
        case 3817:
            currentMessage = new GameRolePlayFreeSoulRequestMessage();
            break;
        case 2037:
            currentMessage = new GameRolePlayGameOverMessage();
            break;
        case 2514:
            currentMessage = new GameRolePlayPlayerLifeStatusMessage();
            break;
        case 3362:
            currentMessage = new WarnOnPermaDeathMessage();
            break;
        case 1897:
            currentMessage = new GameRolePlayDelayedActionFinishedMessage();
            break;
        case 4027:
            currentMessage = new GameRolePlayDelayedActionMessage();
            break;
        case 1711:
            currentMessage = new GameRolePlayDelayedObjectUseMessage();
            break;
        case 4915:
            currentMessage = new DocumentReadingBeginMessage();
            break;
        case 7616:
            currentMessage = new EmoteAddMessage();
            break;
        case 7532:
            currentMessage = new EmoteListMessage();
            break;
        case 7499:
            currentMessage = new EmotePlayAbstractMessage();
            break;
        case 7072:
            currentMessage = new EmotePlayErrorMessage();
            break;
        case 9926:
            currentMessage = new EmotePlayMassiveMessage();
            break;
        case 8116:
            currentMessage = new EmotePlayMessage();
            break;
        case 9094:
            currentMessage = new EmotePlayRequestMessage();
            break;
        case 2580:
            currentMessage = new EmoteRemoveMessage();
            break;
        case 6136:
            currentMessage = new GameRolePlayAggressionMessage();
            break;
        case 3866:
            currentMessage = new GameRolePlayAttackMonsterRequestMessage();
            break;
        case 7446:
            currentMessage = new GameRolePlayFightRequestCanceledMessage();
            break;
        case 6642:
            currentMessage = new GameRolePlayMonsterAngryAtPlayerMessage();
            break;
        case 1541:
            currentMessage = new GameRolePlayMonsterNotAngryAtPlayerMessage();
            break;
        case 1392:
            currentMessage = new GameRolePlayPlayerFightFriendlyAnsweredMessage();
            break;
        case 2509:
            currentMessage = new GameRolePlayPlayerFightFriendlyAnswerMessage();
            break;
        case 9866:
            currentMessage = new GameRolePlayPlayerFightFriendlyRequestedMessage();
            break;
        case 8916:
            currentMessage = new GameRolePlayPlayerFightRequestMessage();
            break;
        case 889:
            currentMessage = new GameRolePlayRemoveChallengeMessage();
            break;
        case 5095:
            currentMessage = new GameRolePlayShowChallengeMessage();
            break;
        case 9569:
            currentMessage = new ChangeHavenBagRoomRequestMessage();
            break;
        case 7258:
            currentMessage = new ChangeThemeRequestMessage();
            break;
        case 7957:
            currentMessage = new CloseHavenBagFurnitureSequenceRequestMessage();
            break;
        case 3700:
            currentMessage = new EditHavenBagCancelRequestMessage();
            break;
        case 1549:
            currentMessage = new EditHavenBagFinishedMessage();
            break;
        case 529:
            currentMessage = new EditHavenBagRequestMessage();
            break;
        case 6074:
            currentMessage = new EditHavenBagStartMessage();
            break;
        case 2716:
            currentMessage = new EnterHavenBagRequestMessage();
            break;
        case 8249:
            currentMessage = new ExitHavenBagRequestMessage();
            break;
        case 9224:
            currentMessage = new HavenBagDailyLoteryMessage();
            break;
        case 709:
            currentMessage = new HavenBagFurnituresMessage();
            break;
        case 1534:
            currentMessage = new HavenBagFurnituresRequestMessage();
            break;
        case 6073:
            currentMessage = new HavenBagPackListMessage();
            break;
        case 4575:
            currentMessage = new HavenBagRoomUpdateMessage();
            break;
        case 711:
            currentMessage = new KickHavenBagRequestMessage();
            break;
        case 1365:
            currentMessage = new OpenHavenBagFurnitureSequenceRequestMessage();
            break;
        case 1800:
            currentMessage = new AccountHouseMessage();
            break;
        case 1326:
            currentMessage = new HouseBuyRequestMessage();
            break;
        case 6050:
            currentMessage = new HouseBuyResultMessage();
            break;
        case 6829:
            currentMessage = new HouseKickIndoorMerchantRequestMessage();
            break;
        case 5393:
            currentMessage = new HouseKickRequestMessage();
            break;
        case 9943:
            currentMessage = new HouseLockFromInsideRequestMessage();
            break;
        case 5861:
            currentMessage = new HousePropertiesMessage();
            break;
        case 8376:
            currentMessage = new HouseSellFromInsideRequestMessage();
            break;
        case 5119:
            currentMessage = new HouseSellingUpdateMessage();
            break;
        case 9737:
            currentMessage = new HouseSellRequestMessage();
            break;
        case 9720:
            currentMessage = new HouseToSellFilterMessage();
            break;
        case 6887:
            currentMessage = new HouseToSellListMessage();
            break;
        case 259:
            currentMessage = new HouseToSellListRequestMessage();
            break;
        case 3569:
            currentMessage = new JobAllowMultiCraftRequestMessage();
            break;
        case 9091:
            currentMessage = new JobBookSubscriptionMessage();
            break;
        case 2605:
            currentMessage = new JobCrafterDirectoryAddMessage();
            break;
        case 832:
            currentMessage = new JobCrafterDirectoryDefineSettingsMessage();
            break;
        case 3973:
            currentMessage = new JobCrafterDirectoryEntryMessage();
            break;
        case 2083:
            currentMessage = new JobCrafterDirectoryEntryRequestMessage();
            break;
        case 2113:
            currentMessage = new JobCrafterDirectoryListMessage();
            break;
        case 2533:
            currentMessage = new JobCrafterDirectoryListRequestMessage();
            break;
        case 2166:
            currentMessage = new JobCrafterDirectoryRemoveMessage();
            break;
        case 4100:
            currentMessage = new JobCrafterDirectorySettingsMessage();
            break;
        case 414:
            currentMessage = new JobDescriptionMessage();
            break;
        case 3242:
            currentMessage = new JobExperienceMultiUpdateMessage();
            break;
        case 7414:
            currentMessage = new JobExperienceOtherPlayerUpdateMessage();
            break;
        case 2969:
            currentMessage = new JobExperienceUpdateMessage();
            break;
        case 2124:
            currentMessage = new JobLevelUpMessage();
            break;
        case 834:
            currentMessage = new JobMultiCraftAvailableSkillsMessage();
            break;
        case 7253:
            currentMessage = new LockableChangeCodeMessage();
            break;
        case 302:
            currentMessage = new LockableCodeResultMessage();
            break;
        case 1740:
            currentMessage = new LockableShowCodeDialogMessage();
            break;
        case 4237:
            currentMessage = new LockableStateUpdateAbstractMessage();
            break;
        case 3227:
            currentMessage = new LockableStateUpdateHouseDoorMessage();
            break;
        case 2174:
            currentMessage = new LockableStateUpdateStorageMessage();
            break;
        case 632:
            currentMessage = new LockableUseCodeMessage();
            break;
        case 7491:
            currentMessage = new AlliancePrismDialogQuestionMessage();
            break;
        case 164:
            currentMessage = new AllianceTaxCollectorDialogQuestionExtendedMessage();
            break;
        case 5442:
            currentMessage = new EntityTalkMessage();
            break;
        case 1168:
            currentMessage = new MapNpcsQuestStatusUpdateMessage();
            break;
        case 6950:
            currentMessage = new NpcDialogCreationMessage();
            break;
        case 5895:
            currentMessage = new NpcDialogQuestionMessage();
            break;
        case 2309:
            currentMessage = new NpcDialogReplyMessage();
            break;
        case 5321:
            currentMessage = new NpcGenericActionFailureMessage();
            break;
        case 3595:
            currentMessage = new NpcGenericActionRequestMessage();
            break;
        case 4988:
            currentMessage = new PortalDialogCreationMessage();
            break;
        case 778:
            currentMessage = new TaxCollectorDialogQuestionBasicMessage();
            break;
        case 5380:
            currentMessage = new TaxCollectorDialogQuestionExtendedMessage();
            break;
        case 8648:
            currentMessage = new ObjectGroundAddedMessage();
            break;
        case 1696:
            currentMessage = new ObjectGroundListAddedMessage();
            break;
        case 1247:
            currentMessage = new ObjectGroundRemovedMessage();
            break;
        case 3658:
            currentMessage = new ObjectGroundRemovedMultipleMessage();
            break;
        case 2642:
            currentMessage = new GameDataPlayFarmObjectAnimationMessage();
            break;
        case 7932:
            currentMessage = new PaddockPropertiesMessage();
            break;
        case 3281:
            currentMessage = new PaddockSellBuyDialogMessage();
            break;
        case 1083:
            currentMessage = new PaddockToSellFilterMessage();
            break;
        case 1737:
            currentMessage = new PaddockToSellListMessage();
            break;
        case 3095:
            currentMessage = new PaddockToSellListRequestMessage();
            break;
        case 5971:
            currentMessage = new AbstractPartyEventMessage();
            break;
        case 3450:
            currentMessage = new AbstractPartyMemberInFightMessage();
            break;
        case 555:
            currentMessage = new AbstractPartyMessage();
            break;
        case 1350:
            currentMessage = new DungeonPartyFinderAvailableDungeonsMessage();
            break;
        case 1852:
            currentMessage = new DungeonPartyFinderAvailableDungeonsRequestMessage();
            break;
        case 4426:
            currentMessage = new DungeonPartyFinderListenErrorMessage();
            break;
        case 6729:
            currentMessage = new DungeonPartyFinderListenRequestMessage();
            break;
        case 9105:
            currentMessage = new DungeonPartyFinderRegisterErrorMessage();
            break;
        case 919:
            currentMessage = new DungeonPartyFinderRegisterRequestMessage();
            break;
        case 9170:
            currentMessage = new DungeonPartyFinderRegisterSuccessMessage();
            break;
        case 8587:
            currentMessage = new DungeonPartyFinderRoomContentMessage();
            break;
        case 6270:
            currentMessage = new DungeonPartyFinderRoomContentUpdateMessage();
            break;
        case 793:
            currentMessage = new PartyAbdicateThroneMessage();
            break;
        case 8622:
            currentMessage = new PartyAcceptInvitationMessage();
            break;
        case 7409:
            currentMessage = new PartyCancelInvitationMessage();
            break;
        case 1253:
            currentMessage = new PartyCancelInvitationNotificationMessage();
            break;
        case 4290:
            currentMessage = new PartyCannotJoinErrorMessage();
            break;
        case 2538:
            currentMessage = new PartyDeletedMessage();
            break;
        case 1939:
            currentMessage = new PartyFollowMemberRequestMessage();
            break;
        case 5763:
            currentMessage = new PartyFollowStatusUpdateMessage();
            break;
        case 4567:
            currentMessage = new PartyFollowThisMemberRequestMessage();
            break;
        case 8126:
            currentMessage = new PartyInvitationArenaRequestMessage();
            break;
        case 7061:
            currentMessage = new PartyInvitationCancelledForGuestMessage();
            break;
        case 7323:
            currentMessage = new PartyInvitationDetailsMessage();
            break;
        case 182:
            currentMessage = new PartyInvitationDetailsRequestMessage();
            break;
        case 6340:
            currentMessage = new PartyInvitationDungeonDetailsMessage();
            break;
        case 7694:
            currentMessage = new PartyInvitationDungeonMessage();
            break;
        case 3567:
            currentMessage = new PartyInvitationDungeonRequestMessage();
            break;
        case 4087:
            currentMessage = new PartyInvitationMessage();
            break;
        case 1758:
            currentMessage = new PartyInvitationRequestMessage();
            break;
        case 4142:
            currentMessage = new PartyJoinMessage();
            break;
        case 2914:
            currentMessage = new PartyKickedByMessage();
            break;
        case 4770:
            currentMessage = new PartyKickRequestMessage();
            break;
        case 2432:
            currentMessage = new PartyLeaderUpdateMessage();
            break;
        case 2397:
            currentMessage = new PartyLeaveMessage();
            break;
        case 6383:
            currentMessage = new PartyLeaveRequestMessage();
            break;
        case 2685:
            currentMessage = new PartyLocateMembersMessage();
            break;
        case 3120:
            currentMessage = new PartyLocateMembersRequestMessage();
            break;
        case 4294:
            currentMessage = new PartyLoyaltyStatusMessage();
            break;
        case 7534:
            currentMessage = new PartyMemberEjectedMessage();
            break;
        case 8731:
            currentMessage = new PartyMemberInStandardFightMessage();
            break;
        case 2903:
            currentMessage = new PartyMemberRemoveMessage();
            break;
        case 7012:
            currentMessage = new PartyModifiableStatusMessage();
            break;
        case 89:
            currentMessage = new PartyNameSetErrorMessage();
            break;
        case 1262:
            currentMessage = new PartyNameSetRequestMessage();
            break;
        case 6017:
            currentMessage = new PartyNameUpdateMessage();
            break;
        case 2749:
            currentMessage = new PartyNewGuestMessage();
            break;
        case 2531:
            currentMessage = new PartyNewMemberMessage();
            break;
        case 3196:
            currentMessage = new PartyPledgeLoyaltyRequestMessage();
            break;
        case 1909:
            currentMessage = new PartyRefuseInvitationMessage();
            break;
        case 9862:
            currentMessage = new PartyRefuseInvitationNotificationMessage();
            break;
        case 2491:
            currentMessage = new PartyRestrictedMessage();
            break;
        case 9497:
            currentMessage = new PartyStopFollowRequestMessage();
            break;
        case 8915:
            currentMessage = new PartyUpdateLightMessage();
            break;
        case 4697:
            currentMessage = new PartyUpdateMessage();
            break;
        case 6734:
            currentMessage = new PurchasableDialogMessage();
            break;
        case 9768:
            currentMessage = new FollowedQuestsMessage();
            break;
        case 7841:
            currentMessage = new FollowQuestObjectiveRequestMessage();
            break;
        case 2026:
            currentMessage = new GuidedModeQuitRequestMessage();
            break;
        case 8693:
            currentMessage = new GuidedModeReturnRequestMessage();
            break;
        case 9811:
            currentMessage = new QuestListMessage();
            break;
        case 5961:
            currentMessage = new QuestListRequestMessage();
            break;
        case 4838:
            currentMessage = new QuestObjectiveValidatedMessage();
            break;
        case 8867:
            currentMessage = new QuestObjectiveValidationMessage();
            break;
        case 5033:
            currentMessage = new QuestStartedMessage();
            break;
        case 823:
            currentMessage = new QuestStartRequestMessage();
            break;
        case 8781:
            currentMessage = new QuestStepInfoMessage();
            break;
        case 3636:
            currentMessage = new QuestStepInfoRequestMessage();
            break;
        case 2982:
            currentMessage = new QuestStepStartedMessage();
            break;
        case 4239:
            currentMessage = new QuestStepValidatedMessage();
            break;
        case 5469:
            currentMessage = new QuestValidatedMessage();
            break;
        case 8535:
            currentMessage = new RefreshFollowedQuestsOrderRequestMessage();
            break;
        case 5582:
            currentMessage = new UnfollowQuestObjectiveRequestMessage();
            break;
        case 8938:
            currentMessage = new SpellVariantActivationMessage();
            break;
        case 9900:
            currentMessage = new SpellVariantActivationRequestMessage();
            break;
        case 2014:
            currentMessage = new StatsUpgradeRequestMessage();
            break;
        case 4819:
            currentMessage = new StatsUpgradeResultMessage();
            break;
        case 9046:
            currentMessage = new PortalUseRequestMessage();
            break;
        case 4986:
            currentMessage = new TreasureHuntAvailableRetryCountUpdateMessage();
            break;
        case 5389:
            currentMessage = new TreasureHuntDigRequestAnswerFailedMessage();
            break;
        case 7127:
            currentMessage = new TreasureHuntDigRequestAnswerMessage();
            break;
        case 6086:
            currentMessage = new TreasureHuntDigRequestMessage();
            break;
        case 4291:
            currentMessage = new TreasureHuntFinishedMessage();
            break;
        case 7652:
            currentMessage = new TreasureHuntFlagRemoveRequestMessage();
            break;
        case 8358:
            currentMessage = new TreasureHuntFlagRequestAnswerMessage();
            break;
        case 8451:
            currentMessage = new TreasureHuntFlagRequestMessage();
            break;
        case 1127:
            currentMessage = new TreasureHuntGiveUpRequestMessage();
            break;
        case 5580:
            currentMessage = new TreasureHuntLegendaryRequestMessage();
            break;
        case 4631:
            currentMessage = new TreasureHuntMessage();
            break;
        case 6525:
            currentMessage = new TreasureHuntRequestAnswerMessage();
            break;
        case 207:
            currentMessage = new TreasureHuntShowLegendaryUIMessage();
            break;
        case 666:
            currentMessage = new GameRolePlaySpellAnimMessage();
            break;
        case 3338:
            currentMessage = new AlignmentWarEffortDonatePreviewMessage();
            break;
        case 5455:
            currentMessage = new AlignmentWarEffortDonateRequestMessage();
            break;
        case 6877:
            currentMessage = new AlignmentWarEffortDonationResultMessage();
            break;
        case 2972:
            currentMessage = new CharacterAlignmentWarEffortProgressionMessage();
            break;
        case 5981:
            currentMessage = new CharacterAlignmentWarEffortProgressionRequestMessage();
            break;
        case 1352:
            currentMessage = new BreachBranchesMessage();
            break;
        case 6890:
            currentMessage = new BreachInvitationAnswerMessage();
            break;
        case 608:
            currentMessage = new BreachInvitationCloseMessage();
            break;
        case 5041:
            currentMessage = new BreachInvitationOfferMessage();
            break;
        case 19:
            currentMessage = new BreachInvitationRequestMessage();
            break;
        case 7771:
            currentMessage = new BreachInvitationResponseMessage();
            break;
        case 8280:
            currentMessage = new BreachKickRequestMessage();
            break;
        case 4542:
            currentMessage = new BreachKickResponseMessage();
            break;
        case 288:
            currentMessage = new BreachRewardBoughtMessage();
            break;
        case 680:
            currentMessage = new BreachRewardBuyMessage();
            break;
        case 7436:
            currentMessage = new BreachRewardsMessage();
            break;
        case 2334:
            currentMessage = new GameRolePlayArenaFightAnswerMessage();
            break;
        case 7701:
            currentMessage = new GameRolePlayArenaFighterStatusMessage();
            break;
        case 5355:
            currentMessage = new GameRolePlayArenaFightPropositionMessage();
            break;
        case 3459:
            currentMessage = new GameRolePlayArenaInvitationCandidatesAnswer();
            break;
        case 9791:
            currentMessage = new GameRolePlayArenaLeagueRewardsMessage();
            break;
        case 9972:
            currentMessage = new GameRolePlayArenaRegisterMessage();
            break;
        case 2867:
            currentMessage = new GameRolePlayArenaRegistrationStatusMessage();
            break;
        case 9880:
            currentMessage = new GameRolePlayArenaSwitchToFightServerMessage();
            break;
        case 6269:
            currentMessage = new GameRolePlayArenaSwitchToGameServerMessage();
            break;
        case 7305:
            currentMessage = new GameRolePlayArenaUnregisterMessage();
            break;
        case 5122:
            currentMessage = new GameRolePlayArenaUpdatePlayerInfosAllQueuesMessage();
            break;
        case 9640:
            currentMessage = new GameRolePlayArenaUpdatePlayerInfosMessage();
            break;
        case 1176:
            currentMessage = new HavenBagPermissionsUpdateMessage();
            break;
        case 4834:
            currentMessage = new HavenBagPermissionsUpdateRequestMessage();
            break;
        case 3445:
            currentMessage = new InviteInHavenBagClosedMessage();
            break;
        case 9753:
            currentMessage = new InviteInHavenBagMessage();
            break;
        case 1021:
            currentMessage = new InviteInHavenBagOfferMessage();
            break;
        case 7757:
            currentMessage = new TeleportHavenBagAnswerMessage();
            break;
        case 8318:
            currentMessage = new TeleportHavenBagRequestMessage();
            break;
        case 8272:
            currentMessage = new HouseGuildNoneMessage();
            break;
        case 8382:
            currentMessage = new HouseGuildRightsMessage();
            break;
        case 2589:
            currentMessage = new HouseGuildRightsViewMessage();
            break;
        case 429:
            currentMessage = new HouseGuildShareRequestMessage();
            break;
        case 3143:
            currentMessage = new PartyMemberInBreachFightMessage();
            break;
        case 8730:
            currentMessage = new PartyEntityUpdateLightMessage();
            break;
        case 5772:
            currentMessage = new AlignmentWarEffortProgressionMessage();
            break;
        case 9526:
            currentMessage = new AlignmentWarEffortProgressionRequestMessage();
            break;
    }
    if (currentMessage == nullptr) {
        throw BotCoreException(2);
    }
    CustomDataInput input(&this->content[0]);
    currentMessage->deserialize(&input);
    this->message = currentMessage;
}

char *Packet::getRealInstanceId() {
    return this->realInstanceId;
}

unsigned int Packet::getInstanceId() {
    return this->instanceId;
}