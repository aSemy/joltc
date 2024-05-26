#include "JoltC/JoltC_SoftBodyShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const unsigned long JoltC_SoftBodyShape_GetSubShapeIDBits(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const unsigned long result = selfCpp->GetSubShapeIDBits();
  return result;
};

const unsigned long JoltC_SoftBodyShape_GetFaceIndex(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const unsigned long result = selfCpp->GetFaceIndex(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

unsigned long JoltC_SoftBodyShape_GetRefCount(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SoftBodyShape_AddRef(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_SoftBodyShape_Release(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_SoftBodyShape_GetType(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_SoftBodyShape_GetSubType(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_SoftBodyShape_MustBeStatic(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_SoftBodyShape_GetLocalBounds(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_AABox_t * JoltC_SoftBodyShape_GetWorldSpaceBounds(
  JoltC_SoftBodyShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_Vec3_t * JoltC_SoftBodyShape_GetCenterOfMass(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_SoftBodyShape_GetUserData(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_SoftBodyShape_SetUserData(
  JoltC_SoftBodyShape_t * self,
  unsigned long long int inUserData
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JoltC_SoftBodyShape_GetSubShapeIDBitsRecursive(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_SoftBodyShape_GetInnerRadius(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_SoftBodyShape_GetMassProperties(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_SoftBodyShape_GetMaterial(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

JoltC_Vec3_t * JoltC_SoftBodyShape_GetSurfaceNormal(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_SoftBodyShape_GetSubShapeUserData(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_SoftBodyShape_GetSubShapeTransformedShape(
  JoltC_SoftBodyShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
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

float JoltC_SoftBodyShape_GetVolume(
  JoltC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_SoftBodyShape_IsValidScale(
  JoltC_SoftBodyShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_SoftBodyShape_ScaleShape(
  JoltC_SoftBodyShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
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

