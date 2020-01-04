#import <React/RCTBridgeModule.h>

@import Contacts;
@import ContactsUI;
@import AddressBook;
@import AddressBookUI;

@interface ReactNativeSContact : NSObject <RCTBridgeModule, CNContactPickerDelegate, ABPeoplePickerNavigationControllerDelegate>

@end
