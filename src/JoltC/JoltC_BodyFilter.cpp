#include "JoltC/JoltC_BodyFilter.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyFilter_t * JoltC_BodyFilter_new() {
  JoltC_BodyFilter_t * cInstance = new JoltC_BodyFilter_t();
  BodyFilter * cppInstance = new BodyFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region converters

/**
 * Convert an instance of JoltC_IgnoreSingleBodyFilter_t into JoltC_BodyFilter_t.
 */
JoltC_BodyFilter_t * JoltC_BodyFilter_From_IgnoreSingleBodyFilter(
  JoltC_IgnoreSingleBodyFilter_t * subtype
) {
  return (JoltC_BodyFilter_t*) subtype;
};

/**
 * Convert an instance of JoltC_IgnoreMultipleBodiesFilter_t into JoltC_BodyFilter_t.
 */
JoltC_BodyFilter_t * JoltC_BodyFilter_From_IgnoreMultipleBodiesFilter(
  JoltC_IgnoreMultipleBodiesFilter_t * subtype
) {
  return (JoltC_BodyFilter_t*) subtype;
};

//endregion

#ifdef __cplusplus
}
#endif

