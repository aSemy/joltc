#include "JoltC/JoltC_TrackedVehicleController.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `TrackedVehicleController` instance.
 */
JoltC_TrackedVehicleController_t * JoltC_TrackedVehicleController_new(
  JoltC_TrackedVehicleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint
) {
  const TrackedVehicleControllerSettings * inSettingsCpp = static_cast<const TrackedVehicleControllerSettings *>(inSettings->obj);
  VehicleConstraint * inConstraintCpp = static_cast<VehicleConstraint *>(inConstraint->obj);
  JoltC_TrackedVehicleController_t * cInstance = new JoltC_TrackedVehicleController_t();
  TrackedVehicleController * cppInstance = new TrackedVehicleController(
    *inSettingsCpp,
    *inConstraintCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_TrackedVehicleController_destroy(
  JoltC_TrackedVehicleController_t * self
){
  if (self == NULL) return;
  delete static_cast<TrackedVehicleController *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_TrackedVehicleController_SetDriverInput(
  JoltC_TrackedVehicleController_t * self,
  float inForward,
  float inLeftRatio,
  float inRightRatio,
  float inBrake
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  selfCpp->SetDriverInput(
    inForward,
    inLeftRatio,
    inRightRatio,
    inBrake
  );
}

void JoltC_TrackedVehicleController_SetForwardInput(
  JoltC_TrackedVehicleController_t * self,
  float inForward
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  selfCpp->SetForwardInput(
    inForward
  );
}

float JoltC_TrackedVehicleController_GetForwardInput(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  return selfCpp->GetForwardInput();
}

void JoltC_TrackedVehicleController_SetLeftRatio(
  JoltC_TrackedVehicleController_t * self,
  float inLeftRatio
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  selfCpp->SetLeftRatio(
    inLeftRatio
  );
}

float JoltC_TrackedVehicleController_GetLeftRatio(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  return selfCpp->GetLeftRatio();
}

void JoltC_TrackedVehicleController_SetRightRatio(
  JoltC_TrackedVehicleController_t * self,
  float inRightRatio
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  selfCpp->SetRightRatio(
    inRightRatio
  );
}

float JoltC_TrackedVehicleController_GetRightRatio(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  return selfCpp->GetRightRatio();
}

void JoltC_TrackedVehicleController_SetBrakeInput(
  JoltC_TrackedVehicleController_t * self,
  float inBrake
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  selfCpp->SetBrakeInput(
    inBrake
  );
}

float JoltC_TrackedVehicleController_GetBrakeInput(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  return selfCpp->GetBrakeInput();
}

JoltC_VehicleEngine_t * JoltC_TrackedVehicleController_GetEngine(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  VehicleEngine* resultRef = &selfCpp->GetEngine();
  JoltC_VehicleEngine_t* result = new JoltC_VehicleEngine_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_VehicleTransmission_t * JoltC_TrackedVehicleController_GetTransmission(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  VehicleTransmission* resultRef = &selfCpp->GetTransmission();
  JoltC_VehicleTransmission_t* result = new JoltC_VehicleTransmission_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

size_t JoltC_TrackedVehicleController_GetTracks(
  JoltC_TrackedVehicleController_t * self,
  JoltC_VehicleTrack_t * * outValue
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  VehicleTrack * values = selfCpp->GetTracks();
  size_t resultSize = std::size(selfCpp->GetTracks());
  for (size_t i = 0; i < resultSize; ++i) {
    JoltC_VehicleTrack_t * element = new JoltC_VehicleTrack_t();
    element->obj = &(selfCpp->GetTracks()[i]);
    outValue[i] = element;
    return resultSize;
  };
}

unsigned long JoltC_TrackedVehicleController_GetRefCount(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_TrackedVehicleController_AddRef(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_TrackedVehicleController_Release(
  JoltC_TrackedVehicleController_t * self
) {
  TrackedVehicleController * selfCpp = static_cast<TrackedVehicleController *>(self->obj);
  selfCpp->Release();
}

//endregion


#ifdef __cplusplus
}
#endif
