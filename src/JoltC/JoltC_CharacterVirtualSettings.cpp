#include "JoltC/JoltC_CharacterVirtualSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CharacterVirtualSettings_t * JoltC_CharacterVirtualSettings_new() {
  JoltC_CharacterVirtualSettings_t * cInstance = new JoltC_CharacterVirtualSettings_t();
  CharacterVirtualSettings * cppInstance = new CharacterVirtualSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_CharacterVirtualSettings_GetRefCount(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_CharacterVirtualSettings_AddRef(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_CharacterVirtualSettings_Release(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion

//region properties

float JoltC_CharacterVirtualSettings_mMass_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMass;
  return result;
};

void JoltC_CharacterVirtualSettings_mMass_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMass
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMass = mMass;
};

float JoltC_CharacterVirtualSettings_mMaxStrength_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMaxStrength;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxStrength_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMaxStrength
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxStrength = mMaxStrength;
};

JoltC_Vec3_t * JoltC_CharacterVirtualSettings_mShapeOffset_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mShapeOffset;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtualSettings_mShapeOffset_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Vec3_t * mShapeOffset
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mShapeOffset = *reinterpret_cast<Vec3 *>(mShapeOffset->obj);
};

JoltC_EBackFaceMode JoltC_CharacterVirtualSettings_mBackFaceMode_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JoltC_EBackFaceMode>(static_cast<int>(result));
};

void JoltC_CharacterVirtualSettings_mBackFaceMode_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
};

float JoltC_CharacterVirtualSettings_mPredictiveContactDistance_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mPredictiveContactDistance;
  return result;
};

void JoltC_CharacterVirtualSettings_mPredictiveContactDistance_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mPredictiveContactDistance
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mPredictiveContactDistance = mPredictiveContactDistance;
};

unsigned long JoltC_CharacterVirtualSettings_mMaxCollisionIterations_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxCollisionIterations;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxCollisionIterations_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxCollisionIterations
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxCollisionIterations = mMaxCollisionIterations;
};

unsigned long JoltC_CharacterVirtualSettings_mMaxConstraintIterations_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxConstraintIterations;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxConstraintIterations_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxConstraintIterations
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxConstraintIterations = mMaxConstraintIterations;
};

float JoltC_CharacterVirtualSettings_mMinTimeRemaining_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMinTimeRemaining;
  return result;
};

void JoltC_CharacterVirtualSettings_mMinTimeRemaining_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMinTimeRemaining
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMinTimeRemaining = mMinTimeRemaining;
};

float JoltC_CharacterVirtualSettings_mCollisionTolerance_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JoltC_CharacterVirtualSettings_mCollisionTolerance_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mCollisionTolerance
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JoltC_CharacterVirtualSettings_mCharacterPadding_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mCharacterPadding;
  return result;
};

void JoltC_CharacterVirtualSettings_mCharacterPadding_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mCharacterPadding
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mCharacterPadding = mCharacterPadding;
};

unsigned long JoltC_CharacterVirtualSettings_mMaxNumHits_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxNumHits;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxNumHits_Set(
  JoltC_CharacterVirtualSettings_t * self,
  unsigned long mMaxNumHits
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxNumHits = mMaxNumHits;
};

float JoltC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mHitReductionCosMaxAngle;
  return result;
};

void JoltC_CharacterVirtualSettings_mHitReductionCosMaxAngle_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mHitReductionCosMaxAngle
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mHitReductionCosMaxAngle = mHitReductionCosMaxAngle;
};

float JoltC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mPenetrationRecoverySpeed;
  return result;
};

void JoltC_CharacterVirtualSettings_mPenetrationRecoverySpeed_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mPenetrationRecoverySpeed
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mPenetrationRecoverySpeed = mPenetrationRecoverySpeed;
};

JoltC_Vec3_t * JoltC_CharacterVirtualSettings_mUp_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mUp;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CharacterVirtualSettings_mUp_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Vec3_t * mUp
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mUp = *reinterpret_cast<Vec3 *>(mUp->obj);
};

JoltC_Plane_t * JoltC_CharacterVirtualSettings_mSupportingVolume_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  Plane resultValue = selfCpp->mSupportingVolume;
  Plane* result = new Plane(resultValue);
  return reinterpret_cast<JoltC_Plane_t *>(result);
};

void JoltC_CharacterVirtualSettings_mSupportingVolume_Set(
  JoltC_CharacterVirtualSettings_t * self,
  JoltC_Plane_t * mSupportingVolume
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mSupportingVolume = *reinterpret_cast<Plane *>(mSupportingVolume->obj);
};

float JoltC_CharacterVirtualSettings_mMaxSlopeAngle_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  float result = selfCpp->mMaxSlopeAngle;
  return result;
};

void JoltC_CharacterVirtualSettings_mMaxSlopeAngle_Set(
  JoltC_CharacterVirtualSettings_t * self,
  float mMaxSlopeAngle
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mMaxSlopeAngle = mMaxSlopeAngle;
};

const JoltC_Shape_t * JoltC_CharacterVirtualSettings_mShape_Get(
  JoltC_CharacterVirtualSettings_t * self
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  const Shape * result = selfCpp->mShape;
  return reinterpret_cast<const JoltC_Shape_t *>(result);
};

const void JoltC_CharacterVirtualSettings_mShape_Set(
  JoltC_CharacterVirtualSettings_t * self,
  const JoltC_Shape_t * mShape
) {
  CharacterVirtualSettings * selfCpp = static_cast<CharacterVirtualSettings *>(self->obj);
  selfCpp->mShape = reinterpret_cast<Shape *>(mShape->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

