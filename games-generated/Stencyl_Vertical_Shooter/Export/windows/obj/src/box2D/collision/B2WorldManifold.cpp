// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_box2D_collision_B2Manifold
#include <box2D/collision/B2Manifold.h>
#endif
#ifndef INCLUDED_box2D_collision_B2ManifoldPoint
#include <box2D/collision/B2ManifoldPoint.h>
#endif
#ifndef INCLUDED_box2D_collision_B2WorldManifold
#include <box2D/collision/B2WorldManifold.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d239f32872453287_35_new,"box2D.collision.B2WorldManifold","new",0xc10e5117,"box2D.collision.B2WorldManifold.new","box2D/collision/B2WorldManifold.hx",35,0xa4b501fb)
HX_LOCAL_STACK_FRAME(_hx_pos_d239f32872453287_46_reset,"box2D.collision.B2WorldManifold","reset",0x2bada646,"box2D.collision.B2WorldManifold.reset","box2D/collision/B2WorldManifold.hx",46,0xa4b501fb)
HX_LOCAL_STACK_FRAME(_hx_pos_d239f32872453287_65_initialize,"box2D.collision.B2WorldManifold","initialize",0x33604579,"box2D.collision.B2WorldManifold.initialize","box2D/collision/B2WorldManifold.hx",65,0xa4b501fb)
HX_LOCAL_STACK_FRAME(_hx_pos_d239f32872453287_199_getPoint,"box2D.collision.B2WorldManifold","getPoint",0x5ceb4bc3,"box2D.collision.B2WorldManifold.getPoint","box2D/collision/B2WorldManifold.hx",199,0xa4b501fb)
namespace box2D{
namespace collision{

void B2WorldManifold_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_d239f32872453287_35_new)
HXLINE(  36)		this->m_normal =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  38)		this->m_points = ::Array_obj< ::Dynamic>::__new();
HXLINE(  39)		{
HXLINE(  39)			int _g1 = (int)0;
HXDLIN(  39)			int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;
HXDLIN(  39)			while((_g1 < _g)){
HXLINE(  39)				_g1 = (_g1 + (int)1);
HXDLIN(  39)				int i = (_g1 - (int)1);
HXLINE(  41)				::Array< ::Dynamic> _hx_tmp = this->m_points;
HXDLIN(  41)				_hx_tmp[i] =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
            			}
            		}
            	}

Dynamic B2WorldManifold_obj::__CreateEmpty() { return new B2WorldManifold_obj; }

void *B2WorldManifold_obj::_hx_vtable = 0;

Dynamic B2WorldManifold_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2WorldManifold_obj > _hx_result = new B2WorldManifold_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2WorldManifold_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5d990c1d;
}

