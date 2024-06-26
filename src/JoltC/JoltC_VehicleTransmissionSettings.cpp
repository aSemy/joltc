#include "JoltC/JoltC_VehicleTransmissionSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_VehicleTransmissionSettings_destroy(
  JoltC_VehicleTransmissionSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<VehicleTransmissionSettings *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_VehicleTransmission_t into JoltC_VehicleTransmissionSettings_t.
 */
JoltC_VehicleTransmissionSettings_t * JoltC_VehicleTransmissionSettings_From_VehicleTransmission(
  JoltC_VehicleTransmission_t * subtype
) {
  return (JoltC_VehicleTransmissionSettings_t*) subtype;
};

//endregion

//region properties

JoltC_ETransmissionMode JoltC_VehicleTransmissionSettings_mMode_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ETransmissionMode result = selfCpp->mMode;
  return static_cast<JoltC_ETransmissionMode>(static_cast<int>(result));
}

void JoltC_VehicleTransmissionSettings_mMode_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ETransmissionMode mMode
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mMode = static_cast<ETransmissionMode>(static_cast<int>(mMode));
}

JoltC_ArrayFloat_t * JoltC_VehicleTransmissionSettings_mGearRatios_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ArrayFloat * resultPtr = new ArrayFloat();
  *resultPtr = selfCpp->mGearRatios;
  JoltC_ArrayFloat_t * result = new JoltC_ArrayFloat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleTransmissionSettings_mGearRatios_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ArrayFloat_t * mGearRatios
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mGearRatios = *static_cast<ArrayFloat *>(mGearRatios->obj);
}

JoltC_ArrayFloat_t * JoltC_VehicleTransmissionSettings_mReverseGearRatios_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  ArrayFloat * resultPtr = new ArrayFloat();
  *resultPtr = selfCpp->mReverseGearRatios;
  JoltC_ArrayFloat_t * result = new JoltC_ArrayFloat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_VehicleTransmissionSettings_mReverseGearRatios_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  JoltC_ArrayFloat_t * mReverseGearRatios
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mReverseGearRatios = *static_cast<ArrayFloat *>(mReverseGearRatios->obj);
}

float JoltC_VehicleTransmissionSettings_mSwitchTime_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  return selfCpp->mSwitchTime;
}

void JoltC_VehicleTransmissionSettings_mSwitchTime_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mSwitchTime
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mSwitchTime = mSwitchTime;
}

float JoltC_VehicleTransmissionSettings_mClutchReleaseTime_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  return selfCpp->mClutchReleaseTime;
}

void JoltC_VehicleTransmissionSettings_mClutchReleaseTime_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mClutchReleaseTime
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mClutchReleaseTime = mClutchReleaseTime;
}

float JoltC_VehicleTransmissionSettings_mSwitchLatency_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  return selfCpp->mSwitchLatency;
}

void JoltC_VehicleTransmissionSettings_mSwitchLatency_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mSwitchLatency
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mSwitchLatency = mSwitchLatency;
}

float JoltC_VehicleTransmissionSettings_mShiftUpRPM_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  return selfCpp->mShiftUpRPM;
}

void JoltC_VehicleTransmissionSettings_mShiftUpRPM_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mShiftUpRPM
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mShiftUpRPM = mShiftUpRPM;
}

float JoltC_VehicleTransmissionSettings_mShiftDownRPM_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  return selfCpp->mShiftDownRPM;
}

void JoltC_VehicleTransmissionSettings_mShiftDownRPM_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mShiftDownRPM
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mShiftDownRPM = mShiftDownRPM;
}

float JoltC_VehicleTransmissionSettings_mClutchStrength_Get(
  JoltC_VehicleTransmissionSettings_t * self
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  return selfCpp->mClutchStrength;
}

void JoltC_VehicleTransmissionSettings_mClutchStrength_Set(
  JoltC_VehicleTransmissionSettings_t * self,
  float mClutchStrength
) {
  VehicleTransmissionSettings * selfCpp = static_cast<VehicleTransmissionSettings *>(self->obj);
  selfCpp->mClutchStrength = mClutchStrength;
}

//endregion


#ifdef __cplusplus
}
#endif
