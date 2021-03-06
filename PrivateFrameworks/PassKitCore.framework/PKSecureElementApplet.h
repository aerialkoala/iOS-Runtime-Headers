/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKSecureElementApplet : NSObject <NSSecureCoding> {
    NSString * _identifier;
    unsigned int  _lifecycleState;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned int lifecycleState;

+ (id)secureElementAppletWithInternalApplet:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 lifecycleState:(unsigned int)arg2;
- (unsigned int)lifecycleState;

@end