void B2WorldManifold_obj::reset(){
            	HX_GC_STACKFRAME(&_hx_pos_d239f32872453287_46_reset)
HXLINE(  47)		this->m_normal =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  49)		this->m_points = ::Array_obj< ::Dynamic>::__new();
HXLINE(  50)		{
HXLINE(  50)			int _g1 = (int)0;
HXDLIN(  50)			int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;
HXDLIN(  50)			while((_g1 < _g)){
HXLINE(  50)				_g1 = (_g1 + (int)1);
HXDLIN(  50)				int i = (_g1 - (int)1);
HXLINE(  52)				::Array< ::Dynamic> _hx_tmp = this->m_points;
HXDLIN(  52)				_hx_tmp[i] =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2WorldManifold_obj,reset,(void))

void B2WorldManifold_obj::initialize( ::box2D::collision::B2Manifold manifold, ::box2D::common::math::B2Transform xfA,Float radiusA, ::box2D::common::math::B2Transform xfB,Float radiusB){
            	HX_GC_STACKFRAME(&_hx_pos_d239f32872453287_65_initialize)
HXLINE(  66)		if ((manifold->m_pointCount == (int)0)) {
HXLINE(  68)			return;
            		}
HXLINE(  71)		{
HXLINE(  71)			this->m_normal =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXDLIN(  71)			this->m_points = ::Array_obj< ::Dynamic>::__new();
HXDLIN(  71)			{
HXLINE(  71)				int _g1 = (int)0;
HXDLIN(  71)				int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;
HXDLIN(  71)				while((_g1 < _g)){
HXLINE(  71)					_g1 = (_g1 + (int)1);
HXDLIN(  71)					int i = (_g1 - (int)1);
HXDLIN(  71)					::Array< ::Dynamic> _hx_tmp = this->m_points;
HXDLIN(  71)					_hx_tmp[i] =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
            				}
            			}
            		}
HXLINE(  73)		int i1;
HXLINE(  74)		 ::box2D::common::math::B2Vec2 tVec;
HXLINE(  75)		 ::box2D::common::math::B2Mat22 tMat;
HXLINE(  76)		Float normalX;
HXLINE(  77)		Float normalY;
HXLINE(  78)		Float planePointX;
HXLINE(  79)		Float planePointY;
HXLINE(  80)		Float clipPointX;
HXLINE(  81)		Float clipPointY;
HXLINE(  83)		{
HXLINE(  83)			int _g2 = manifold->m_type;
HXDLIN(  83)			switch((int)(_g2)){
            				case (int)1: {
HXLINE(  88)					tMat = xfA->R;
HXLINE(  89)					tVec = manifold->m_localPoint;
HXLINE(  90)					Float xfA1 = xfA->position->x;
HXDLIN(  90)					Float pointAX = (xfA1 + (tMat->col1->x * tVec->x));
HXDLIN(  90)					Float pointAX1 = (pointAX + (tMat->col2->x * tVec->y));
HXLINE(  91)					Float xfA2 = xfA->position->y;
HXDLIN(  91)					Float pointAY = (xfA2 + (tMat->col1->y * tVec->x));
HXDLIN(  91)					Float pointAY1 = (pointAY + (tMat->col2->y * tVec->y));
HXLINE(  93)					tMat = xfB->R;
HXLINE(  94)					tVec = manifold->m_points->__get((int)0).StaticCast<  ::box2D::collision::B2ManifoldPoint >()->m_localPoint;
HXLINE(  95)					Float xfB1 = xfB->position->x;
HXDLIN(  95)					Float pointBX = (xfB1 + (tMat->col1->x * tVec->x));
HXDLIN(  95)					Float pointBX1 = (pointBX + (tMat->col2->x * tVec->y));
HXLINE(  96)					Float xfB2 = xfB->position->y;
HXDLIN(  96)					Float pointBY = (xfB2 + (tMat->col1->y * tVec->x));
HXDLIN(  96)					Float pointBY1 = (pointBY + (tMat->col2->y * tVec->y));
HXLINE(  98)					Float dX = (pointBX1 - pointAX1);
HXLINE(  99)					Float dY = (pointBY1 - pointAY1);
HXLINE( 100)					Float d2 = ((dX * dX) + (dY * dY));
HXLINE( 101)					if ((d2 > ((Float)0.))) {
HXLINE( 103)						Float d = ::Math_obj::sqrt(d2);
HXLINE( 104)						this->m_normal->x = ((Float)dX / (Float)d);
HXLINE( 105)						this->m_normal->y = ((Float)dY / (Float)d);
            					}
            					else {
HXLINE( 107)						this->m_normal->x = (int)1;
HXLINE( 108)						this->m_normal->y = (int)0;
            					}
HXLINE( 112)					Float cAX = (pointAX1 + (radiusA * this->m_normal->x));
HXLINE( 113)					Float cAY = (pointAY1 + (radiusA * this->m_normal->y));
HXLINE( 115)					Float cBX = (pointBX1 - (radiusB * this->m_normal->x));
HXLINE( 116)					Float cBY = (pointBY1 - (radiusB * this->m_normal->y));
HXLINE( 117)					this->m_points->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->x = (((Float)0.5) * (cAX + cBX));
HXLINE( 118)					this->m_points->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->y = (((Float)0.5) * (cAY + cBY));
            				}
            				break;
            				case (int)2: {
HXLINE( 128)					tMat = xfA->R;
HXLINE( 129)					tVec = manifold->m_localPlaneNormal;
HXLINE( 130)					Float normalX1 = (tMat->col1->x * tVec->x);
HXDLIN( 130)					normalX = (normalX1 + (tMat->col2->x * tVec->y));
HXLINE( 131)					Float normalY1 = (tMat->col1->y * tVec->x);
HXDLIN( 131)					normalY = (normalY1 + (tMat->col2->y * tVec->y));
HXLINE( 134)					tMat = xfA->R;
HXLINE( 135)					tVec = manifold->m_localPoint;
HXLINE( 136)					Float xfA3 = xfA->position->x;
HXDLIN( 136)					Float planePointX1 = (xfA3 + (tMat->col1->x * tVec->x));
HXDLIN( 136)					planePointX = (planePointX1 + (tMat->col2->x * tVec->y));
HXLINE( 137)					Float xfA4 = xfA->position->y;
HXDLIN( 137)					Float planePointY1 = (xfA4 + (tMat->col1->y * tVec->x));
HXDLIN( 137)					planePointY = (planePointY1 + (tMat->col2->y * tVec->y));
HXLINE( 140)					this->m_normal->x = normalX;
HXLINE( 141)					this->m_normal->y = normalY;
HXLINE( 142)					{
HXLINE( 142)						int _g11 = (int)0;
HXDLIN( 142)						int _g3 = manifold->m_pointCount;
HXDLIN( 142)						while((_g11 < _g3)){
HXLINE( 142)							_g11 = (_g11 + (int)1);
HXDLIN( 142)							int i2 = (_g11 - (int)1);
HXLINE( 145)							tMat = xfB->R;
HXLINE( 146)							tVec = manifold->m_points->__get(i2).StaticCast<  ::box2D::collision::B2ManifoldPoint >()->m_localPoint;
HXLINE( 147)							Float xfB3 = xfB->position->x;
HXDLIN( 147)							Float clipPointX1 = (xfB3 + (tMat->col1->x * tVec->x));
HXDLIN( 147)							clipPointX = (clipPointX1 + (tMat->col2->x * tVec->y));
HXLINE( 148)							Float xfB4 = xfB->position->y;
HXDLIN( 148)							Float clipPointY1 = (xfB4 + (tMat->col1->y * tVec->x));
HXDLIN( 148)							clipPointY = (clipPointY1 + (tMat->col2->y * tVec->y));
HXLINE( 153)							this->m_points->__get(i2).StaticCast<  ::box2D::common::math::B2Vec2 >()->x = (clipPointX + ((((Float)0.5) * (((radiusA - ((clipPointX - planePointX) * normalX)) - ((clipPointY - planePointY) * normalY)) - radiusB)) * normalX));
HXLINE( 154)							this->m_points->__get(i2).StaticCast<  ::box2D::common::math::B2Vec2 >()->y = (clipPointY + ((((Float)0.5) * (((radiusA - ((clipPointX - planePointX) * normalX)) - ((clipPointY - planePointY) * normalY)) - radiusB)) * normalY));
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 162)					tMat = xfB->R;
HXLINE( 163)					tVec = manifold->m_localPlaneNormal;
HXLINE( 164)					Float normalX2 = (tMat->col1->x * tVec->x);
HXDLIN( 164)					normalX = (normalX2 + (tMat->col2->x * tVec->y));
HXLINE( 165)					Float normalY2 = (tMat->col1->y * tVec->x);
HXDLIN( 165)					normalY = (normalY2 + (tMat->col2->y * tVec->y));
HXLINE( 168)					tMat = xfB->R;
HXLINE( 169)					tVec = manifold->m_localPoint;
HXLINE( 170)					Float xfB5 = xfB->position->x;
HXDLIN( 170)					Float planePointX2 = (xfB5 + (tMat->col1->x * tVec->x));
HXDLIN( 170)					planePointX = (planePointX2 + (tMat->col2->x * tVec->y));
HXLINE( 171)					Float xfB6 = xfB->position->y;
HXDLIN( 171)					Float planePointY2 = (xfB6 + (tMat->col1->y * tVec->x));
HXDLIN( 171)					planePointY = (planePointY2 + (tMat->col2->y * tVec->y));
HXLINE( 174)					this->m_normal->x = -(normalX);
HXLINE( 175)					this->m_normal->y = -(normalY);
HXLINE( 176)					{
HXLINE( 176)						int _g12 = (int)0;
HXDLIN( 176)						int _g4 = manifold->m_pointCount;
HXDLIN( 176)						while((_g12 < _g4)){
HXLINE( 176)							_g12 = (_g12 + (int)1);
HXDLIN( 176)							int i3 = (_g12 - (int)1);
HXLINE( 179)							tMat = xfA->R;
HXLINE( 180)							tVec = manifold->m_points->__get(i3).StaticCast<  ::box2D::collision::B2ManifoldPoint >()->m_localPoint;
HXLINE( 181)							Float xfA5 = xfA->position->x;
HXDLIN( 181)							Float clipPointX2 = (xfA5 + (tMat->col1->x * tVec->x));
HXDLIN( 181)							clipPointX = (clipPointX2 + (tMat->col2->x * tVec->y));
HXLINE( 182)							Float xfA6 = xfA->position->y;
HXDLIN( 182)							Float clipPointY2 = (xfA6 + (tMat->col1->y * tVec->x));
HXDLIN( 182)							clipPointY = (clipPointY2 + (tMat->col2->y * tVec->y));
HXLINE( 187)							this->m_points->__get(i3).StaticCast<  ::box2D::common::math::B2Vec2 >()->x = (clipPointX + ((((Float)0.5) * (((radiusB - ((clipPointX - planePointX) * normalX)) - ((clipPointY - planePointY) * normalY)) - radiusA)) * normalX));
HXLINE( 188)							this->m_points->__get(i3).StaticCast<  ::box2D::common::math::B2Vec2 >()->y = (clipPointY + ((((Float)0.5) * (((radiusB - ((clipPointX - planePointX) * normalX)) - ((clipPointY - planePointY) * normalY)) - radiusA)) * normalY));
            						}
            					}
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(B2WorldManifold_obj,initialize,(void))

 ::box2D::common::math::B2Vec2 B2WorldManifold_obj::getPoint(){
            	HX_GC_STACKFRAME(&_hx_pos_d239f32872453287_199_getPoint)
HXLINE( 200)		if ((this->m_points->length == (int)0)) {
HXLINE( 201)			return null();
            		}
HXLINE( 203)		if ((this->m_points->length == (int)1)) {
HXLINE( 204)			return this->m_points->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >();
            		}
HXLINE( 206)		Float _hx_tmp = ((Float)(this->m_points->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->x + this->m_points->__get((int)1).StaticCast<  ::box2D::common::math::B2Vec2 >()->x) / (Float)(int)2);
HXDLIN( 206)		return  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,_hx_tmp,((Float)(this->m_points->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->y + this->m_points->__get((int)1).StaticCast<  ::box2D::common::math::B2Vec2 >()->y) / (Float)(int)2));
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2WorldManifold_obj,getPoint,return )


hx::ObjectPtr< B2WorldManifold_obj > B2WorldManifold_obj::__new() {
	hx::ObjectPtr< B2WorldManifold_obj > __this = new B2WorldManifold_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2WorldManifold_obj > B2WorldManifold_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2WorldManifold_obj *__this = (B2WorldManifold_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2WorldManifold_obj), true, "box2D.collision.B2WorldManifold"));
	*(void **)__this = B2WorldManifold_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2WorldManifold_obj::B2WorldManifold_obj()
{
}

void B2WorldManifold_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2WorldManifold);
	HX_MARK_MEMBER_NAME(m_normal,"m_normal");
	HX_MARK_MEMBER_NAME(m_points,"m_points");
	HX_MARK_END_CLASS();
}

void B2WorldManifold_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_normal,"m_normal");
	HX_VISIT_MEMBER_NAME(m_points,"m_points");
}

