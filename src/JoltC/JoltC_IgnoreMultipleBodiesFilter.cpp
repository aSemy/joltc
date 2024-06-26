#include "JoltC/JoltC_IgnoreMultipleBodiesFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `IgnoreMultipleBodiesFilter` instance.
 */
JoltC_IgnoreMultipleBodiesFilter_t * JoltC_IgnoreMultipleBodiesFilter_new() {
  JoltC_IgnoreMultipleBodiesFilter_t * cInstance = new JoltC_IgnoreMultipleBodiesFilter_t();
  IgnoreMultipleBodiesFilter * cppInstance = new IgnoreMultipleBodiesFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_IgnoreMultipleBodiesFilter_destroy(
  JoltC_IgnoreMultipleBodiesFilter_t * self
){
  if (self == NULL) return;
  delete static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_IgnoreMultipleBodiesFilter_Clear(
  JoltC_IgnoreMultipleBodiesFilter_t * self
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  selfCpp->Clear();
}

void JoltC_IgnoreMultipleBodiesFilter_Reserve(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  unsigned long inSize
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  selfCpp->Reserve(
    inSize
  );
}

void JoltC_IgnoreMultipleBodiesFilter_IgnoreBody(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  JoltC_BodyID_t * inBodyID
) {
  IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
  const BodyID * inBodyIDCpp = static_cast<const BodyID *>(inBodyID->obj);
  selfCpp->IgnoreBody(
    *inBodyIDCpp
  );
}

//endregion


#ifdef __cplusplus
}
#endif
