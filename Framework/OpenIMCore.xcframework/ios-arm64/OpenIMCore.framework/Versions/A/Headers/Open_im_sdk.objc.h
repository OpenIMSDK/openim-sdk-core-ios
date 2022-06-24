// Objective-C API for talking to open_im_sdk/open_im_sdk Go package.
//   gobind -lang=objc open_im_sdk/open_im_sdk
//
// File is generated by gobind. Do not edit.

#ifndef __Open_im_sdk_H__
#define __Open_im_sdk_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"

#include "Open_im_sdk_callback.objc.h"

@interface Open_im_sdk : NSObject
// skipped variable UserRouterMap with unsupported type: map[string]*open_im_sdk/internal/login.LoginMgr

// skipped variable UserSDKRwLock with unsupported type: sync.RWMutex

@end

FOUNDATION_EXPORT void Open_im_sdkAcceptFriendApplication(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDHandleMsg);

FOUNDATION_EXPORT void Open_im_sdkAcceptGroupApplication(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable fromUserID, NSString* _Nullable handleMsg);

FOUNDATION_EXPORT void Open_im_sdkAddBlack(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable blackUserID);

FOUNDATION_EXPORT void Open_im_sdkAddFriend(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDReqMsg);

FOUNDATION_EXPORT void Open_im_sdkChangeGroupMemberMute(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable userID, long mutedSeconds);

FOUNDATION_EXPORT void Open_im_sdkChangeGroupMute(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, BOOL isMute);

FOUNDATION_EXPORT void Open_im_sdkCheckFriend(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDList);

// skipped function CheckResourceLoad with unsupported parameter or return types


FOUNDATION_EXPORT BOOL Open_im_sdkCheckToken(NSString* _Nullable userID, NSString* _Nullable token, NSError* _Nullable* _Nullable error);

FOUNDATION_EXPORT void Open_im_sdkClearC2CHistoryMessage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userID);

FOUNDATION_EXPORT void Open_im_sdkClearC2CHistoryMessageFromLocalAndSvr(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userID);

