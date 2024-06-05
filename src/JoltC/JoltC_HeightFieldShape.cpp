#include "JoltC/JoltC_HeightFieldShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_HeightFieldShape_GetSampleCount(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  long result = selfCpp->GetSampleCount();
  return result;
};

long JoltC_HeightFieldShape_GetBlockSize(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  long result = selfCpp->GetBlockSize();
  return result;
};

JoltC_Vec3_t * JoltC_HeightFieldShape_GetPosition(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const Vec3& resultValue = selfCpp->GetPosition(
    inX,
    inY
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

bool JoltC_HeightFieldShape_IsNoCollision(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  bool result = selfCpp->IsNoCollision(
    inX,
    inY
  );
  return result;
};

float JoltC_HeightFieldShape_GetMinHeightValue(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  float result = selfCpp->GetMinHeightValue();
  return result;
};

float JoltC_HeightFieldShape_GetMaxHeightValue(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  float result = selfCpp->GetMaxHeightValue();
  return result;
};

void JoltC_HeightFieldShape_GetHeights(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_FloatMemRef_t * outHeights,
  long inHeightsStride
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->GetHeights(
    inX,
    inY,
    inSizeX,
    inSizeY,
    reinterpret_cast<FloatMemRef *>(outHeights->obj),
    inHeightsStride
  );
};

void JoltC_HeightFieldShape_SetHeights(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_FloatMemRef_t * inHeights,
  long inHeightsStride,
  JoltC_TempAllocator_t * inAllocator,
  float inActiveEdgeCosThresholdAngle
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->SetHeights(
    inX,
    inY,
    inSizeX,
    inSizeY,
    reinterpret_cast<FloatMemRef *>(inHeights->obj),
    inHeightsStride,
    *reinterpret_cast<TempAllocator *>(inAllocator->obj),
    inActiveEdgeCosThresholdAngle
  );
};

void JoltC_HeightFieldShape_GetMaterials(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_Uint8MemRef_t * outMaterials,
  long inMaterialsStride
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->GetMaterials(
    inX,
    inY,
    inSizeX,
    inSizeY,
    reinterpret_cast<Uint8MemRef *>(outMaterials->obj),
    inMaterialsStride
  );
};

bool JoltC_HeightFieldShape_SetMaterials(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_Uint8MemRef_t * inMaterials,
  long inMaterialsStride,
  JoltC_PhysicsMaterialList_t * inMaterialList,
  JoltC_TempAllocator_t * inAllocator
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  bool result = selfCpp->SetMaterials(
    inX,
    inY,
    inSizeX,
    inSizeY,
    reinterpret_cast<Uint8MemRef *>(inMaterials->obj),
    inMaterialsStride,
    reinterpret_cast<PhysicsMaterialList *>(inMaterialList->obj),
    *reinterpret_cast<TempAllocator *>(inAllocator->obj)
  );
  return result;
};

unsigned long JoltC_HeightFieldShape_GetRefCount(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_HeightFieldShape_AddRef(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_HeightFieldShape_Release(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->Release();
};

JoltC_EShapeType JoltC_HeightFieldShape_GetType(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_HeightFieldShape_GetSubType(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_HeightFieldShape_MustBeStatic(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_HeightFieldShape_GetLocalBounds(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const AABox& resultValue = selfCpp->GetLocalBounds();
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_AABox_t * JoltC_HeightFieldShape_GetWorldSpaceBounds(
  JoltC_HeightFieldShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const AABox& resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_AABox_t* result = new JoltC_AABox_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_HeightFieldShape_GetCenterOfMass(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const Vec3& resultValue = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long long int JoltC_HeightFieldShape_GetUserData(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_HeightFieldShape_SetUserData(
  JoltC_HeightFieldShape_t * self,
  unsigned long long int inUserData
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
};

unsigned long JoltC_HeightFieldShape_GetSubShapeIDBitsRecursive(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_HeightFieldShape_GetInnerRadius(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_HeightFieldShape_GetMassProperties(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const MassProperties& resultValue = selfCpp->GetMassProperties();
  JoltC_MassProperties_t* result = new JoltC_MassProperties_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_HeightFieldShape_GetMaterial(
  JoltC_HeightFieldShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_HeightFieldShape_GetSurfaceNormal(
  JoltC_HeightFieldShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const Vec3& resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

unsigned long long int JoltC_HeightFieldShape_GetSubShapeUserData(
  JoltC_HeightFieldShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_HeightFieldShape_GetSubShapeTransformedShape(
  JoltC_HeightFieldShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const TransformedShape& resultValue = selfCpp->GetSubShapeTransformedShape(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<SubShapeID *>(outRemainder->obj)
  );
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_HeightFieldShape_GetVolume(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_HeightFieldShape_IsValidScale(
  JoltC_HeightFieldShape_t * self,
  JoltC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_HeightFieldShape_ScaleShape(
  JoltC_HeightFieldShape_t * self,
  JoltC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const Shape::ShapeResult& resultValue = selfCpp->ScaleShape(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_Shape_ShapeResult_t* result = new JoltC_Shape_ShapeResult_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

