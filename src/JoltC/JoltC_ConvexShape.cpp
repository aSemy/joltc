#include "JoltC/JoltC_ConvexShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_SphereShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_SphereShape(
  JoltC_SphereShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_BoxShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_BoxShape(
  JoltC_BoxShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_CylinderShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_CylinderShape(
  JoltC_CylinderShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_CapsuleShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_CapsuleShape(
  JoltC_CapsuleShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_TaperedCapsuleShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_TaperedCapsuleShape(
  JoltC_TaperedCapsuleShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConvexHullShape_t into JoltC_ConvexShape_t.
 */
JoltC_ConvexShape_t * JoltC_ConvexShape_From_ConvexHullShape(
  JoltC_ConvexHullShape_t * subtype
) {
  return (JoltC_ConvexShape_t*) subtype;
};

//endregion

//region functions

float JoltC_ConvexShape_GetDensity(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JoltC_ConvexShape_SetDensity(
  JoltC_ConvexShape_t * self,
  float inDensity
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  
  selfCpp->SetDensity(
  inDensity
  );
};

unsigned long JoltC_ConvexShape_GetRefCount(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_ConvexShape_AddRef(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_ConvexShape_Release(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_ConvexShape_GetType(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_ConvexShape_GetSubType(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_ConvexShape_MustBeStatic(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_ConvexShape_GetLocalBounds(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_AABox_t * JoltC_ConvexShape_GetWorldSpaceBounds(
  JoltC_ConvexShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_Vec3_t * JoltC_ConvexShape_GetCenterOfMass(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_ConvexShape_GetUserData(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_ConvexShape_SetUserData(
  JoltC_ConvexShape_t * self,
  unsigned long long int inUserData
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JoltC_ConvexShape_GetSubShapeIDBitsRecursive(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_ConvexShape_GetInnerRadius(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_ConvexShape_GetMassProperties(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_ConvexShape_GetMaterial(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

JoltC_Vec3_t * JoltC_ConvexShape_GetSurfaceNormal(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_ConvexShape_GetSubShapeUserData(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_ConvexShape_GetSubShapeTransformedShape(
  JoltC_ConvexShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  TransformedShape resultValue = selfCpp->GetSubShapeTransformedShape(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj),
  *reinterpret_cast<SubShapeID *>(outRemainder->obj)
  );
  TransformedShape* result = new TransformedShape(resultValue);
  return reinterpret_cast<JoltC_TransformedShape_t *>(result);
};

float JoltC_ConvexShape_GetVolume(
  JoltC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_ConvexShape_IsValidScale(
  JoltC_ConvexShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_ConvexShape_ScaleShape(
  JoltC_ConvexShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->ScaleShape(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

