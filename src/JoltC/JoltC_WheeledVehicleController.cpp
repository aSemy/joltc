#include "JoltC/JoltC_WheeledVehicleController.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_WheeledVehicleController_t * JoltC_WheeledVehicleController_new(
  const JoltC_WheeledVehicleControllerSettings_t * inSettings,
  JoltC_VehicleConstraint_t * inConstraint
) {
  JoltC_WheeledVehicleController_t * cInstance = new JoltC_WheeledVehicleController_t();
  WheeledVehicleController * cppInstance = new WheeledVehicleController(
    *reinterpret_cast<WheeledVehicleControllerSettings *>(inSettings->obj),
    *reinterpret_cast<VehicleConstraint *>(inConstraint->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region converters

/**
 * Convert an instance of JoltC_MotorcycleController_t into JoltC_WheeledVehicleController_t.
 */
JoltC_WheeledVehicleController_t * JoltC_WheeledVehicleController_From_MotorcycleController(
  JoltC_MotorcycleController_t * subtype
) {
  return (JoltC_WheeledVehicleController_t*) subtype;
};

//endregion

//region functions

void JoltC_WheeledVehicleController_SetDriverInput(
  JoltC_WheeledVehicleController_t * self,
  float inForward,
  float inRight,
  float inBrake,
  float inHandBrake
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetDriverInput(
  inForward,
  inRight,
  inBrake,
  inHandBrake
  );
};

void JoltC_WheeledVehicleController_SetForwardInput(
  JoltC_WheeledVehicleController_t * self,
  float inForward
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetForwardInput(
  inForward
  );
};

float JoltC_WheeledVehicleController_GetForwardInput(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetForwardInput();
  return result;
};

void JoltC_WheeledVehicleController_SetRightInput(
  JoltC_WheeledVehicleController_t * self,
  float inRight
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetRightInput(
  inRight
  );
};

float JoltC_WheeledVehicleController_GetRightInput(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetRightInput();
  return result;
};

void JoltC_WheeledVehicleController_SetBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  float inBrake
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetBrakeInput(
  inBrake
  );
};

float JoltC_WheeledVehicleController_GetBrakeInput(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetBrakeInput();
  return result;
};

void JoltC_WheeledVehicleController_SetHandBrakeInput(
  JoltC_WheeledVehicleController_t * self,
  float inHandBrake
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetHandBrakeInput(
  inHandBrake
  );
};

float JoltC_WheeledVehicleController_GetHandBrakeInput(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetHandBrakeInput();
  return result;
};

JoltC_VehicleEngine_t * JoltC_WheeledVehicleController_GetEngine(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  VehicleEngine& resultRef = selfCpp->GetEngine();
  VehicleEngine * result = &resultRef;
  return reinterpret_cast<JoltC_VehicleEngine_t *>(result);
};

JoltC_VehicleTransmission_t * JoltC_WheeledVehicleController_GetTransmission(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  VehicleTransmission& resultRef = selfCpp->GetTransmission();
  VehicleTransmission * result = &resultRef;
  return reinterpret_cast<JoltC_VehicleTransmission_t *>(result);
};

JoltC_ArrayVehicleDifferentialSettings_t * JoltC_WheeledVehicleController_GetDifferentials(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  ArrayVehicleDifferentialSettings& resultRef = selfCpp->GetDifferentials();
  ArrayVehicleDifferentialSettings * result = &resultRef;
  return reinterpret_cast<JoltC_ArrayVehicleDifferentialSettings_t *>(result);
};

float JoltC_WheeledVehicleController_GetDifferentialLimitedSlipRatio(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetDifferentialLimitedSlipRatio();
  return result;
};

void JoltC_WheeledVehicleController_SetDifferentialLimitedSlipRatio(
  JoltC_WheeledVehicleController_t * self,
  float inV
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->SetDifferentialLimitedSlipRatio(
  inV
  );
};

float JoltC_WheeledVehicleController_GetWheelSpeedAtClutch(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  float result = selfCpp->GetWheelSpeedAtClutch();
  return result;
};

unsigned long JoltC_WheeledVehicleController_GetRefCount(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_WheeledVehicleController_AddRef(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_WheeledVehicleController_Release(
  JoltC_WheeledVehicleController_t * self
) {
  WheeledVehicleController * selfCpp = static_cast<WheeledVehicleController *>(self->obj);
  
  selfCpp->Release();
};

//endregion

#ifdef __cplusplus
}
#endif

