#include "JoltC/JoltC_CollideShapeCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_CollideShapeCollector_destroy(
  JoltC_CollideShapeCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CollideShapeCollector *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_CollideShapeAllHitCollisionCollector_t into JoltC_CollideShapeCollector_t.
 */
JoltC_CollideShapeCollector_t * JoltC_CollideShapeCollector_From_CollideShapeAllHitCollisionCollector(
  JoltC_CollideShapeAllHitCollisionCollector_t * subtype
) {
  return (JoltC_CollideShapeCollector_t*) subtype;
};

/**
 * Convert an instance of JoltC_CollideShapeClosestHitCollisionCollector_t into JoltC_CollideShapeCollector_t.
 */
JoltC_CollideShapeCollector_t * JoltC_CollideShapeCollector_From_CollideShapeClosestHitCollisionCollector(
  JoltC_CollideShapeClosestHitCollisionCollector_t * subtype
) {
  return (JoltC_CollideShapeCollector_t*) subtype;
};

/**
 * Convert an instance of JoltC_CollideShapeAnyHitCollisionCollector_t into JoltC_CollideShapeCollector_t.
 */
JoltC_CollideShapeCollector_t * JoltC_CollideShapeCollector_From_CollideShapeAnyHitCollisionCollector(
  JoltC_CollideShapeAnyHitCollisionCollector_t * subtype
) {
  return (JoltC_CollideShapeCollector_t*) subtype;
};

//endregion

//region functions

void JoltC_CollideShapeCollector_Reset(
  JoltC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollideShapeCollector_SetContext(
  JoltC_CollideShapeCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollideShapeCollector_GetContext(
  JoltC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollideShapeCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  float inFraction
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  float inFraction
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeCollector_ForceEarlyOut(
  JoltC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollideShapeCollector_ShouldEarlyOut(
  JoltC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollideShapeCollector_GetEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollideShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion


#ifdef __cplusplus
}
#endif
