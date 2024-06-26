#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeGetTriangles_t * JoltC_ShapeGetTriangles_new(
  JoltC_Shape_t * inShape,
  JoltC_AABox_t * inBox,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale
);

//endregion

//region destructor

void JoltC_ShapeGetTriangles_destroy(
  JoltC_ShapeGetTriangles_t * self
);

//endregion
//region functions

long JoltC_ShapeGetTriangles_GetNumTriangles(
  JoltC_ShapeGetTriangles_t * self
);

long JoltC_ShapeGetTriangles_GetVerticesSize(
  JoltC_ShapeGetTriangles_t * self
);

const void* JoltC_ShapeGetTriangles_GetVerticesData(
  JoltC_ShapeGetTriangles_t * self
);

JoltC_PhysicsMaterial_t * JoltC_ShapeGetTriangles_GetMaterial(
  JoltC_ShapeGetTriangles_t * self,
  long inTriangle
);

//endregion


#ifdef __cplusplus
}
#endif
