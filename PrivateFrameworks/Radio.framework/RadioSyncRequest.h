/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, NSString, SSURLConnectionRequest;

@interface RadioSyncRequest : RadioRequest {
    NSObject<OS_dispatch_queue> *_artworkQueue;
    BOOL _disableArtworkLoading;
    unsigned long long _globalVersion;
    BOOL _includeCleanTracksOnly;
    BOOL _isAutomaticUpdate;
    NSMutableSet *_persistentIDsRequiringTracksBeforeCompletion;
    NSString *_referer;
    SSURLConnectionRequest *_request;
    BOOL _requireTracksBeforeCompletion;
    NSDictionary *_responseDictionary;
}

@property BOOL disableArtworkLoading;
@property BOOL includeCleanTracksOnly;
@property BOOL isAutomaticUpdate;
@property(copy) NSString * referer;
@property BOOL requireTracksBeforeCompletion;

- (void).cxx_destruct;
- (id)_sortedChangesByType:(id)arg1;
- (id)_stationSortOrderForChanges:(id)arg1;
- (id)_updateModel:(id)arg1 withChangeDictionary:(id)arg2 changeType:(int*)arg3 loadArtworkSynchronously:(BOOL)arg4;
- (void)cancel;
- (id)changeList;
- (BOOL)disableArtworkLoading;
- (BOOL)includeCleanTracksOnly;
- (id)init;
- (id)initWithGlobalVersion:(unsigned long long)arg1;
- (BOOL)isAutomaticUpdate;
- (id)matchDictionary;
- (id)referer;
- (BOOL)requireTracksBeforeCompletion;
- (void)requireTracksBeforeCompletionForStationPeristentID:(long long)arg1;
- (id)responseDictionary;
- (void)setDisableArtworkLoading:(BOOL)arg1;
- (void)setIncludeCleanTracksOnly:(BOOL)arg1;
- (void)setIsAutomaticUpdate:(BOOL)arg1;
- (void)setReferer:(id)arg1;
- (void)setRequireTracksBeforeCompletion:(BOOL)arg1;
- (void)startWithCompletionHandler:(id)arg1;

@end