FOUNDATION_EXPORT void Open_im_sdkClearGroupHistoryMessage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkClearGroupHistoryMessageFromLocalAndSvr(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkClearWorkMomentsNotification(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateCardMessage(NSString* _Nullable operationID, NSString* _Nullable cardInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateCustomMessage(NSString* _Nullable operationID, NSString* _Nullable data, NSString* _Nullable extension, NSString* _Nullable description);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateFaceMessage(NSString* _Nullable operationID, long index, NSString* _Nullable data);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateFileMessage(NSString* _Nullable operationID, NSString* _Nullable filePath, NSString* _Nullable fileName);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateFileMessageByURL(NSString* _Nullable operationID, NSString* _Nullable fileBaseInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateFileMessageFromFullPath(NSString* _Nullable operationID, NSString* _Nullable fileFullPath, NSString* _Nullable fileName);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateForwardMessage(NSString* _Nullable operationID, NSString* _Nullable m);

FOUNDATION_EXPORT void Open_im_sdkCreateGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupBaseInfo, NSString* _Nullable memberList);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateImageMessage(NSString* _Nullable operationID, NSString* _Nullable imagePath);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateImageMessageByURL(NSString* _Nullable operationID, NSString* _Nullable sourcePicture, NSString* _Nullable bigPicture, NSString* _Nullable snapshotPicture);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateImageMessageFromFullPath(NSString* _Nullable operationID, NSString* _Nullable imageFullPath);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateLocationMessage(NSString* _Nullable operationID, NSString* _Nullable description, double longitude, double latitude);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateMergerMessage(NSString* _Nullable operationID, NSString* _Nullable messageList, NSString* _Nullable title, NSString* _Nullable summaryList);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateQuoteMessage(NSString* _Nullable operationID, NSString* _Nullable text, NSString* _Nullable message);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateSoundMessage(NSString* _Nullable operationID, NSString* _Nullable soundPath, int64_t duration);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateSoundMessageByURL(NSString* _Nullable operationID, NSString* _Nullable soundBaseInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateSoundMessageFromFullPath(NSString* _Nullable operationID, NSString* _Nullable soundPath, int64_t duration);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateTextAtMessage(NSString* _Nullable operationID, NSString* _Nullable text, NSString* _Nullable atUserList, NSString* _Nullable atUsersInfo, NSString* _Nullable message);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateTextMessage(NSString* _Nullable operationID, NSString* _Nullable text);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateVideoMessage(NSString* _Nullable operationID, NSString* _Nullable videoPath, NSString* _Nullable videoType, int64_t duration, NSString* _Nullable snapshotPath);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateVideoMessageByURL(NSString* _Nullable operationID, NSString* _Nullable videoBaseInfo);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkCreateVideoMessageFromFullPath(NSString* _Nullable operationID, NSString* _Nullable videoFullPath, NSString* _Nullable videoType, int64_t duration, NSString* _Nullable snapshotFullPath);

FOUNDATION_EXPORT void Open_im_sdkDeleteAllConversationFromLocal(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkDeleteAllMsgFromLocal(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkDeleteAllMsgFromLocalAndSvr(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkDeleteConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID);

FOUNDATION_EXPORT void Open_im_sdkDeleteConversationFromLocalAndSvr(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID);

FOUNDATION_EXPORT void Open_im_sdkDeleteFriend(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable friendUserID);

FOUNDATION_EXPORT void Open_im_sdkDeleteMessageFromLocalAndSvr(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message);

FOUNDATION_EXPORT void Open_im_sdkDeleteMessageFromLocalStorage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message);

FOUNDATION_EXPORT void Open_im_sdkDismissGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkGetAllConversationList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkGetAtAllTag(void);

FOUNDATION_EXPORT void Open_im_sdkGetBlackList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkGetConversationIDBySessionType(NSString* _Nullable sourceID, long sessionType);

FOUNDATION_EXPORT void Open_im_sdkGetConversationListSplit(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, long offset, long count);

/**
 * deprecated
 */
FOUNDATION_EXPORT void Open_im_sdkGetConversationRecvMessageOpt(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationIDList);

FOUNDATION_EXPORT void Open_im_sdkGetDepartmentInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable departmentID);

FOUNDATION_EXPORT void Open_im_sdkGetDepartmentMember(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable departmentID, long offset, long count);

FOUNDATION_EXPORT void Open_im_sdkGetDepartmentMemberAndSubDepartment(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable departmentID);

FOUNDATION_EXPORT void Open_im_sdkGetDesignatedFriendsInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkGetFriendList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetGroupMemberList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, int32_t filter, int32_t offset, int32_t count);

FOUNDATION_EXPORT void Open_im_sdkGetGroupMemberListByJoinTimeFilter(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, int32_t offset, int32_t count, int64_t joinTimeBegin, int64_t joinTimeEnd, NSString* _Nullable filterUserID);

FOUNDATION_EXPORT void Open_im_sdkGetGroupMembersInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkGetGroupsInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupIDList);

FOUNDATION_EXPORT void Open_im_sdkGetHistoryMessageList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable getMessageOptions);

FOUNDATION_EXPORT void Open_im_sdkGetHistoryMessageListReverse(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable getMessageOptions);

FOUNDATION_EXPORT void Open_im_sdkGetJoinedGroupList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT int32_t Open_im_sdkGetLoginStatus(void);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkGetLoginUser(void);

FOUNDATION_EXPORT void Open_im_sdkGetMultipleConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationIDList);

FOUNDATION_EXPORT void Open_im_sdkGetOneConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, long sessionType, NSString* _Nullable sourceID);

FOUNDATION_EXPORT void Open_im_sdkGetParentDepartmentList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable departmentID);

