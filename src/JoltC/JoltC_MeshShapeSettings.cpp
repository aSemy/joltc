#include "JoltC/JoltC_MeshShapeSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_0() {
  JoltC_MeshShapeSettings_t * cInstance = new JoltC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_1(
  const JoltC_TriangleList_t * inTriangleList,
  const JoltC_PhysicsMaterialList_t * inMaterialList
) {
  JoltC_MeshShapeSettings_t * cInstance = new JoltC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings(
    *reinterpret_cast<TriangleList *>(inTriangleList->obj),
    *reinterpret_cast<PhysicsMaterialList *>(inMaterialList->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_2(
  const JoltC_VertexList_t * inVertices,
  const JoltC_IndexedTriangleList_t * inTriangles,
  const JoltC_PhysicsMaterialList_t * inMaterialList
) {
  JoltC_MeshShapeSettings_t * cInstance = new JoltC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings(
    *reinterpret_cast<VertexList *>(inVertices->obj),
    *reinterpret_cast<IndexedTriangleList *>(inTriangles->obj),
    *reinterpret_cast<PhysicsMaterialList *>(inMaterialList->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_MeshShapeSettings_Sanitize(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  
  selfCpp->Sanitize();
};

unsigned long JoltC_MeshShapeSettings_GetRefCount(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_MeshShapeSettings_AddRef(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_MeshShapeSettings_Release(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JoltC_Shape_ShapeResult_t * JoltC_MeshShapeSettings_Create(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
};

void JoltC_MeshShapeSettings_ClearCachedResult(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion

//region properties

JoltC_VertexList_t * JoltC_MeshShapeSettings_mTriangleVertices_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  VertexList resultValue = selfCpp->mTriangleVertices;
  VertexList* result = new VertexList(resultValue);
  return reinterpret_cast<JoltC_VertexList_t *>(result);
};

void JoltC_MeshShapeSettings_mTriangleVertices_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_VertexList_t * mTriangleVertices
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mTriangleVertices = *reinterpret_cast<VertexList *>(mTriangleVertices->obj);
};

JoltC_IndexedTriangleList_t * JoltC_MeshShapeSettings_mIndexedTriangles_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  IndexedTriangleList resultValue = selfCpp->mIndexedTriangles;
  IndexedTriangleList* result = new IndexedTriangleList(resultValue);
  return reinterpret_cast<JoltC_IndexedTriangleList_t *>(result);
};

void JoltC_MeshShapeSettings_mIndexedTriangles_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_IndexedTriangleList_t * mIndexedTriangles
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mIndexedTriangles = *reinterpret_cast<IndexedTriangleList *>(mIndexedTriangles->obj);
};

JoltC_PhysicsMaterialList_t * JoltC_MeshShapeSettings_mMaterials_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  PhysicsMaterialList resultValue = selfCpp->mMaterials;
  PhysicsMaterialList* result = new PhysicsMaterialList(resultValue);
  return reinterpret_cast<JoltC_PhysicsMaterialList_t *>(result);
};

void JoltC_MeshShapeSettings_mMaterials_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mMaterials = *reinterpret_cast<PhysicsMaterialList *>(mMaterials->obj);
};

unsigned long JoltC_MeshShapeSettings_mMaxTrianglesPerLeaf_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxTrianglesPerLeaf;
  return result;
};

void JoltC_MeshShapeSettings_mMaxTrianglesPerLeaf_Set(
  JoltC_MeshShapeSettings_t * self,
  unsigned long mMaxTrianglesPerLeaf
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mMaxTrianglesPerLeaf = mMaxTrianglesPerLeaf;
};

float JoltC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  float result = selfCpp->mActiveEdgeCosThresholdAngle;
  return result;
};

void JoltC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JoltC_MeshShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeCosThresholdAngle = mActiveEdgeCosThresholdAngle;
};

unsigned long long int JoltC_MeshShapeSettings_mUserData_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JoltC_MeshShapeSettings_mUserData_Set(
  JoltC_MeshShapeSettings_t * self,
  unsigned long long int mUserData
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion

#ifdef __cplusplus
}
#endif

