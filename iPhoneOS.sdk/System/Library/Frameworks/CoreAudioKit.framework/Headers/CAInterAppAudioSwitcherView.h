// =================================================================================================
// CAInterAppAudioSwitcherView.h
// =================================================================================================
/*
 File:		CAInterAppAudioSwitcherView.h
 Framework:	CoreAudioKit
 
 Copyright (c) 2014 Apple Inc. All Rights Reserved.
 */


#import <AudioUnit/AudioUnit.h>
#import <UIKit/UIKit.h>

NS_CLASS_AVAILABLE_IOS(8_0)
@interface CAInterAppAudioSwitcherView : UIView
@property (getter = isShowingAppNames) BOOL showingAppNames; // Defaults to NO

// Node apps should pass their output audio unit
// Host apps should pass null
- (void)setOutputAudioUnit:(AudioUnit)au;
- (CGFloat) contentWidth;

@end