FOUNDATION_EXPORT void Open_im_sdkGetRecvFriendApplicationList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetRecvGroupApplicationList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetSelfUserInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetSendFriendApplicationList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetSendGroupApplicationList(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetSubDepartment(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable departmentID, long offset, long count);

FOUNDATION_EXPORT void Open_im_sdkGetTotalUnreadMsgCount(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkGetUserInDepartment(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userID);

// skipped function GetUserWorker with unsupported parameter or return types


/**
 * /////////////////////user/////////////////////
 */
FOUNDATION_EXPORT void Open_im_sdkGetUsersInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkGetWorkMomentsNotification(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, long offset, long count);

/**
 * workMomentsInterface
 */
FOUNDATION_EXPORT void Open_im_sdkGetWorkMomentsUnReadCount(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

// skipped function InitOnce with unsupported parameter or return types


FOUNDATION_EXPORT BOOL Open_im_sdkInitSDK(id<Open_im_sdk_callbackOnConnListener> _Nullable listener, NSString* _Nullable operationID, NSString* _Nullable config);

FOUNDATION_EXPORT void Open_im_sdkInsertGroupMessageToLocalStorage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message, NSString* _Nullable groupID, NSString* _Nullable sendID);

FOUNDATION_EXPORT void Open_im_sdkInsertSingleMessageToLocalStorage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message, NSString* _Nullable recvID, NSString* _Nullable sendID);

FOUNDATION_EXPORT void Open_im_sdkInviteUserToGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable reason, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkJoinGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable reqMsg);

FOUNDATION_EXPORT void Open_im_sdkKickGroupMember(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable reason, NSString* _Nullable userIDList);

FOUNDATION_EXPORT void Open_im_sdkLogin(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userID, NSString* _Nullable token);

