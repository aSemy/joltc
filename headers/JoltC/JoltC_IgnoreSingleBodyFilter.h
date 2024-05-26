#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreSingleBodyFilter_t * JoltC_IgnoreSingleBodyFilter_new(
  JoltC_BodyID_t * inBodyID
);

//endregion


#ifdef __cplusplus
}
#endif

