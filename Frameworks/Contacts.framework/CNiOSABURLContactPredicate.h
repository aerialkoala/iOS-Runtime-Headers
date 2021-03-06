/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNiOSABURLContactPredicate : CNPredicate <CNiOSContactPredicate> {
    NSString * _urlString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *urlString;

+ (BOOL)supportsSecureCoding;

- (struct __CFArray { }*)cn_copyPeopleInAddressBook:(void*)arg1 withSortOrder:(unsigned int)arg2 matchInfos:(id*)arg3 options:(unsigned int)arg4 error:(struct __CFError {}**)arg5;
- (BOOL)cn_supportsNativeSorting;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURLString:(id)arg1;
- (id)urlString;

@end
