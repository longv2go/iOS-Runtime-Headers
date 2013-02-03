/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class <CalendarEventLoaderDelegate>, NSArray, NSMutableSet, EKEventStore, NSPredicate;

@interface CalendarEventLoader : NSObject {
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    struct { 
        int year; 
        BOOL month; 
        BOOL day; 
        BOOL hour; 
        BOOL minute; 
        double second; 
    NSPredicate *_backgroundPredicate;
    id _backgroundRequest;
    NSArray *_backgroundResults;
    int _backgroundSeed;
    <CalendarEventLoaderDelegate> *_delegate;
    double _end;
    } _endGr;
    struct CalFilter { } *_filter;
    struct dispatch_group_s { } *_group;
    BOOL _loadsBlocked;
    struct dispatch_queue_s { } *_lock;
    NSArray *_occurrences;
    NSMutableSet *_occurrencesAwaitingDeletion;
    NSMutableSet *_occurrencesAwaitingRefresh;
    unsigned int _paddingMonthsToLoad;
    NSPredicate *_predicate;
    BOOL _processingReload;
    struct dispatch_queue_s { } *_queue;
    int _seed;
    double _selectedDate;
    } _selectedDateGr;
    NSArray *_selectedDateOccurrences;
    } _selectedDateTimeGr;
    double _start;
    } _startGr;
    EKEventStore *_store;
}

@property <CalendarEventLoaderDelegate> * delegate;
@property(retain) struct CalFilter { }* filter;
@property BOOL loadsBlocked;
@property unsigned int paddingMonthsToLoad;

- (BOOL)_backgroundLoadCompleted:(id)arg1;
- (void)_beginBackgroundLoadForPredicate:(id)arg1;
- (void)_clearOccurrences;
- (void)_eventStoreChanged:(id)arg1;
- (void)_notifyDelegateThatOccurrencesDidUpdate;
- (void)_reload:(BOOL)arg1;
- (void)_reloadOccurrences;
- (void)_setDisplayedDateRange:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 end:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg2 loadMethod:(int)arg3;
- (void)_updatePredicate;
- (void)addOccurrenceAwaitingDeletion:(id)arg1;
- (void)addOccurrenceAwaitingRefresh:(id)arg1;
- (void)cancelBackgroundLoad;
- (void)dealloc;
- (id)delegate;
- (struct CalFilter { }*)filter;
- (id)initWithEventStore:(id)arg1;
- (BOOL)loadsBlocked;
- (id)occurrencesForDay:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 waitForLoad:(BOOL)arg2;
- (id)occurrencesForStartDate:(id)arg1 endDate:(id)arg2 waitForLoad:(BOOL)arg3;
- (unsigned int)paddingMonthsToLoad;
- (struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })selectedDate;
- (id)selectedDateOccurrences:(BOOL)arg1 loadIsComplete:(BOOL*)arg2;
- (id)selectedDateOccurrences:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(struct CalFilter { }*)arg1;
- (void)setLoadsBlocked:(BOOL)arg1;
- (void)setPaddingMonthsToLoad:(unsigned int)arg1;
- (void)setSelectedDate:(struct { int x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; double x6; })arg1 loadMethod:(int)arg2;
- (void)timeZoneChanged;
- (BOOL)waitForBackgroundLoad;

@end