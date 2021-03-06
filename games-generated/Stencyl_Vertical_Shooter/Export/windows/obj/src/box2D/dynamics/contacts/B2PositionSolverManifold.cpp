// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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
#ifndef INCLUDED_box2D_dynamics_B2Body
#include <box2D/dynamics/B2Body.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactConstraint
#include <box2D/dynamics/contacts/B2ContactConstraint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactConstraintPoint
#include <box2D/dynamics/contacts/B2ContactConstraintPoint.h>
#endif
#ifndef INCLUDED_box2D_dynamics_contacts_B2PositionSolverManifold
#include <box2D/dynamics/contacts/B2PositionSolverManifold.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a126fe7a3ca28a94_32_new,"box2D.dynamics.contacts.B2PositionSolverManifold","new",0x0dc68ee0,"box2D.dynamics.contacts.B2PositionSolverManifold.new","box2D/dynamics/contacts/B2PositionSolverManifold.hx",32,0x2c65300f)
HX_LOCAL_STACK_FRAME(_hx_pos_a126fe7a3ca28a94_45_initialize,"box2D.dynamics.contacts.B2PositionSolverManifold","initialize",0x5b7542d0,"box2D.dynamics.contacts.B2PositionSolverManifold.initialize","box2D/dynamics/contacts/B2PositionSolverManifold.hx",45,0x2c65300f)
HX_LOCAL_STACK_FRAME(_hx_pos_a126fe7a3ca28a94_42_boot,"box2D.dynamics.contacts.B2PositionSolverManifold","boot",0xf80f75b2,"box2D.dynamics.contacts.B2PositionSolverManifold.boot","box2D/dynamics/contacts/B2PositionSolverManifold.hx",42,0x2c65300f)
HX_LOCAL_STACK_FRAME(_hx_pos_a126fe7a3ca28a94_43_boot,"box2D.dynamics.contacts.B2PositionSolverManifold","boot",0xf80f75b2,"box2D.dynamics.contacts.B2PositionSolverManifold.boot","box2D/dynamics/contacts/B2PositionSolverManifold.hx",43,0x2c65300f)
namespace box2D{
namespace dynamics{
namespace contacts{

void B2PositionSolverManifold_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a126fe7a3ca28a94_32_new)
HXLINE(  33)		this->m_normal =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
HXLINE(  34)		this->m_separations = ::Array_obj< Float >::__new();
HXLINE(  35)		this->m_points = ::Array_obj< ::Dynamic>::__new();
HXLINE(  36)		{
HXLINE(  36)			int _g1 = (int)0;
HXDLIN(  36)			int _g = ::box2D::common::B2Settings_obj::b2_maxManifoldPoints;
HXDLIN(  36)			while((_g1 < _g)){
HXLINE(  36)				_g1 = (_g1 + (int)1);
HXDLIN(  36)				int i = (_g1 - (int)1);
HXLINE(  38)				::Array< ::Dynamic> _hx_tmp = this->m_points;
HXDLIN(  38)				_hx_tmp[i] =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
            			}
            		}
            	}

Dynamic B2PositionSolverManifold_obj::__CreateEmpty() { return new B2PositionSolverManifold_obj; }

void *B2PositionSolverManifold_obj::_hx_vtable = 0;

Dynamic B2PositionSolverManifold_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2PositionSolverManifold_obj > _hx_result = new B2PositionSolverManifold_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2PositionSolverManifold_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6382dcfc;
}

