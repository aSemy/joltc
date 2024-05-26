#include "JoltC/JoltC_SoftBodySharedSettingsFace.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsFace_t * JoltC_SoftBodySharedSettingsFace_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inMaterialIndex
) {
  JoltC_SoftBodySharedSettingsFace_t * cInstance = new JoltC_SoftBodySharedSettingsFace_t();
  SoftBodySharedSettingsFace * cppInstance = new SoftBodySharedSettingsFace(
    inVertex1,
    inVertex2,
    inVertex3,
    inMaterialIndex
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

size_t JoltC_SoftBodySharedSettingsFace_mVertex_Get(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long * outValue
) {
  SoftBodySharedSettingsFace * selfCpp = static_cast<SoftBodySharedSettingsFace *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
  return resultSize;
};

void JoltC_SoftBodySharedSettingsFace_mVertex_Set(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
) {
  SoftBodySharedSettingsFace * selfCpp = static_cast<SoftBodySharedSettingsFace *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
};

unsigned long JoltC_SoftBodySharedSettingsFace_mMaterialIndex_Get(
  JoltC_SoftBodySharedSettingsFace_t * self
) {
  SoftBodySharedSettingsFace * selfCpp = static_cast<SoftBodySharedSettingsFace *>(self->obj);
  unsigned long result = selfCpp->mMaterialIndex;
  return result;
};

void JoltC_SoftBodySharedSettingsFace_mMaterialIndex_Set(
  JoltC_SoftBodySharedSettingsFace_t * self,
  unsigned long mMaterialIndex
) {
  SoftBodySharedSettingsFace * selfCpp = static_cast<SoftBodySharedSettingsFace *>(self->obj);
  selfCpp->mMaterialIndex = mMaterialIndex;
};

//endregion

#ifdef __cplusplus
}
#endif

