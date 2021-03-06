/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
 */

@class <RUSearchDataSourceDelegate>, NSArray, NSString, RadioSearchRequest;

@interface RUSearchDataSource : NSObject {
    RadioSearchRequest *_activeRequest;
    double _activeRequestTimeInterval;
    <RUSearchDataSourceDelegate> *_delegate;
    BOOL _excludeFeaturedStations;
    double _minimumSearchTimeInterval;
    NSString *_queuedSearchTerm;
    NSArray *_searchResultCategories;
}

@property <RUSearchDataSourceDelegate> * delegate;
@property BOOL excludeFeaturedStations;
@property(readonly) NSArray * searchResultCategories;

- (void).cxx_destruct;
- (void)_updateResultsForQueuedSearchTerm;
- (void)dealloc;
- (id)delegate;
- (BOOL)excludeFeaturedStations;
- (id)init;
- (id)searchResultCategories;
- (void)setDelegate:(id)arg1;
- (void)setExcludeFeaturedStations:(BOOL)arg1;
- (void)updateResultsForSearchTerm:(id)arg1;

@end