void B2PositionSolverManifold_obj::initialize( ::box2D::dynamics::contacts::B2ContactConstraint cc){
            	HX_STACKFRAME(&_hx_pos_a126fe7a3ca28a94_45_initialize)
HXLINE(  46)		::box2D::common::B2Settings_obj::b2Assert((cc->pointCount > (int)0));
HXLINE(  48)		int i;
HXLINE(  49)		Float clipPointX;
HXLINE(  50)		Float clipPointY;
HXLINE(  51)		 ::box2D::common::math::B2Mat22 tMat;
HXLINE(  52)		 ::box2D::common::math::B2Vec2 tVec;
HXLINE(  53)		Float planePointX;
HXLINE(  54)		Float planePointY;
HXLINE(  56)		{
HXLINE(  56)			int _g = cc->type;
HXDLIN(  56)			switch((int)(_g)){
            				case (int)1: {
HXLINE(  61)					tMat = cc->bodyA->m_xf->R;
HXLINE(  62)					tVec = cc->localPoint;
HXLINE(  63)					Float cc1 = cc->bodyA->m_xf->position->x;
HXDLIN(  63)					Float pointAX = (tMat->col1->x * tVec->x);
HXDLIN(  63)					Float pointAX1 = (cc1 + (pointAX + (tMat->col2->x * tVec->y)));
HXLINE(  64)					Float cc2 = cc->bodyA->m_xf->position->y;
HXDLIN(  64)					Float pointAY = (tMat->col1->y * tVec->x);
HXDLIN(  64)					Float pointAY1 = (cc2 + (pointAY + (tMat->col2->y * tVec->y)));
HXLINE(  66)					tMat = cc->bodyB->m_xf->R;
HXLINE(  67)					tVec = cc->points->__get((int)0).StaticCast<  ::box2D::dynamics::contacts::B2ContactConstraintPoint >()->localPoint;
HXLINE(  68)					Float cc3 = cc->bodyB->m_xf->position->x;
HXDLIN(  68)					Float pointBX = (tMat->col1->x * tVec->x);
HXDLIN(  68)					Float pointBX1 = (cc3 + (pointBX + (tMat->col2->x * tVec->y)));
HXLINE(  69)					Float cc4 = cc->bodyB->m_xf->position->y;
HXDLIN(  69)					Float pointBY = (tMat->col1->y * tVec->x);
HXDLIN(  69)					Float pointBY1 = (cc4 + (pointBY + (tMat->col2->y * tVec->y)));
HXLINE(  70)					Float dX = (pointBX1 - pointAX1);
HXLINE(  71)					Float dY = (pointBY1 - pointAY1);
HXLINE(  72)					Float d2 = ((dX * dX) + (dY * dY));
HXLINE(  73)					if ((d2 > ((Float)0.))) {
HXLINE(  75)						Float d = ::Math_obj::sqrt(d2);
HXLINE(  76)						this->m_normal->x = ((Float)dX / (Float)d);
HXLINE(  77)						this->m_normal->y = ((Float)dY / (Float)d);
            					}
            					else {
HXLINE(  81)						this->m_normal->x = ((Float)1.0);
HXLINE(  82)						this->m_normal->y = ((Float)0.0);
            					}
HXLINE(  84)					this->m_points->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->x = (((Float)0.5) * (pointAX1 + pointBX1));
HXLINE(  85)					this->m_points->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->y = (((Float)0.5) * (pointAY1 + pointBY1));
HXLINE(  86)					::Array< Float > _hx_tmp = this->m_separations;
HXDLIN(  86)					Float _hx_tmp1 = (dX * this->m_normal->x);
HXDLIN(  86)					_hx_tmp[(int)0] = ((_hx_tmp1 + (dY * this->m_normal->y)) - cc->radius);
            				}
            				break;
            				case (int)2: {
HXLINE(  92)					tMat = cc->bodyA->m_xf->R;
HXLINE(  93)					tVec = cc->localPlaneNormal;
HXLINE(  94)					Float _hx_tmp2 = (tMat->col1->x * tVec->x);
HXDLIN(  94)					this->m_normal->x = (_hx_tmp2 + (tMat->col2->x * tVec->y));
HXLINE(  95)					Float _hx_tmp3 = (tMat->col1->y * tVec->x);
HXDLIN(  95)					this->m_normal->y = (_hx_tmp3 + (tMat->col2->y * tVec->y));
HXLINE(  97)					tMat = cc->bodyA->m_xf->R;
HXLINE(  98)					tVec = cc->localPoint;
HXLINE(  99)					Float cc5 = cc->bodyA->m_xf->position->x;
HXDLIN(  99)					Float planePointX1 = (tMat->col1->x * tVec->x);
HXDLIN(  99)					planePointX = (cc5 + (planePointX1 + (tMat->col2->x * tVec->y)));
HXLINE( 100)					Float cc6 = cc->bodyA->m_xf->position->y;
HXDLIN( 100)					Float planePointY1 = (tMat->col1->y * tVec->x);
HXDLIN( 100)					planePointY = (cc6 + (planePointY1 + (tMat->col2->y * tVec->y)));
HXLINE( 102)					tMat = cc->bodyB->m_xf->R;
HXLINE( 103)					{
HXLINE( 103)						int _g1 = (int)0;
HXDLIN( 103)						int _g2 = cc->pointCount;
HXDLIN( 103)						while((_g1 < _g2)){
HXLINE( 103)							_g1 = (_g1 + (int)1);
HXDLIN( 103)							int i1 = (_g1 - (int)1);
HXLINE( 106)							tVec = cc->points->__get(i1).StaticCast<  ::box2D::dynamics::contacts::B2ContactConstraintPoint >()->localPoint;
HXLINE( 107)							Float cc7 = cc->bodyB->m_xf->position->x;
HXDLIN( 107)							Float clipPointX1 = (tMat->col1->x * tVec->x);
HXDLIN( 107)							clipPointX = (cc7 + (clipPointX1 + (tMat->col2->x * tVec->y)));
HXLINE( 108)							Float cc8 = cc->bodyB->m_xf->position->y;
HXDLIN( 108)							Float clipPointY1 = (tMat->col1->y * tVec->x);
HXDLIN( 108)							clipPointY = (cc8 + (clipPointY1 + (tMat->col2->y * tVec->y)));
HXLINE( 109)							::Array< Float > _hx_tmp4 = this->m_separations;
HXDLIN( 109)							Float _hx_tmp5 = ((clipPointX - planePointX) * this->m_normal->x);
HXDLIN( 109)							_hx_tmp4[i1] = ((_hx_tmp5 + ((clipPointY - planePointY) * this->m_normal->y)) - cc->radius);
HXLINE( 110)							this->m_points->__get(i1).StaticCast<  ::box2D::common::math::B2Vec2 >()->x = clipPointX;
HXLINE( 111)							this->m_points->__get(i1).StaticCast<  ::box2D::common::math::B2Vec2 >()->y = clipPointY;
            						}
            					}
            				}
            				break;
            				case (int)4: {
HXLINE( 118)					tMat = cc->bodyB->m_xf->R;
HXLINE( 119)					tVec = cc->localPlaneNormal;
HXLINE( 120)					Float _hx_tmp6 = (tMat->col1->x * tVec->x);
HXDLIN( 120)					this->m_normal->x = (_hx_tmp6 + (tMat->col2->x * tVec->y));
HXLINE( 121)					Float _hx_tmp7 = (tMat->col1->y * tVec->x);
HXDLIN( 121)					this->m_normal->y = (_hx_tmp7 + (tMat->col2->y * tVec->y));
HXLINE( 123)					tMat = cc->bodyB->m_xf->R;
HXLINE( 124)					tVec = cc->localPoint;
HXLINE( 125)					Float cc9 = cc->bodyB->m_xf->position->x;
HXDLIN( 125)					Float planePointX2 = (tMat->col1->x * tVec->x);
HXDLIN( 125)					planePointX = (cc9 + (planePointX2 + (tMat->col2->x * tVec->y)));
HXLINE( 126)					Float cc10 = cc->bodyB->m_xf->position->y;
HXDLIN( 126)					Float planePointY2 = (tMat->col1->y * tVec->x);
HXDLIN( 126)					planePointY = (cc10 + (planePointY2 + (tMat->col2->y * tVec->y)));
HXLINE( 128)					tMat = cc->bodyA->m_xf->R;
HXLINE( 129)					{
HXLINE( 129)						int _g11 = (int)0;
HXDLIN( 129)						int _g3 = cc->pointCount;
HXDLIN( 129)						while((_g11 < _g3)){
HXLINE( 129)							_g11 = (_g11 + (int)1);
HXDLIN( 129)							int i2 = (_g11 - (int)1);
HXLINE( 132)							tVec = cc->points->__get(i2).StaticCast<  ::box2D::dynamics::contacts::B2ContactConstraintPoint >()->localPoint;
HXLINE( 133)							Float cc11 = cc->bodyA->m_xf->position->x;
HXDLIN( 133)							Float clipPointX2 = (tMat->col1->x * tVec->x);
HXDLIN( 133)							clipPointX = (cc11 + (clipPointX2 + (tMat->col2->x * tVec->y)));
HXLINE( 134)							Float cc12 = cc->bodyA->m_xf->position->y;
HXDLIN( 134)							Float clipPointY2 = (tMat->col1->y * tVec->x);
HXDLIN( 134)							clipPointY = (cc12 + (clipPointY2 + (tMat->col2->y * tVec->y)));
HXLINE( 135)							::Array< Float > _hx_tmp8 = this->m_separations;
HXDLIN( 135)							Float _hx_tmp9 = ((clipPointX - planePointX) * this->m_normal->x);
HXDLIN( 135)							_hx_tmp8[i2] = ((_hx_tmp9 + ((clipPointY - planePointY) * this->m_normal->y)) - cc->radius);
HXLINE( 136)							{
HXLINE( 136)								 ::box2D::common::math::B2Vec2 _this = this->m_points->__get(i2).StaticCast<  ::box2D::common::math::B2Vec2 >();
HXDLIN( 136)								_this->x = clipPointX;
HXDLIN( 136)								_this->y = clipPointY;
            							}
            						}
            					}
HXLINE( 140)					 ::box2D::common::math::B2Vec2 _hx_tmp10 = this->m_normal;
HXDLIN( 140)					_hx_tmp10->x = (_hx_tmp10->x * (int)-1);
HXLINE( 141)					 ::box2D::common::math::B2Vec2 _hx_tmp11 = this->m_normal;
HXDLIN( 141)					_hx_tmp11->y = (_hx_tmp11->y * (int)-1);
            				}
            				break;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2PositionSolverManifold_obj,initialize,(void))

 ::box2D::common::math::B2Vec2 B2PositionSolverManifold_obj::circlePointA;

 ::box2D::common::math::B2Vec2 B2PositionSolverManifold_obj::circlePointB;


hx::ObjectPtr< B2PositionSolverManifold_obj > B2PositionSolverManifold_obj::__new() {
	hx::ObjectPtr< B2PositionSolverManifold_obj > __this = new B2PositionSolverManifold_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2PositionSolverManifold_obj > B2PositionSolverManifold_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2PositionSolverManifold_obj *__this = (B2PositionSolverManifold_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2PositionSolverManifold_obj), true, "box2D.dynamics.contacts.B2PositionSolverManifold"));
	*(void **)__this = B2PositionSolverManifold_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2PositionSolverManifold_obj::B2PositionSolverManifold_obj()
{
}

void B2PositionSolverManifold_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2PositionSolverManifold);
	HX_MARK_MEMBER_NAME(m_normal,"m_normal");
	HX_MARK_MEMBER_NAME(m_points,"m_points");
	HX_MARK_MEMBER_NAME(m_separations,"m_separations");
	HX_MARK_END_CLASS();
}

