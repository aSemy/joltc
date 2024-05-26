#include "JoltC/JoltC_IndexedTriangle.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IndexedTriangle_t * JoltC_IndexedTriangle_new_0() {
  JoltC_IndexedTriangle_t * cInstance = new JoltC_IndexedTriangle_t();
  IndexedTriangle * cppInstance = new IndexedTriangle();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_IndexedTriangle_t * JoltC_IndexedTriangle_new_1(
  unsigned long inI1,
  unsigned long inI2,
  unsigned long inI3,
  unsigned long inMaterialIndex
) {
  JoltC_IndexedTriangle_t * cInstance = new JoltC_IndexedTriangle_t();
  IndexedTriangle * cppInstance = new IndexedTriangle(
    inI1,
    inI2,
    inI3,
    inMaterialIndex
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

size_t JoltC_IndexedTriangle_mIdx_Get(
  JoltC_IndexedTriangle_t * self,
  unsigned long * outValue
) {
  IndexedTriangle * selfCpp = static_cast<IndexedTriangle *>(self->obj);
  size_t resultSize = std::size(selfCpp->mIdx);
  // TODO get result array...
  return resultSize;
};

void JoltC_IndexedTriangle_mIdx_Set(
  JoltC_IndexedTriangle_t * self,
  unsigned long * mIdx,
  size_t mIdxSize
) {
  IndexedTriangle * selfCpp = static_cast<IndexedTriangle *>(self->obj);
  for (size_t i = 0; i < mIdxSize; i++) {
    selfCpp->mIdx[i] = mIdx[i];
  };
};

unsigned long JoltC_IndexedTriangle_mMaterialIndex_Get(
  JoltC_IndexedTriangle_t * self
) {
  IndexedTriangle * selfCpp = static_cast<IndexedTriangle *>(self->obj);
  unsigned long result = selfCpp->mMaterialIndex;
  return result;
};

void JoltC_IndexedTriangle_mMaterialIndex_Set(
  JoltC_IndexedTriangle_t * self,
  unsigned long mMaterialIndex
) {
  IndexedTriangle * selfCpp = static_cast<IndexedTriangle *>(self->obj);
  selfCpp->mMaterialIndex = mMaterialIndex;
};

//endregion

#ifdef __cplusplus
}
#endif

