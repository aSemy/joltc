#include "JoltC/JoltC_VehicleControllerSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_WheeledVehicleControllerSettings_t into JoltC_VehicleControllerSettings_t.
 */
JoltC_VehicleControllerSettings_t * JoltC_VehicleControllerSettings_From_WheeledVehicleControllerSettings(
  JoltC_WheeledVehicleControllerSettings_t * subtype
) {
  return (JoltC_VehicleControllerSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_TrackedVehicleControllerSettings_t into JoltC_VehicleControllerSettings_t.
 */
JoltC_VehicleControllerSettings_t * JoltC_VehicleControllerSettings_From_TrackedVehicleControllerSettings(
  JoltC_TrackedVehicleControllerSettings_t * subtype
) {
  return (JoltC_VehicleControllerSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_MotorcycleControllerSettings_t into JoltC_VehicleControllerSettings_t.
 */
JoltC_VehicleControllerSettings_t * JoltC_VehicleControllerSettings_From_MotorcycleControllerSettings(
  JoltC_MotorcycleControllerSettings_t * subtype
) {
  return (JoltC_VehicleControllerSettings_t*) subtype;
};

//endregion

#ifdef __cplusplus
}
#endif

