#include "JoltC/JoltC_TriangleList.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_TriangleList_t * JoltC_TriangleList_new() {
  JoltC_TriangleList_t * cInstance = new JoltC_TriangleList_t();
  TriangleList * cppInstance = new TriangleList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_TriangleList_empty(
  JoltC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_TriangleList_size(
  JoltC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_Triangle_t * JoltC_TriangleList_at(
  JoltC_TriangleList_t * self,
  long inIndex
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  Triangle& resultRef = selfCpp->at(
  inIndex
  );
  Triangle * result = &resultRef;
  return reinterpret_cast<JoltC_Triangle_t *>(result);
};

void JoltC_TriangleList_push_back(
  JoltC_TriangleList_t * self,
  const JoltC_Triangle_t * inTriangle
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<Triangle *>(inTriangle->obj)
  );
};

void JoltC_TriangleList_reserve(
  JoltC_TriangleList_t * self,
  unsigned long inSize
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JoltC_TriangleList_resize(
  JoltC_TriangleList_t * self,
  unsigned long inSize
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JoltC_TriangleList_clear(
  JoltC_TriangleList_t * self
) {
  TriangleList * selfCpp = static_cast<TriangleList *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

