#import <SceneKit/SceneKitTypes.h>

FOUNDATION_EXTERN SCNVector3 _SCNVector3Make(float x, float y, float z);

FOUNDATION_EXTERN SCNVector4 _SCNVector4Make(float x, float y, float z, float w);

FOUNDATION_EXTERN SCNMatrix4 _SCNMatrix4Translate(SCNMatrix4 m, float tx, float ty, float tz);

FOUNDATION_EXTERN vector_float3 _SCNVector3ToFloat3(SCNVector3 v);

FOUNDATION_EXTERN vector_float4 _SCNVector4ToFloat4(SCNVector4 v);

FOUNDATION_EXTERN matrix_float4x4 _SCNMatrix4ToMat4(SCNMatrix4 m);

FOUNDATION_EXTERN SCNVector3 _SCNVector3FromFloat3(vector_float3 v);

FOUNDATION_EXTERN SCNVector4 _SCNVector4FromFloat4(vector_float4 v);

FOUNDATION_EXTERN SCNMatrix4 _SCNMatrix4FromMat4(matrix_float4x4 m);


