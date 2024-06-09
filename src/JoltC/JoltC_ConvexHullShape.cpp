#include "JoltC/JoltC_ConvexHullShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_ConvexHullShape_GetDensity(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  return selfCpp->GetDensity();
}

void JoltC_ConvexHullShape_SetDensity(
  JoltC_ConvexHullShape_t * self,
  float inDensity
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  selfCpp->SetDensity(
    inDensity
  );
}

unsigned long JoltC_ConvexHullShape_GetRefCount(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_ConvexHullShape_AddRef(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ConvexHullShape_Release(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_ConvexHullShape_GetType(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_ConvexHullShape_GetSubType(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_ConvexHullShape_MustBeStatic(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_ConvexHullShape_GetLocalBounds(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_ConvexHullShape_GetWorldSpaceBounds(
  JoltC_ConvexHullShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  const Mat44 * inCenterOfMassTransformCpp = static_cast<const Mat44 *>(inCenterOfMassTransform->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetWorldSpaceBounds(
    *inCenterOfMassTransformCpp,
    *inScaleCpp
  );
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_ConvexHullShape_GetCenterOfMass(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_ConvexHullShape_GetUserData(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_ConvexHullShape_SetUserData(
  JoltC_ConvexHullShape_t * self,
  unsigned long long int inUserData
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_ConvexHullShape_GetSubShapeIDBitsRecursive(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_ConvexHullShape_GetInnerRadius(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_ConvexHullShape_GetMassProperties(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_ConvexHullShape_GetMaterial(
  JoltC_ConvexHullShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_ConvexHullShape_GetSurfaceNormal(
  JoltC_ConvexHullShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const Vec3 * inLocalSurfacePositionCpp = static_cast<const Vec3 *>(inLocalSurfacePosition->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetSurfaceNormal(
    *inSubShapeIDCpp,
    *inLocalSurfacePositionCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_ConvexHullShape_GetSubShapeUserData(
  JoltC_ConvexHullShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_ConvexHullShape_GetSubShapeTransformedShape(
  JoltC_ConvexHullShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const Vec3 * inPositionCOMCpp = static_cast<const Vec3 *>(inPositionCOM->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  SubShapeID * outRemainderCpp = static_cast<SubShapeID *>(outRemainder->obj);
  TransformedShape * resultPtr = new TransformedShape();
  *resultPtr = selfCpp->GetSubShapeTransformedShape(
    *inSubShapeIDCpp,
    *inPositionCOMCpp,
    *inRotationCpp,
    *inScaleCpp,
    *outRemainderCpp
  );
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_ConvexHullShape_GetVolume(
  JoltC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_ConvexHullShape_IsValidScale(
  JoltC_ConvexHullShape_t * self,
  JoltC_Vec3_t * inScale
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_ConvexHullShape_ScaleShape(
  JoltC_ConvexHullShape_t * self,
  JoltC_Vec3_t * inScale
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->ScaleShape(
    *inScaleCpp
  );
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