void B2PositionSolverManifold_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_normal,"m_normal");
	HX_VISIT_MEMBER_NAME(m_points,"m_points");
	HX_VISIT_MEMBER_NAME(m_separations,"m_separations");
}

hx::Val B2PositionSolverManifold_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"m_normal") ) { return hx::Val( m_normal ); }
		if (HX_FIELD_EQ(inName,"m_points") ) { return hx::Val( m_points ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return hx::Val( initialize_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_separations") ) { return hx::Val( m_separations ); }
	}
	return super::__Field(inName,inCallProp);
}

bool B2PositionSolverManifold_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"circlePointA") ) { outValue = ( circlePointA ); return true; }
		if (HX_FIELD_EQ(inName,"circlePointB") ) { outValue = ( circlePointB ); return true; }
	}
	return false;
}

hx::Val B2PositionSolverManifold_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"m_normal") ) { m_normal=inValue.Cast<  ::box2D::common::math::B2Vec2 >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_points") ) { m_points=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"m_separations") ) { m_separations=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool B2PositionSolverManifold_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"circlePointA") ) { circlePointA=ioValue.Cast<  ::box2D::common::math::B2Vec2 >(); return true; }
		if (HX_FIELD_EQ(inName,"circlePointB") ) { circlePointB=ioValue.Cast<  ::box2D::common::math::B2Vec2 >(); return true; }
	}
	return false;
}

