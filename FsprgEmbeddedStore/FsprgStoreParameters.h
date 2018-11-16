//
//  FsprgStoreParameters.h
//  FsprgEmbeddedStore
//
//  Created by Lars Steiger on 2/19/10.
//  Copyright 2010 FastSpring. All rights reserved.
//

#import <Cocoa/Cocoa.h>

/*! Constants for setOrderProcessType: */
extern NSString * const kFsprgOrderProcessDetail;
extern NSString * const kFsprgOrderProcessInstant;
extern NSString * const kFsprgOrderProcessCheckout;

/*! Constants for setMode: */
extern NSString * const kFsprgModeActive;
extern NSString * const kFsprgModeActiveTest;
extern NSString * const kFsprgModeTest;


/*!
 * FastSpring store parameters. FsprgStoreParameters is backed by a NSMutableDictionary that
 * can be accessed and modified via the raw and setRaw: methods.
 */
@interface FsprgStoreParameters : NSObject {
	BOOL hasContactDefaults;
//    NSMutableDictionary *raw;
}

+ (FsprgStoreParameters *)parameters;
//+ (FsprgStoreParameters *)parametersWithRaw:(NSMutableDictionary *)aRaw;

- (NSURLRequest *)toURLRequest;
- (NSURL *)toURL;

//- (id)initWithRaw:(NSMutableDictionary *)aRaw;
//- (NSMutableDictionary *)raw;
//- (void)setRaw:(NSMutableDictionary *)aRaw;

/*!
 * Pass a language code via the URL to bypass automatic language detection.
 * Example: de
 */
//- (NSString *)language;
//- (void)setLanguage:(NSString *)aLanguage;
@property (readwrite,strong) NSString *language;


/*!
 * Use kFsprgOrderProcessDetail or kFsprgOrderProcessInstant.
 */
//- (NSString *)orderProcessType;
//- (void)setOrderProcessType:(NSString *)anOrderProcessType;
@property (readwrite,strong) NSString *orderProcessType;


/*!
 * Store path name and product path name.
 * These are found in a full product URL such as sites.fastspring.com/<STOREPATH>/product/<PRODUCTPATH>
 */
- (void)setStoreId:(NSString *)aStoreId withProductId:(NSString *)aProductId;
//- (NSString *)storeId;
//- (void)setStoreId:(NSString *)aStoreId;
@property (readwrite,strong) NSString *storeId;

//- (NSString *)productId;
//- (void)setProductId:(NSString *)aProductId;
@property (readwrite,strong) NSString *productId;


/*!
 * Use kFsprgModeActive, kFsprgModeActiveTest or kFsprgModeTest.
 */
//- (NSString *)mode;
//- (void)setMode:(NSString *)aMode;
@property (readwrite,strong) NSString *mode;



/*!
 * Used for "External Tracking". Go to "Link Sources" inside SpringBoard.
 * Example: november_sale_post
 */
//- (NSString *)campaign;
//- (void)setCampaign:(NSString *)aCampaign;
@property (readwrite,strong) NSString *campaign;



/*!
 * Used for advanced and atypical store configuration options.
 */
//- (NSString *)option;
//- (void)setOption:(NSString *)anOption;
@property (readwrite,strong) NSString *option;



/*!
 * Pass a custom referrer via the URL to override the automatically detected referring URL (HTTP_REFERER).
 * The value passed in this parameter is available in notifications and data exports. If a value is 
 * passed in this parameter then no data will be stored from the HTTP_REFERER header.
 * Example: xyz123
 */
//- (NSString *)referrer;
//- (void)setReferrer:(NSString *)aReferrer;
@property (readwrite,strong) NSString *referrer;



/*!
 * Used for "External Tracking". Go to "Link Sources" inside SpringBoard.
 * Example: my_blog
 */
//- (NSString *)source;
//- (void)setSource:(NSString *)aSource;
@property (readwrite,strong) NSString *source;



/*!
 * Pass a coupon code via the URL to automatically apply a coupon to the order so that the customer 
 * does not need to enter it. A corresponding coupon code must be setup and associated with a promotion.
 * Example: DECSPECIAL987
 */
//- (NSString *)coupon;
//- (void)setCoupon:(NSString *)aCoupon;
@property (readwrite,strong) NSString *coupon;



/*!
 * This parameter has many uses within SpringBoard. A tag is a variable that can hold any positive integer value.
 * If no value is specified, it holds a value of 1. Tags can be used by parts of the order process. Adding multiple
 * tag parameters can be achieved by separating each tag (sometimes with numeric value) with a comma, as shown below.
 *
 * mytaga,mytagb,mytagc=2,anothertag=8
 */
//- (NSString *)tags;
//- (void)setTags:(NSString *)aTags;
@property (readwrite,strong) NSString *tags;


- (BOOL)hasContactDefaults;
//- (NSString *)contactFname;
//- (void)setContactFname:(NSString *)aContactFname;
@property (readwrite,strong) NSString *contactFname;

//- (NSString *)contactLname;
//- (void)setContactLname:(NSString *)aContactLname;
@property (readwrite,strong) NSString *contactLname;

//- (NSString *)contactEmail;
//- (void)setContactEmail:(NSString *)aContactEmail;
@property (readwrite,strong) NSString *contactEmail;

//- (NSString *)contactCompany;
//- (void)setContactCompany:(NSString *)aContactCompany;
@property (readwrite,strong) NSString *contactCompany;

//- (NSString *)contactPhone;
//- (void)setContactPhone:(NSString *)aContactPhone;
@property (readwrite,strong) NSString *contactPhone;

@end
