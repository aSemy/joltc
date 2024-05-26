#include "JoltC/JoltC_RotatedTranslatedShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RotatedTranslatedShapeSettings_t * JoltC_RotatedTranslatedShapeSettings_new(
  JoltC_Vec3_t * inPosition,
  JoltC_Quat_t * inRotation,
  JoltC_ShapeSettings_t * inShape
) {
  JoltC_RotatedTranslatedShapeSettings_t * cInstance = new JoltC_RotatedTranslatedShapeSettings_t();
  RotatedTranslatedShapeSettings * cppInstance = new RotatedTranslatedShapeSettings(
    *reinterpret_cast<Vec3 *>(inPosition->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    reinterpret_cast<ShapeSettings *>(inShape->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_RotatedTranslatedShapeSettings_GetRefCount(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_RotatedTranslatedShapeSettings_AddRef(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_RotatedTranslatedShapeSettings_Release(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_RotatedTranslatedShapeSettings_Create(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  static Shape::ShapeResult resultValue = selfCpp->Create();
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_RotatedTranslatedShapeSettings_ClearCachedResult(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_RotatedTranslatedShapeSettings_mPosition_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mPosition;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_RotatedTranslatedShapeSettings_mPosition_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  JoltC_Vec3_t * mPosition
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mPosition = *reinterpret_cast<Vec3 *>(mPosition->obj);
};

JoltC_Quat_t * JoltC_RotatedTranslatedShapeSettings_mRotation_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  static Quat resultValue = selfCpp->mRotation;
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_RotatedTranslatedShapeSettings_mRotation_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  JoltC_Quat_t * mRotation
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mRotation = *reinterpret_cast<Quat *>(mRotation->obj);
};

unsigned long long int JoltC_RotatedTranslatedShapeSettings_mUserData_Get(
  JoltC_RotatedTranslatedShapeSettings_t * self
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_RotatedTranslatedShapeSettings_mUserData_Set(
  JoltC_RotatedTranslatedShapeSettings_t * self,
  unsigned long long int mUserData
) {
  RotatedTranslatedShapeSettings * selfCpp = static_cast<RotatedTranslatedShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