FOUNDATION_EXPORT void Open_im_sdkLogout(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

FOUNDATION_EXPORT void Open_im_sdkMarkC2CMessageAsRead(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userID, NSString* _Nullable msgIDList);

FOUNDATION_EXPORT void Open_im_sdkMarkGroupMessageAsRead(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable msgIDList);

/**
 * deprecated
 */
FOUNDATION_EXPORT void Open_im_sdkMarkGroupMessageHasRead(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkMarkMessageAsReadByConID(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable msgIDList);

FOUNDATION_EXPORT void Open_im_sdkPinConversation(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, BOOL isPinned);

FOUNDATION_EXPORT void Open_im_sdkQuitGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID);

FOUNDATION_EXPORT void Open_im_sdkRefuseFriendApplication(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDHandleMsg);

FOUNDATION_EXPORT void Open_im_sdkRefuseGroupApplication(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable fromUserID, NSString* _Nullable handleMsg);

FOUNDATION_EXPORT void Open_im_sdkRemoveBlack(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable removeUserID);

FOUNDATION_EXPORT void Open_im_sdkResetConversationGroupAtType(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID);

FOUNDATION_EXPORT void Open_im_sdkRevokeMessage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkSdkVersion(void);

FOUNDATION_EXPORT void Open_im_sdkSearchFriends(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable searchParam);

FOUNDATION_EXPORT void Open_im_sdkSearchGroups(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable searchParam);

FOUNDATION_EXPORT void Open_im_sdkSearchLocalMessages(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable searchParam);

FOUNDATION_EXPORT void Open_im_sdkSearchOrganization(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable input, long offset, long count);

FOUNDATION_EXPORT void Open_im_sdkSendMessage(id<Open_im_sdk_callbackSendMsgCallBack> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message, NSString* _Nullable recvID, NSString* _Nullable groupID, NSString* _Nullable offlinePushInfo);

FOUNDATION_EXPORT void Open_im_sdkSendMessageNotOss(id<Open_im_sdk_callbackSendMsgCallBack> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable message, NSString* _Nullable recvID, NSString* _Nullable groupID, NSString* _Nullable offlinePushInfo);

FOUNDATION_EXPORT void Open_im_sdkSetAdvancedMsgListener(id<Open_im_sdk_callbackOnAdvancedMsgListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetBatchMsgListener(id<Open_im_sdk_callbackOnBatchMsgListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetConversationDraft(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, NSString* _Nullable draftText);

FOUNDATION_EXPORT void Open_im_sdkSetConversationListener(id<Open_im_sdk_callbackOnConversationListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetConversationRecvMessageOpt(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationIDList, long opt);

FOUNDATION_EXPORT void Open_im_sdkSetFriendListener(id<Open_im_sdk_callbackOnFriendshipListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetFriendRemark(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userIDRemark);

FOUNDATION_EXPORT void Open_im_sdkSetGlobalRecvMessageOpt(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, long opt);

FOUNDATION_EXPORT void Open_im_sdkSetGroupInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable groupInfo);

/**
 * ////////////////////////group//////////////////////////////////////////
 */
FOUNDATION_EXPORT void Open_im_sdkSetGroupListener(id<Open_im_sdk_callbackOnGroupListener> _Nullable callback);

FOUNDATION_EXPORT void Open_im_sdkSetGroupMemberNickname(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable userID, NSString* _Nullable groupMemberNickname);

FOUNDATION_EXPORT void Open_im_sdkSetGroupMemberRoleLevel(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable userID, long roleLevel);

FOUNDATION_EXPORT void Open_im_sdkSetHeartbeatInterval(long heartbeatInterval);

FOUNDATION_EXPORT void Open_im_sdkSetOneConversationPrivateChat(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, BOOL isPrivate);

FOUNDATION_EXPORT void Open_im_sdkSetOneConversationRecvMessageOpt(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable conversationID, long opt);

FOUNDATION_EXPORT void Open_im_sdkSetOrganizationListener(id<Open_im_sdk_callbackOnOrganizationListener> _Nullable callback);

FOUNDATION_EXPORT void Open_im_sdkSetSelfInfo(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable userInfo);

/**
 * ////////////////////////signaling//////////////////////////////////////////
 */
FOUNDATION_EXPORT void Open_im_sdkSetSignalingListener(id<Open_im_sdk_callbackOnSignalingListener> _Nullable callback);

FOUNDATION_EXPORT void Open_im_sdkSetUserListener(id<Open_im_sdk_callbackOnUserListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSetWorkMomentsListener(id<Open_im_sdk_callbackOnWorkMomentsListener> _Nullable listener);

FOUNDATION_EXPORT void Open_im_sdkSignalingAccept(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable signalAcceptReq);

FOUNDATION_EXPORT void Open_im_sdkSignalingCancel(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable signalCancelReq);

FOUNDATION_EXPORT void Open_im_sdkSignalingHungUp(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable signalHungUpReq);

FOUNDATION_EXPORT void Open_im_sdkSignalingInvite(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable signalInviteReq);

FOUNDATION_EXPORT void Open_im_sdkSignalingInviteInGroup(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable signalInviteInGroupReq);

FOUNDATION_EXPORT void Open_im_sdkSignalingReject(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable signalRejectReq);

FOUNDATION_EXPORT void Open_im_sdkTransferGroupOwner(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable groupID, NSString* _Nullable newOwnerUserID);

FOUNDATION_EXPORT void Open_im_sdkTypingStatusUpdate(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable recvID, NSString* _Nullable msgTip);

FOUNDATION_EXPORT void Open_im_sdkUploadFile(id<Open_im_sdk_callbackSendMsgCallBack> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable filePath);

FOUNDATION_EXPORT NSString* _Nonnull Open_im_sdkUploadImage(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID, NSString* _Nullable filePath, NSString* _Nullable token, NSString* _Nullable obj);

FOUNDATION_EXPORT void Open_im_sdkWakeUp(id<Open_im_sdk_callbackBase> _Nullable callback, NSString* _Nullable operationID);

#endif
