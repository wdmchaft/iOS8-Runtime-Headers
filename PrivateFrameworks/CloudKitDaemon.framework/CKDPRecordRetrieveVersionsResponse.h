/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSMutableArray;

@interface CKDPRecordRetrieveVersionsResponse : PBCodable <NSCopying> {
    NSMutableArray *_recordVersions;
    bool_isDeleted;
    struct { 
        unsigned int isDeleted : 1; 
    } _has;
}

@property bool hasIsDeleted;
@property bool isDeleted;
@property(retain) NSMutableArray * recordVersions;


- (void)setRecordVersions:(id)arg1;
- (id)recordVersions;
- (bool)hasIsDeleted;
- (void)setHasIsDeleted:(bool)arg1;
- (id)recordVersionsAtIndex:(unsigned long long)arg1;
- (void)clearRecordVersions;
- (unsigned long long)recordVersionsCount;
- (void)addRecordVersions:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setIsDeleted:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)isDeleted;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end
