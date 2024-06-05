#include "JoltC/JoltC_BroadPhaseCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseCastResult_t * JoltC_BroadPhaseCastResult_new() {
  JoltC_BroadPhaseCastResult_t * cInstance = new JoltC_BroadPhaseCastResult_t();
  BroadPhaseCastResult * cppInstance = new BroadPhaseCastResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region converters

/**
 * Convert an instance of JoltC_RayCastResult_t into JoltC_BroadPhaseCastResult_t.
 */
JoltC_BroadPhaseCastResult_t * JoltC_BroadPhaseCastResult_From_RayCastResult(
  JoltC_RayCastResult_t * subtype
) {
  return (JoltC_BroadPhaseCastResult_t*) subtype;
};

//endregion

//region functions

void JoltC_BroadPhaseCastResult_Reset(
  JoltC_BroadPhaseCastResult_t * self
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  selfCpp->Reset();
};

//endregion

//region properties

JoltC_BodyID_t * JoltC_BroadPhaseCastResult_mBodyID_Get(
  JoltC_BroadPhaseCastResult_t * self
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  const BodyID& resultValue = selfCpp->mBodyID;
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_BroadPhaseCastResult_mBodyID_Set(
  JoltC_BroadPhaseCastResult_t * self,
  JoltC_BodyID_t * mBodyID
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  selfCpp->mBodyID = *reinterpret_cast<BodyID *>(mBodyID->obj);
};

float JoltC_BroadPhaseCastResult_mFraction_Get(
  JoltC_BroadPhaseCastResult_t * self
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  float result = selfCpp->mFraction;
  return result;
};

void JoltC_BroadPhaseCastResult_mFraction_Set(
  JoltC_BroadPhaseCastResult_t * self,
  float mFraction
) {
  BroadPhaseCastResult * selfCpp = static_cast<BroadPhaseCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
};

//endregion

#ifdef __cplusplus
}
#endif

