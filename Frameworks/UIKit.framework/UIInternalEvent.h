/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInternalEvent : UIEvent {
    struct __GSEvent { } *_gsEvent;
    struct __IOHIDEvent { } *_hidEvent;
}

- (struct __GSEvent { }*)_gsEvent;
- (struct __IOHIDEvent { }*)_hidEvent;
- (id)_screen;
- (void)_setGSEvent:(struct __GSEvent { }*)arg1;
- (void)_setHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (void)dealloc;

@end
