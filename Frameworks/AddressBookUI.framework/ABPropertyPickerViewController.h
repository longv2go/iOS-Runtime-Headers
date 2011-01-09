/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */



@interface ABPropertyPickerViewController : ABPickerViewController <ABCardPropertyPickerDelegate>
{
    struct __CFArray { } *_properties;
    void *_addressBook;
    void *_person;
}

@property void *addressBook;
@property void *person;
@property __CFArray *properties;


- (void*)addressBook;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; float x4; NSInteger x5; float x6; }*)arg1;
- (void)dealloc;
- (void)setProperties:(struct __CFArray { }*)arg1;
- (struct __CFArray { }*)properties;
- (float)ab_heightToFitForViewInPopoverView;
- (id)propertyPicker;
- (void*)person;
- (void)propertyPicker:(id)arg1 selectedProperty:(NSInteger)arg2;
- (void)setPerson:(void*)arg1;
- (void)setAddressBook:(void*)arg1;

@end