hx::Val B2WorldManifold_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return hx::Val( reset_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getPoint") ) { return hx::Val( getPoint_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_normal") ) { return hx::Val( m_normal ); }
		if (HX_FIELD_EQ(inName,"m_points") ) { return hx::Val( m_points ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val B2WorldManifold_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"m_normal") ) { m_normal=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_points") ) { m_points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void B2WorldManifold_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9"));
	outFields->push(HX_HCSTRING("m_points","\xf5","\xba","\x1f","\xc0"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2WorldManifold_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2WorldManifold_obj,m_normal),HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(B2WorldManifold_obj,m_points),HX_HCSTRING("m_points","\xf5","\xba","\x1f","\xc0")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *B2WorldManifold_obj_sStaticStorageInfo = 0;
#endif

static ::String B2WorldManifold_obj_sMemberFields[] = {
	HX_HCSTRING("reset","\xcf","\x49","\xc8","\xe6"),
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("getPoint","\xda","\xc3","\x66","\x26"),
	HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9"),
	HX_HCSTRING("m_points","\xf5","\xba","\x1f","\xc0"),
	::String(null()) };

static void B2WorldManifold_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2WorldManifold_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2WorldManifold_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2WorldManifold_obj::__mClass,"__mClass");
};

#endif

hx::Class B2WorldManifold_obj::__mClass;

void B2WorldManifold_obj::__register()
{
	hx::Object *dummy = new B2WorldManifold_obj;
	B2WorldManifold_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.collision.B2WorldManifold","\xa5","\x79","\x04","\x53");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = B2WorldManifold_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2WorldManifold_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2WorldManifold_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2WorldManifold_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2WorldManifold_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2WorldManifold_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace box2D
} // end namespace collision
