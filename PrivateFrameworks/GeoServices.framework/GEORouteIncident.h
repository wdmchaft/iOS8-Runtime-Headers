/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, GEOLatLng;

@interface GEORouteIncident : PBCodable <NSCopying> {
    long long _endTime;
    long long _startTime;
    long long _updateTime;
    NSString *_crossStreet;
    NSString *_incidentId;
    NSString *_info;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    GEOLatLng *_position;
    int _significance;
    NSString *_street;
    int _type;
    bool_endTimeReliable;
    struct { 
        unsigned int endTime : 1; 
        unsigned int startTime : 1; 
        unsigned int updateTime : 1; 
        unsigned int laneClosureCount : 1; 
        unsigned int laneClosureType : 1; 
        unsigned int significance : 1; 
        unsigned int type : 1; 
        unsigned int endTimeReliable : 1; 
    } _has;
}

@property(readonly) bool hasPosition;
@property(retain) GEOLatLng * position;
@property(readonly) bool hasIncidentId;
@property(retain) NSString * incidentId;
@property(readonly) bool hasInfo;
@property(retain) NSString * info;
@property bool hasType;
@property int type;
@property(readonly) bool hasStreet;
@property(retain) NSString * street;
@property(readonly) bool hasCrossStreet;
@property(retain) NSString * crossStreet;
@property bool hasStartTime;
@property long long startTime;
@property bool hasEndTime;
@property long long endTime;
@property bool hasUpdateTime;
@property long long updateTime;
@property bool hasLaneClosureType;
@property int laneClosureType;
@property bool hasLaneClosureCount;
@property unsigned int laneClosureCount;
@property bool hasEndTimeReliable;
@property bool endTimeReliable;
@property bool hasSignificance;
@property int significance;


- (long long)updateTime;
- (id)crossStreet;
- (id)incidentId;
- (unsigned int)laneClosureCount;
- (int)laneClosureType;
- (bool)hasEndTime;
- (bool)hasStartTime;
- (bool)endTimeReliable;
- (bool)hasSignificance;
- (void)setHasSignificance:(bool)arg1;
- (void)setSignificance:(int)arg1;
- (bool)hasEndTimeReliable;
- (void)setHasEndTimeReliable:(bool)arg1;
- (void)setEndTimeReliable:(bool)arg1;
- (bool)hasLaneClosureCount;
- (void)setHasLaneClosureCount:(bool)arg1;
- (void)setLaneClosureCount:(unsigned int)arg1;
- (bool)hasLaneClosureType;
- (void)setHasLaneClosureType:(bool)arg1;
- (void)setLaneClosureType:(int)arg1;
- (bool)hasUpdateTime;
- (void)setHasUpdateTime:(bool)arg1;
- (void)setUpdateTime:(long long)arg1;
- (bool)hasCrossStreet;
- (bool)hasStreet;
- (bool)hasIncidentId;
- (bool)hasPosition;
- (void)setCrossStreet:(id)arg1;
- (void)setIncidentId:(id)arg1;
- (int)significance;
- (void)setHasEndTime:(bool)arg1;
- (bool)hasInfo;
- (void)copyTo:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasStartTime:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (bool)hasType;
- (void)setStreet:(id)arg1;
- (id)street;
- (void)setEndTime:(long long)arg1;
- (long long)endTime;
- (void)setPosition:(id)arg1;
- (id)info;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setType:(int)arg1;
- (void)setStartTime:(long long)arg1;
- (int)type;
- (long long)startTime;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)position;
- (id)dictionaryRepresentation;
- (void)setInfo:(id)arg1;
- (struct CGImage { }*)_mapKitImage;

@end
