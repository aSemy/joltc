#include "JoltC/JoltC_PulleyConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PulleyConstraintSettings_t * JoltC_PulleyConstraintSettings_new() {
  JoltC_PulleyConstraintSettings_t * cInstance = new JoltC_PulleyConstraintSettings_t();
  PulleyConstraintSettings * cppInstance = new PulleyConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Constraint_t * JoltC_PulleyConstraintSettings_Create(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  const Constraint * resultValue = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
  );
  JoltC_Constraint_t* result = new JoltC_Constraint_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_PulleyConstraintSettings_GetRefCount(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_PulleyConstraintSettings_AddRef(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_PulleyConstraintSettings_Release(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->Release();
};

//endregion

//region properties

JoltC_EConstraintSpace JoltC_PulleyConstraintSettings_mSpace_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_PulleyConstraintSettings_mSpace_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_PulleyConstraintSettings_mBodyPoint1_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mBodyPoint1;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_PulleyConstraintSettings_mBodyPoint1_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_RVec3_t * mBodyPoint1
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mBodyPoint1 = *reinterpret_cast<RVec3 *>(mBodyPoint1->obj);
};

JoltC_RVec3_t * JoltC_PulleyConstraintSettings_mFixedPoint1_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mFixedPoint1;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_PulleyConstraintSettings_mFixedPoint1_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_RVec3_t * mFixedPoint1
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mFixedPoint1 = *reinterpret_cast<RVec3 *>(mFixedPoint1->obj);
};

JoltC_RVec3_t * JoltC_PulleyConstraintSettings_mBodyPoint2_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mBodyPoint2;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_PulleyConstraintSettings_mBodyPoint2_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_RVec3_t * mBodyPoint2
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mBodyPoint2 = *reinterpret_cast<RVec3 *>(mBodyPoint2->obj);
};

JoltC_RVec3_t * JoltC_PulleyConstraintSettings_mFixedPoint2_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mFixedPoint2;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_PulleyConstraintSettings_mFixedPoint2_Set(
  JoltC_PulleyConstraintSettings_t * self,
  JoltC_RVec3_t * mFixedPoint2
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mFixedPoint2 = *reinterpret_cast<RVec3 *>(mFixedPoint2->obj);
};

float JoltC_PulleyConstraintSettings_mRatio_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  float result = selfCpp->mRatio;
  return result;
};

void JoltC_PulleyConstraintSettings_mRatio_Set(
  JoltC_PulleyConstraintSettings_t * self,
  float mRatio
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mRatio = mRatio;
};

float JoltC_PulleyConstraintSettings_mMinLength_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  float result = selfCpp->mMinLength;
  return result;
};

void JoltC_PulleyConstraintSettings_mMinLength_Set(
  JoltC_PulleyConstraintSettings_t * self,
  float mMinLength
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mMinLength = mMinLength;
};

float JoltC_PulleyConstraintSettings_mMaxLength_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxLength;
  return result;
};

void JoltC_PulleyConstraintSettings_mMaxLength_Set(
  JoltC_PulleyConstraintSettings_t * self,
  float mMaxLength
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mMaxLength = mMaxLength;
};

bool JoltC_PulleyConstraintSettings_mEnabled_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_PulleyConstraintSettings_mEnabled_Set(
  JoltC_PulleyConstraintSettings_t * self,
  bool mEnabled
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_PulleyConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_PulleyConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_PulleyConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_PulleyConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_PulleyConstraintSettings_t * self
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_PulleyConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_PulleyConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  PulleyConstraintSettings * selfCpp = static_cast<PulleyConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

