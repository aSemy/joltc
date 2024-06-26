#include "JoltC/JoltC_CollideShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollideShapeSettings` instance.
 */
JoltC_CollideShapeSettings_t * JoltC_CollideShapeSettings_new() {
  JoltC_CollideShapeSettings_t * cInstance = new JoltC_CollideShapeSettings_t();
  CollideShapeSettings * cppInstance = new CollideShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CollideShapeSettings_destroy(
  JoltC_CollideShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<CollideShapeSettings *>(self->obj);
  free(self);
}

//endregion
//region properties

float JoltC_CollideShapeSettings_mMaxSeparationDistance_Get(
  JoltC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  return selfCpp->mMaxSeparationDistance;
}

void JoltC_CollideShapeSettings_mMaxSeparationDistance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mMaxSeparationDistance
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mMaxSeparationDistance = mMaxSeparationDistance;
}

JoltC_EBackFaceMode JoltC_CollideShapeSettings_mBackFaceMode_Get(
  JoltC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JoltC_EBackFaceMode>(static_cast<int>(result));
}

void JoltC_CollideShapeSettings_mBackFaceMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
}

JoltC_EActiveEdgeMode JoltC_CollideShapeSettings_mActiveEdgeMode_Get(
  JoltC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  EActiveEdgeMode result = selfCpp->mActiveEdgeMode;
  return static_cast<JoltC_EActiveEdgeMode>(static_cast<int>(result));
}

void JoltC_CollideShapeSettings_mActiveEdgeMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeMode = static_cast<EActiveEdgeMode>(static_cast<int>(mActiveEdgeMode));
}

JoltC_ECollectFacesMode JoltC_CollideShapeSettings_mCollectFacesMode_Get(
  JoltC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  ECollectFacesMode result = selfCpp->mCollectFacesMode;
  return static_cast<JoltC_ECollectFacesMode>(static_cast<int>(result));
}

void JoltC_CollideShapeSettings_mCollectFacesMode_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mCollectFacesMode = static_cast<ECollectFacesMode>(static_cast<int>(mCollectFacesMode));
}

float JoltC_CollideShapeSettings_mCollisionTolerance_Get(
  JoltC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  return selfCpp->mCollisionTolerance;
}

void JoltC_CollideShapeSettings_mCollisionTolerance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mCollisionTolerance
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
}

float JoltC_CollideShapeSettings_mPenetrationTolerance_Get(
  JoltC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  return selfCpp->mPenetrationTolerance;
}

void JoltC_CollideShapeSettings_mPenetrationTolerance_Set(
  JoltC_CollideShapeSettings_t * self,
  float mPenetrationTolerance
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mPenetrationTolerance = mPenetrationTolerance;
}

JoltC_Vec3_t * JoltC_CollideShapeSettings_mActiveEdgeMovementDirection_Get(
  JoltC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mActiveEdgeMovementDirection;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeSettings_mActiveEdgeMovementDirection_Set(
  JoltC_CollideShapeSettings_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeMovementDirection = *static_cast<Vec3 *>(mActiveEdgeMovementDirection->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
