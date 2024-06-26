#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_AABox_t * JoltC_AABox_new_0();

JoltC_AABox_t * JoltC_AABox_new_1(
  JoltC_Vec3_t * inMin,
  JoltC_Vec3_t * inMax
);

//endregion

//region destructor

void JoltC_AABox_destroy(
  JoltC_AABox_t * self
);

//endregion
//region functions

JoltC_AABox_t * JoltC_AABox_sBiggest();

bool JoltC_AABox_Overlaps(
  JoltC_AABox_t * self,
  JoltC_AABox_t * inOther
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_AABox_mMin_Get(
  JoltC_AABox_t * self
);

void JoltC_AABox_mMin_Set(
  JoltC_AABox_t * self,
  JoltC_Vec3_t * mMin
);

JoltC_Vec3_t * JoltC_AABox_mMax_Get(
  JoltC_AABox_t * self
);

void JoltC_AABox_mMax_Set(
  JoltC_AABox_t * self,
  JoltC_Vec3_t * mMax
);

//endregion


#ifdef __cplusplus
}
#endif
