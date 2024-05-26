#include "JoltC/JoltC_ObjectLayerPairFilterTable.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilterTable_t * JoltC_ObjectLayerPairFilterTable_new(
  unsigned long inNumObjectLayers
) {
  JoltC_ObjectLayerPairFilterTable_t * cInstance = new JoltC_ObjectLayerPairFilterTable_t();
  ObjectLayerPairFilterTable * cppInstance = new ObjectLayerPairFilterTable(
    inNumObjectLayers
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_ObjectLayerPairFilterTable_GetNumObjectLayers(
  JoltC_ObjectLayerPairFilterTable_t * self
) {
  ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
  unsigned long result = selfCpp->GetNumObjectLayers();
  return result;
};

void JoltC_ObjectLayerPairFilterTable_DisableCollision(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
  
  selfCpp->DisableCollision(
    inLayer1,
    inLayer2
  );
};

void JoltC_ObjectLayerPairFilterTable_EnableCollision(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
  
  selfCpp->EnableCollision(
    inLayer1,
    inLayer2
  );
};

bool JoltC_ObjectLayerPairFilterTable_ShouldCollide(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2
) {
  ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
  bool result = selfCpp->ShouldCollide(
    inLayer1,
    inLayer2
  );
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

