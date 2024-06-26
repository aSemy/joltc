#include "JoltC/JoltC_GearConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `GearConstraintSettings` instance.
 */
JoltC_GearConstraintSettings_t * JoltC_GearConstraintSettings_new() {
  JoltC_GearConstraintSettings_t * cInstance = new JoltC_GearConstraintSettings_t();
  GearConstraintSettings * cppInstance = new GearConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_GearConstraintSettings_destroy(
  JoltC_GearConstraintSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<GearConstraintSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_GearConstraintSettings_SetRatio(
  JoltC_GearConstraintSettings_t * self,
  long inNumTeethGear1,
  long inNumTeethGear2
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->SetRatio(
    inNumTeethGear1,
    inNumTeethGear2
  );
}

JoltC_Constraint_t * JoltC_GearConstraintSettings_Create(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  Body * inBody1Cpp = static_cast<Body *>(inBody1->obj);
  Body * inBody2Cpp = static_cast<Body *>(inBody2->obj);
  const Constraint * resultPtr = selfCpp->Create(
    *inBody1Cpp,
    *inBody2Cpp
  );
  JoltC_Constraint_t * result = new JoltC_Constraint_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long JoltC_GearConstraintSettings_GetRefCount(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_GearConstraintSettings_AddRef(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_GearConstraintSettings_Release(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

JoltC_EConstraintSpace JoltC_GearConstraintSettings_mSpace_Get(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
}

void JoltC_GearConstraintSettings_mSpace_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
}

JoltC_Vec3_t * JoltC_GearConstraintSettings_mHingeAxis1_Get(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mHingeAxis1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_GearConstraintSettings_mHingeAxis1_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis1
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis1 = *static_cast<Vec3 *>(mHingeAxis1->obj);
}

JoltC_Vec3_t * JoltC_GearConstraintSettings_mHingeAxis2_Get(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mHingeAxis2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_GearConstraintSettings_mHingeAxis2_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis2
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis2 = *static_cast<Vec3 *>(mHingeAxis2->obj);
}

float JoltC_GearConstraintSettings_mRatio_Get(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  return selfCpp->mRatio;
}

void JoltC_GearConstraintSettings_mRatio_Set(
  JoltC_GearConstraintSettings_t * self,
  float mRatio
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mRatio = mRatio;
}

bool JoltC_GearConstraintSettings_mEnabled_Get(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_GearConstraintSettings_mEnabled_Set(
  JoltC_GearConstraintSettings_t * self,
  bool mEnabled
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
}

long JoltC_GearConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_GearConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_GearConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
}

long JoltC_GearConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_GearConstraintSettings_t * self
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_GearConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_GearConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
}

//endregion


#ifdef __cplusplus
}
#endif