void B2PositionSolverManifold_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9"));
	outFields->push(HX_HCSTRING("m_points","\xf5","\xba","\x1f","\xc0"));
	outFields->push(HX_HCSTRING("m_separations","\x5b","\xf3","\x69","\x2d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2PositionSolverManifold_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(int)offsetof(B2PositionSolverManifold_obj,m_normal),HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(B2PositionSolverManifold_obj,m_points),HX_HCSTRING("m_points","\xf5","\xba","\x1f","\xc0")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(B2PositionSolverManifold_obj,m_separations),HX_HCSTRING("m_separations","\x5b","\xf3","\x69","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo B2PositionSolverManifold_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(void *) &B2PositionSolverManifold_obj::circlePointA,HX_HCSTRING("circlePointA","\x21","\xe4","\xc8","\x31")},
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(void *) &B2PositionSolverManifold_obj::circlePointB,HX_HCSTRING("circlePointB","\x22","\xe4","\xc8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String B2PositionSolverManifold_obj_sMemberFields[] = {
	HX_HCSTRING("initialize","\x50","\x31","\xbb","\xec"),
	HX_HCSTRING("m_normal","\xf9","\x1a","\x5b","\xf9"),
	HX_HCSTRING("m_points","\xf5","\xba","\x1f","\xc0"),
	HX_HCSTRING("m_separations","\x5b","\xf3","\x69","\x2d"),
	::String(null()) };

static void B2PositionSolverManifold_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2PositionSolverManifold_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2PositionSolverManifold_obj::circlePointA,"circlePointA");
	HX_MARK_MEMBER_NAME(B2PositionSolverManifold_obj::circlePointB,"circlePointB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2PositionSolverManifold_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2PositionSolverManifold_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2PositionSolverManifold_obj::circlePointA,"circlePointA");
	HX_VISIT_MEMBER_NAME(B2PositionSolverManifold_obj::circlePointB,"circlePointB");
};

#endif

hx::Class B2PositionSolverManifold_obj::__mClass;

static ::String B2PositionSolverManifold_obj_sStaticFields[] = {
	HX_HCSTRING("circlePointA","\x21","\xe4","\xc8","\x31"),
	HX_HCSTRING("circlePointB","\x22","\xe4","\xc8","\x31"),
	::String(null())
};

void B2PositionSolverManifold_obj::__register()
{
	hx::Object *dummy = new B2PositionSolverManifold_obj;
	B2PositionSolverManifold_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.contacts.B2PositionSolverManifold","\xee","\xde","\x65","\x5a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &B2PositionSolverManifold_obj::__GetStatic;
	__mClass->mSetStaticField = &B2PositionSolverManifold_obj::__SetStatic;
	__mClass->mMarkFunc = B2PositionSolverManifold_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(B2PositionSolverManifold_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2PositionSolverManifold_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2PositionSolverManifold_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2PositionSolverManifold_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2PositionSolverManifold_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2PositionSolverManifold_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void B2PositionSolverManifold_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_a126fe7a3ca28a94_42_boot)
HXDLIN(  42)		circlePointA =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_a126fe7a3ca28a94_43_boot)
HXDLIN(  43)		circlePointB =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,null(),null());
            	}
}

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts
