#include "JoltC/JoltC_SwingTwistConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SwingTwistConstraintSettings_t * JoltC_SwingTwistConstraintSettings_new() {
  JoltC_SwingTwistConstraintSettings_t * cInstance = new JoltC_SwingTwistConstraintSettings_t();
  SwingTwistConstraintSettings * cppInstance = new SwingTwistConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Constraint_t * JoltC_SwingTwistConstraintSettings_Create(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const Constraint * resultValue = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
  );
  JoltC_Constraint_t* result = new JoltC_Constraint_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long JoltC_SwingTwistConstraintSettings_GetRefCount(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SwingTwistConstraintSettings_AddRef(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_SwingTwistConstraintSettings_Release(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->Release();
};

//endregion

//region properties

JoltC_EConstraintSpace JoltC_SwingTwistConstraintSettings_mSpace_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_SwingTwistConstraintSettings_mSpace_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mPosition1;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraintSettings_mPosition1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPosition1 = *reinterpret_cast<RVec3 *>(mPosition1->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mTwistAxis1;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraintSettings_mTwistAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis1 = *reinterpret_cast<Vec3 *>(mTwistAxis1->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mPlaneAxis1;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraintSettings_mPlaneAxis1_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis1
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneAxis1 = *reinterpret_cast<Vec3 *>(mPlaneAxis1->obj);
};

JoltC_RVec3_t * JoltC_SwingTwistConstraintSettings_mPosition2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const RVec3& resultValue = selfCpp->mPosition2;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraintSettings_mPosition2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPosition2 = *reinterpret_cast<RVec3 *>(mPosition2->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mTwistAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mTwistAxis2;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraintSettings_mTwistAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis2 = *reinterpret_cast<Vec3 *>(mTwistAxis2->obj);
};

JoltC_Vec3_t * JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const Vec3& resultValue = selfCpp->mPlaneAxis2;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraintSettings_mPlaneAxis2_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_Vec3_t * mPlaneAxis2
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneAxis2 = *reinterpret_cast<Vec3 *>(mPlaneAxis2->obj);
};

JoltC_ESwingType JoltC_SwingTwistConstraintSettings_mSwingType_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  ESwingType result = selfCpp->mSwingType;
  return static_cast<JoltC_ESwingType>(static_cast<int>(result));
};

void JoltC_SwingTwistConstraintSettings_mSwingType_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_ESwingType mSwingType
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSwingType = static_cast<ESwingType>(static_cast<int>(mSwingType));
};

float JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mNormalHalfConeAngle;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mNormalHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mNormalHalfConeAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNormalHalfConeAngle = mNormalHalfConeAngle;
};

float JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mPlaneHalfConeAngle;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mPlaneHalfConeAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mPlaneHalfConeAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mPlaneHalfConeAngle = mPlaneHalfConeAngle;
};

float JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mTwistMinAngle;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mTwistMinAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMinAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMinAngle = mTwistMinAngle;
};

float JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mTwistMaxAngle;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mTwistMaxAngle_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mTwistMaxAngle
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMaxAngle = mTwistMaxAngle;
};

float JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionTorque;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mMaxFrictionTorque_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  float mMaxFrictionTorque
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionTorque = mMaxFrictionTorque;
};

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const MotorSettings& resultValue = selfCpp->mSwingMotorSettings;
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraintSettings_mSwingMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mSwingMotorSettings
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mSwingMotorSettings = *reinterpret_cast<MotorSettings *>(mSwingMotorSettings->obj);
};

JoltC_MotorSettings_t * JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  const MotorSettings& resultValue = selfCpp->mTwistMotorSettings;
  JoltC_MotorSettings_t* result = new JoltC_MotorSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SwingTwistConstraintSettings_mTwistMotorSettings_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  JoltC_MotorSettings_t * mTwistMotorSettings
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mTwistMotorSettings = *reinterpret_cast<MotorSettings *>(mTwistMotorSettings->obj);
};

bool JoltC_SwingTwistConstraintSettings_mEnabled_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mEnabled_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  bool mEnabled
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SwingTwistConstraintSettings_t * self
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_SwingTwistConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SwingTwistConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  SwingTwistConstraintSettings * selfCpp = static_cast<SwingTwistConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

