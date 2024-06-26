#include "JoltC/JoltC_Shape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_Shape_destroy(
  JoltC_Shape_t * self
){
  if (self == NULL) return;
  delete static_cast<Shape *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_ConvexShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_ConvexShape(
  JoltC_ConvexShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_SphereShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_SphereShape(
  JoltC_SphereShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_BoxShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_BoxShape(
  JoltC_BoxShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_CylinderShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_CylinderShape(
  JoltC_CylinderShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_CapsuleShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_CapsuleShape(
  JoltC_CapsuleShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_TaperedCapsuleShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_TaperedCapsuleShape(
  JoltC_TaperedCapsuleShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConvexHullShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_ConvexHullShape(
  JoltC_ConvexHullShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_CompoundShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_CompoundShape(
  JoltC_CompoundShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_StaticCompoundShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_StaticCompoundShape(
  JoltC_StaticCompoundShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_DecoratedShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_DecoratedShape(
  JoltC_DecoratedShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_ScaledShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_ScaledShape(
  JoltC_ScaledShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_OffsetCenterOfMassShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_OffsetCenterOfMassShape(
  JoltC_OffsetCenterOfMassShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_RotatedTranslatedShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_RotatedTranslatedShape(
  JoltC_RotatedTranslatedShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_MeshShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_MeshShape(
  JoltC_MeshShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_HeightFieldShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_HeightFieldShape(
  JoltC_HeightFieldShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

/**
 * Convert an instance of JoltC_SoftBodyShape_t into JoltC_Shape_t.
 */
JoltC_Shape_t * JoltC_Shape_From_SoftBodyShape(
  JoltC_SoftBodyShape_t * subtype
) {
  return (JoltC_Shape_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_Shape_GetRefCount(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_Shape_AddRef(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_Shape_Release(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_Shape_GetType(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_Shape_GetSubType(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_Shape_MustBeStatic(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_Shape_GetLocalBounds(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_Shape_GetWorldSpaceBounds(
  JoltC_Shape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  const Mat44 * inCenterOfMassTransformCpp = static_cast<const Mat44 *>(inCenterOfMassTransform->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetWorldSpaceBounds(
    *inCenterOfMassTransformCpp,
    *inScaleCpp
  );
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Shape_GetCenterOfMass(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_Shape_GetUserData(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_Shape_SetUserData(
  JoltC_Shape_t * self,
  unsigned long long int inUserData
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_Shape_GetSubShapeIDBitsRecursive(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_Shape_GetInnerRadius(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_Shape_GetMassProperties(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_Shape_GetMaterial(
  JoltC_Shape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_Shape_GetSurfaceNormal(
  JoltC_Shape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const Vec3 * inLocalSurfacePositionCpp = static_cast<const Vec3 *>(inLocalSurfacePosition->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetSurfaceNormal(
    *inSubShapeIDCpp,
    *inLocalSurfacePositionCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_Shape_GetSubShapeUserData(
  JoltC_Shape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_Shape_GetSubShapeTransformedShape(
  JoltC_Shape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const Vec3 * inPositionCOMCpp = static_cast<const Vec3 *>(inPositionCOM->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  SubShapeID * outRemainderCpp = static_cast<SubShapeID *>(outRemainder->obj);
  TransformedShape * resultPtr = new TransformedShape();
  *resultPtr = selfCpp->GetSubShapeTransformedShape(
    *inSubShapeIDCpp,
    *inPositionCOMCpp,
    *inRotationCpp,
    *inScaleCpp,
    *outRemainderCpp
  );
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Shape_GetVolume(
  JoltC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_Shape_IsValidScale(
  JoltC_Shape_t * self,
  JoltC_Vec3_t * inScale
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_Shape_ScaleShape(
  JoltC_Shape_t * self,
  JoltC_Vec3_t * inScale
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->ScaleShape(
    *inScaleCpp
  );
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
