#include "JoltC/JoltC_CollisionGroup.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_0() {
  JoltC_CollisionGroup_t * cInstance = new JoltC_CollisionGroup_t();
  CollisionGroup * cppInstance = new CollisionGroup();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_CollisionGroup_t * JoltC_CollisionGroup_new_1(
  JoltC_GroupFilter_t * inFilter,
  unsigned long inGroupID,
  unsigned long inSubGroupID
) {
  JoltC_CollisionGroup_t * cInstance = new JoltC_CollisionGroup_t();
  CollisionGroup * cppInstance = new CollisionGroup(
    reinterpret_cast<GroupFilter *>(inFilter->obj),
    inGroupID,
    inSubGroupID
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_CollisionGroup_SetGroupFilter(
  JoltC_CollisionGroup_t * self,
  JoltC_GroupFilter_t * inFilter
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  
  selfCpp->SetGroupFilter(
  reinterpret_cast<GroupFilter *>(inFilter->obj)
  );
};

const JoltC_GroupFilter_t * JoltC_CollisionGroup_GetGroupFilter(
  JoltC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  const GroupFilter * result = selfCpp->GetGroupFilter();
  return reinterpret_cast<const JoltC_GroupFilter_t *>(result);
};

void JoltC_CollisionGroup_SetGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inGroupID
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  
  selfCpp->SetGroupID(
  inGroupID
  );
};

unsigned long JoltC_CollisionGroup_GetGroupID(
  JoltC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  unsigned long result = selfCpp->GetGroupID();
  return result;
};

void JoltC_CollisionGroup_SetSubGroupID(
  JoltC_CollisionGroup_t * self,
  unsigned long inSubGroupID
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  
  selfCpp->SetSubGroupID(
  inSubGroupID
  );
};

unsigned long JoltC_CollisionGroup_GetSubGroupID(
  JoltC_CollisionGroup_t * self
) {
  CollisionGroup * selfCpp = static_cast<CollisionGroup *>(self->obj);
  unsigned long result = selfCpp->GetSubGroupID();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

