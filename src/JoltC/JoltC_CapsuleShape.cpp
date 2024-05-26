#include "JoltC/JoltC_CapsuleShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CapsuleShape_t * JoltC_CapsuleShape_new(
  float inHalfHeight,
  float inRadius,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  JoltC_CapsuleShape_t * cInstance = new JoltC_CapsuleShape_t();
  CapsuleShape * cppInstance = new CapsuleShape(
    inHalfHeight,
    inRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

float JoltC_CapsuleShape_GetRadius(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetRadius();
  return result;
};

float JoltC_CapsuleShape_GetHalfHeightOfCylinder(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetHalfHeightOfCylinder();
  return result;
};

float JoltC_CapsuleShape_GetDensity(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JoltC_CapsuleShape_SetDensity(
  JoltC_CapsuleShape_t * self,
  float inDensity
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  
  selfCpp->SetDensity(
    inDensity
  );
};

unsigned long JoltC_CapsuleShape_GetRefCount(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_CapsuleShape_AddRef(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_CapsuleShape_Release(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_CapsuleShape_GetType(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_CapsuleShape_GetSubType(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_CapsuleShape_MustBeStatic(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_CapsuleShape_GetLocalBounds(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  static AABox resultValue = selfCpp->GetLocalBounds();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_AABox_t * JoltC_CapsuleShape_GetWorldSpaceBounds(
  JoltC_CapsuleShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  static AABox resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_CapsuleShape_GetCenterOfMass(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long long int JoltC_CapsuleShape_GetUserData(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_CapsuleShape_SetUserData(
  JoltC_CapsuleShape_t * self,
  unsigned long long int inUserData
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  
  selfCpp->SetUserData(
    inUserData
  );
};

unsigned long JoltC_CapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_CapsuleShape_GetInnerRadius(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_CapsuleShape_GetMassProperties(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  static MassProperties resultValue = selfCpp->GetMassProperties();
  JoltC_MassProperties_t* result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_CapsuleShape_GetMaterial(
  JoltC_CapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_CapsuleShape_GetSurfaceNormal(
  JoltC_CapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  static Vec3 resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long long int JoltC_CapsuleShape_GetSubShapeUserData(
  JoltC_CapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_CapsuleShape_GetSubShapeTransformedShape(
  JoltC_CapsuleShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  static TransformedShape resultValue = selfCpp->GetSubShapeTransformedShape(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<SubShapeID *>(outRemainder->obj)
  );
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_CapsuleShape_GetVolume(
  JoltC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_CapsuleShape_IsValidScale(
  JoltC_CapsuleShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShape_ScaleShape(
  JoltC_CapsuleShape_t * self,
  JoltC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->ScaleShape(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

