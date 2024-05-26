#include "JoltC/JoltC_ShapeFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeFilter_t * JoltC_ShapeFilter_new() {
  JoltC_ShapeFilter_t * cInstance = new JoltC_ShapeFilter_t();
  ShapeFilter * cppInstance = new ShapeFilter();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

#ifdef __cplusplus
}
#endif

