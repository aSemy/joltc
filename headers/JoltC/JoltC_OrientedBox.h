#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_OrientedBox_t * JoltC_OrientedBox_new_0();

JoltC_OrientedBox_t * JoltC_OrientedBox_new_1(
  const JoltC_Mat44_t * inOrientation,
  const JoltC_Vec3_t * inHalfExtents
);

//endregion

//region properties

JoltC_Mat44_t * JoltC_OrientedBox_mOrientation_Get(
  JoltC_OrientedBox_t * self
);

void JoltC_OrientedBox_mOrientation_Set(
  JoltC_OrientedBox_t * self,
  JoltC_Mat44_t * mOrientation
);

JoltC_Vec3_t * JoltC_OrientedBox_mHalfExtents_Get(
  JoltC_OrientedBox_t * self
);

void JoltC_OrientedBox_mHalfExtents_Set(
  JoltC_OrientedBox_t * self,
  JoltC_Vec3_t * mHalfExtents
);

//endregion


#ifdef __cplusplus
}
#endif

