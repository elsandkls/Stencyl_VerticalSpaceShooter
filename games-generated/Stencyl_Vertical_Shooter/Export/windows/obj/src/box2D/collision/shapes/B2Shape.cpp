// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_collision_B2AABB
#include <box2D/collision/B2AABB.h>
#endif
#ifndef INCLUDED_box2D_collision_B2Distance
#include <box2D/collision/B2Distance.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceInput
#include <box2D/collision/B2DistanceInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceOutput
#include <box2D/collision/B2DistanceOutput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2DistanceProxy
#include <box2D/collision/B2DistanceProxy.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastInput
#include <box2D/collision/B2RayCastInput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2RayCastOutput
#include <box2D/collision/B2RayCastOutput.h>
#endif
#ifndef INCLUDED_box2D_collision_B2SimplexCache
#include <box2D/collision/B2SimplexCache.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2MassData
#include <box2D/collision/shapes/B2MassData.h>
#endif
#ifndef INCLUDED_box2D_collision_shapes_B2Shape
#include <box2D/collision/shapes/B2Shape.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b4fc528925c2c06a_168_new,"box2D.collision.shapes.B2Shape","new",0x933fd174,"box2D.collision.shapes.B2Shape.new","box2D/collision/shapes/B2Shape.hx",168,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_53_copy,"box2D.collision.shapes.B2Shape","copy",0x3d59ac21,"box2D.collision.shapes.B2Shape.copy","box2D/collision/shapes/B2Shape.hx",53,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_63_set,"box2D.collision.shapes.B2Shape","set",0x93439cb6,"box2D.collision.shapes.B2Shape.set","box2D/collision/shapes/B2Shape.hx",63,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_72_getType,"box2D.collision.shapes.B2Shape","getType",0x830fbd84,"box2D.collision.shapes.B2Shape.getType","box2D/collision/shapes/B2Shape.hx",72,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_80_testPoint,"box2D.collision.shapes.B2Shape","testPoint",0xf0a1fab2,"box2D.collision.shapes.B2Shape.testPoint","box2D/collision/shapes/B2Shape.hx",80,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_90_rayCast,"box2D.collision.shapes.B2Shape","rayCast",0x88c078dd,"box2D.collision.shapes.B2Shape.rayCast","box2D/collision/shapes/B2Shape.hx",90,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_98_computeAABB,"box2D.collision.shapes.B2Shape","computeAABB",0x8db06eab,"box2D.collision.shapes.B2Shape.computeAABB","box2D/collision/shapes/B2Shape.hx",98,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_105_computeMass,"box2D.collision.shapes.B2Shape","computeMass",0x95b7711f,"box2D.collision.shapes.B2Shape.computeMass","box2D/collision/shapes/B2Shape.hx",105,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_119_computeSubmergedArea,"box2D.collision.shapes.B2Shape","computeSubmergedArea",0xe68db84e,"box2D.collision.shapes.B2Shape.computeSubmergedArea","box2D/collision/shapes/B2Shape.hx",119,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_122_testOverlap,"box2D.collision.shapes.B2Shape","testOverlap",0x310a6669,"box2D.collision.shapes.B2Shape.testOverlap","box2D/collision/shapes/B2Shape.hx",122,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_154_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",154,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_156_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",156,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_157_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",157,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_158_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",158,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_159_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",159,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_160_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",160,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_183_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",183,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_184_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",184,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_185_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",185,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_186_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",186,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_187_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",187,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_194_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",194,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_196_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",196,0x3c754e3b)
HX_LOCAL_STACK_FRAME(_hx_pos_b4fc528925c2c06a_198_boot,"box2D.collision.shapes.B2Shape","boot",0x3cb0749e,"box2D.collision.shapes.B2Shape.boot","box2D/collision/shapes/B2Shape.hx",198,0x3c754e3b)
namespace box2D{
namespace collision{
namespace shapes{

void B2Shape_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_168_new)
HXLINE( 169)		this->m_type = (int)-1;
HXLINE( 170)		this->m_radius = ::box2D::common::B2Settings_obj::b2_linearSlop;
            	}

Dynamic B2Shape_obj::__CreateEmpty() { return new B2Shape_obj; }

void *B2Shape_obj::_hx_vtable = 0;

Dynamic B2Shape_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2Shape_obj > _hx_result = new B2Shape_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2Shape_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x19eeb38a;
}

 ::box2D::collision::shapes::B2Shape B2Shape_obj::copy(){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_53_copy)
HXDLIN(  53)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2Shape_obj,copy,return )

void B2Shape_obj::set( ::box2D::collision::shapes::B2Shape other){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_63_set)
HXDLIN(  63)		this->m_radius = other->m_radius;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2Shape_obj,set,(void))

int B2Shape_obj::getType(){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_72_getType)
HXDLIN(  72)		return this->m_type;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2Shape_obj,getType,return )

bool B2Shape_obj::testPoint( ::box2D::common::math::B2Transform xf, ::box2D::common::math::B2Vec2 p){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_80_testPoint)
HXDLIN(  80)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(B2Shape_obj,testPoint,return )

bool B2Shape_obj::rayCast( ::box2D::collision::B2RayCastOutput output, ::box2D::collision::B2RayCastInput input, ::box2D::common::math::B2Transform transform){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_90_rayCast)
HXDLIN(  90)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC3(B2Shape_obj,rayCast,return )

void B2Shape_obj::computeAABB( ::box2D::collision::B2AABB aabb, ::box2D::common::math::B2Transform xf){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_98_computeAABB)
            	}


HX_DEFINE_DYNAMIC_FUNC2(B2Shape_obj,computeAABB,(void))

void B2Shape_obj::computeMass( ::box2D::collision::shapes::B2MassData massData,Float density){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_105_computeMass)
            	}


HX_DEFINE_DYNAMIC_FUNC2(B2Shape_obj,computeMass,(void))

Float B2Shape_obj::computeSubmergedArea( ::box2D::common::math::B2Vec2 normal,Float offset, ::box2D::common::math::B2Transform xf, ::box2D::common::math::B2Vec2 c){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_119_computeSubmergedArea)
HXDLIN( 119)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC4(B2Shape_obj,computeSubmergedArea,return )

bool B2Shape_obj::testOverlap( ::box2D::collision::shapes::B2Shape shape1, ::box2D::common::math::B2Transform transform1, ::box2D::collision::shapes::B2Shape shape2, ::box2D::common::math::B2Transform transform2){
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_122_testOverlap)
HXLINE( 137)		if (!(::box2D::collision::shapes::B2Shape_obj::initialized)) {
HXLINE( 139)			::box2D::collision::shapes::B2Shape_obj::distanceInput->proxyA = ::box2D::collision::shapes::B2Shape_obj::proxyA;
HXLINE( 140)			::box2D::collision::shapes::B2Shape_obj::distanceInput->proxyB = ::box2D::collision::shapes::B2Shape_obj::proxyB;
HXLINE( 141)			::box2D::collision::shapes::B2Shape_obj::distanceInput->useRadii = true;
HXLINE( 142)			::box2D::collision::shapes::B2Shape_obj::initialized = true;
            		}
HXLINE( 145)		::box2D::collision::shapes::B2Shape_obj::proxyA->set(shape1);
HXLINE( 146)		::box2D::collision::shapes::B2Shape_obj::proxyB->set(shape2);
HXLINE( 147)		::box2D::collision::shapes::B2Shape_obj::distanceInput->transformA = transform1;
HXLINE( 148)		::box2D::collision::shapes::B2Shape_obj::distanceInput->transformB = transform2;
HXLINE( 149)		::box2D::collision::shapes::B2Shape_obj::simplexCache->count = (int)0;
HXLINE( 150)		::box2D::collision::B2Distance_obj::distance(::box2D::collision::shapes::B2Shape_obj::distanceOutput,::box2D::collision::shapes::B2Shape_obj::simplexCache,::box2D::collision::shapes::B2Shape_obj::distanceInput);
HXLINE( 151)		return (::box2D::collision::shapes::B2Shape_obj::distanceOutput->distance < ((Float)2.2250738585072014e-307));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(B2Shape_obj,testOverlap,return )

bool B2Shape_obj::initialized;

 ::box2D::collision::B2DistanceInput B2Shape_obj::distanceInput;

 ::box2D::collision::B2DistanceProxy B2Shape_obj::proxyA;

 ::box2D::collision::B2DistanceProxy B2Shape_obj::proxyB;

 ::box2D::collision::B2SimplexCache B2Shape_obj::simplexCache;

 ::box2D::collision::B2DistanceOutput B2Shape_obj::distanceOutput;

int B2Shape_obj::e_unknownShape;

int B2Shape_obj::e_circleShape;

int B2Shape_obj::e_polygonShape;

int B2Shape_obj::e_edgeShape;

int B2Shape_obj::e_shapeTypeCount;

int B2Shape_obj::e_hitCollide;

int B2Shape_obj::e_missCollide;

int B2Shape_obj::e_startsInsideCollide;


hx::ObjectPtr< B2Shape_obj > B2Shape_obj::__new() {
	hx::ObjectPtr< B2Shape_obj > __this = new B2Shape_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2Shape_obj > B2Shape_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2Shape_obj *__this = (B2Shape_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2Shape_obj), false, "box2D.collision.shapes.B2Shape"));
	*(void **)__this = B2Shape_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2Shape_obj::B2Shape_obj()
{
}

hx::Val B2Shape_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"copy") ) { return hx::Val( copy_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"m_type") ) { return hx::Val( m_type ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getType") ) { return hx::Val( getType_dyn() ); }
		if (HX_FIELD_EQ(inName,"rayCast") ) { return hx::Val( rayCast_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_radius") ) { return hx::Val( m_radius ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"testPoint") ) { return hx::Val( testPoint_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"computeAABB") ) { return hx::Val( computeAABB_dyn() ); }
		if (HX_FIELD_EQ(inName,"computeMass") ) { return hx::Val( computeMass_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"computeSubmergedArea") ) { return hx::Val( computeSubmergedArea_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool B2Shape_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"proxyA") ) { outValue = ( proxyA ); return true; }
		if (HX_FIELD_EQ(inName,"proxyB") ) { outValue = ( proxyB ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"testOverlap") ) { outValue = testOverlap_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"initialized") ) { outValue = ( initialized ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplexCache") ) { outValue = ( simplexCache ); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceInput") ) { outValue = ( distanceInput ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"distanceOutput") ) { outValue = ( distanceOutput ); return true; }
	}
	return false;
}

hx::Val B2Shape_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"m_type") ) { m_type=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_radius") ) { m_radius=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool B2Shape_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"proxyA") ) { proxyA=ioValue.Cast<  ::box2D::collision::B2DistanceProxy >(); return true; }
		if (HX_FIELD_EQ(inName,"proxyB") ) { proxyB=ioValue.Cast<  ::box2D::collision::B2DistanceProxy >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=ioValue.Cast< bool >(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"simplexCache") ) { simplexCache=ioValue.Cast<  ::box2D::collision::B2SimplexCache >(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"distanceInput") ) { distanceInput=ioValue.Cast<  ::box2D::collision::B2DistanceInput >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"distanceOutput") ) { distanceOutput=ioValue.Cast<  ::box2D::collision::B2DistanceOutput >(); return true; }
	}
	return false;
}

void B2Shape_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_type","\x0c","\x63","\x00","\x95"));
	outFields->push(HX_HCSTRING("m_radius","\x24","\x79","\xe8","\x79"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2Shape_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(B2Shape_obj,m_type),HX_HCSTRING("m_type","\x0c","\x63","\x00","\x95")},
	{hx::fsFloat,(int)offsetof(B2Shape_obj,m_radius),HX_HCSTRING("m_radius","\x24","\x79","\xe8","\x79")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo B2Shape_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &B2Shape_obj::initialized,HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37")},
	{hx::fsObject /*::box2D::collision::B2DistanceInput*/ ,(void *) &B2Shape_obj::distanceInput,HX_HCSTRING("distanceInput","\x95","\xe0","\xa6","\x85")},
	{hx::fsObject /*::box2D::collision::B2DistanceProxy*/ ,(void *) &B2Shape_obj::proxyA,HX_HCSTRING("proxyA","\x13","\xb2","\x60","\xb5")},
	{hx::fsObject /*::box2D::collision::B2DistanceProxy*/ ,(void *) &B2Shape_obj::proxyB,HX_HCSTRING("proxyB","\x14","\xb2","\x60","\xb5")},
	{hx::fsObject /*::box2D::collision::B2SimplexCache*/ ,(void *) &B2Shape_obj::simplexCache,HX_HCSTRING("simplexCache","\x5c","\x8c","\xe0","\xe5")},
	{hx::fsObject /*::box2D::collision::B2DistanceOutput*/ ,(void *) &B2Shape_obj::distanceOutput,HX_HCSTRING("distanceOutput","\x16","\xec","\xf0","\xdc")},
	{hx::fsInt,(void *) &B2Shape_obj::e_unknownShape,HX_HCSTRING("e_unknownShape","\x91","\x92","\xa0","\x4b")},
	{hx::fsInt,(void *) &B2Shape_obj::e_circleShape,HX_HCSTRING("e_circleShape","\xd7","\x98","\xf0","\xa9")},
	{hx::fsInt,(void *) &B2Shape_obj::e_polygonShape,HX_HCSTRING("e_polygonShape","\xa1","\x8d","\x2c","\x3e")},
	{hx::fsInt,(void *) &B2Shape_obj::e_edgeShape,HX_HCSTRING("e_edgeShape","\x0a","\x5a","\xce","\xf0")},
	{hx::fsInt,(void *) &B2Shape_obj::e_shapeTypeCount,HX_HCSTRING("e_shapeTypeCount","\x2e","\x32","\xb7","\x82")},
	{hx::fsInt,(void *) &B2Shape_obj::e_hitCollide,HX_HCSTRING("e_hitCollide","\x45","\x5e","\xe5","\x0b")},
	{hx::fsInt,(void *) &B2Shape_obj::e_missCollide,HX_HCSTRING("e_missCollide","\xc8","\x4d","\x0a","\xd7")},
	{hx::fsInt,(void *) &B2Shape_obj::e_startsInsideCollide,HX_HCSTRING("e_startsInsideCollide","\x37","\xb6","\x59","\x12")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String B2Shape_obj_sMemberFields[] = {
	HX_HCSTRING("copy","\xb5","\xbb","\xc4","\x41"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("getType","\x70","\xa2","\x8b","\x1f"),
	HX_HCSTRING("testPoint","\x9e","\xf2","\x91","\x8f"),
	HX_HCSTRING("rayCast","\xc9","\x5d","\x3c","\x25"),
	HX_HCSTRING("computeAABB","\x97","\x39","\x7f","\xc2"),
	HX_HCSTRING("computeMass","\x0b","\x3c","\x86","\xca"),
	HX_HCSTRING("computeSubmergedArea","\xe2","\x2f","\x3c","\xaf"),
	HX_HCSTRING("m_type","\x0c","\x63","\x00","\x95"),
	HX_HCSTRING("m_radius","\x24","\x79","\xe8","\x79"),
	::String(null()) };

static void B2Shape_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Shape_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Shape_obj::initialized,"initialized");
	HX_MARK_MEMBER_NAME(B2Shape_obj::distanceInput,"distanceInput");
	HX_MARK_MEMBER_NAME(B2Shape_obj::proxyA,"proxyA");
	HX_MARK_MEMBER_NAME(B2Shape_obj::proxyB,"proxyB");
	HX_MARK_MEMBER_NAME(B2Shape_obj::simplexCache,"simplexCache");
	HX_MARK_MEMBER_NAME(B2Shape_obj::distanceOutput,"distanceOutput");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_unknownShape,"e_unknownShape");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_circleShape,"e_circleShape");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_polygonShape,"e_polygonShape");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_edgeShape,"e_edgeShape");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_shapeTypeCount,"e_shapeTypeCount");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_hitCollide,"e_hitCollide");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_missCollide,"e_missCollide");
	HX_MARK_MEMBER_NAME(B2Shape_obj::e_startsInsideCollide,"e_startsInsideCollide");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2Shape_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Shape_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::initialized,"initialized");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::distanceInput,"distanceInput");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::proxyA,"proxyA");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::proxyB,"proxyB");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::simplexCache,"simplexCache");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::distanceOutput,"distanceOutput");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_unknownShape,"e_unknownShape");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_circleShape,"e_circleShape");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_polygonShape,"e_polygonShape");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_edgeShape,"e_edgeShape");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_shapeTypeCount,"e_shapeTypeCount");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_hitCollide,"e_hitCollide");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_missCollide,"e_missCollide");
	HX_VISIT_MEMBER_NAME(B2Shape_obj::e_startsInsideCollide,"e_startsInsideCollide");
};

#endif

hx::Class B2Shape_obj::__mClass;

static ::String B2Shape_obj_sStaticFields[] = {
	HX_HCSTRING("testOverlap","\x55","\x31","\xd9","\x65"),
	HX_HCSTRING("initialized","\x14","\xf5","\x0f","\x37"),
	HX_HCSTRING("distanceInput","\x95","\xe0","\xa6","\x85"),
	HX_HCSTRING("proxyA","\x13","\xb2","\x60","\xb5"),
	HX_HCSTRING("proxyB","\x14","\xb2","\x60","\xb5"),
	HX_HCSTRING("simplexCache","\x5c","\x8c","\xe0","\xe5"),
	HX_HCSTRING("distanceOutput","\x16","\xec","\xf0","\xdc"),
	HX_HCSTRING("e_unknownShape","\x91","\x92","\xa0","\x4b"),
	HX_HCSTRING("e_circleShape","\xd7","\x98","\xf0","\xa9"),
	HX_HCSTRING("e_polygonShape","\xa1","\x8d","\x2c","\x3e"),
	HX_HCSTRING("e_edgeShape","\x0a","\x5a","\xce","\xf0"),
	HX_HCSTRING("e_shapeTypeCount","\x2e","\x32","\xb7","\x82"),
	HX_HCSTRING("e_hitCollide","\x45","\x5e","\xe5","\x0b"),
	HX_HCSTRING("e_missCollide","\xc8","\x4d","\x0a","\xd7"),
	HX_HCSTRING("e_startsInsideCollide","\x37","\xb6","\x59","\x12"),
	::String(null())
};

void B2Shape_obj::__register()
{
	hx::Object *dummy = new B2Shape_obj;
	B2Shape_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.collision.shapes.B2Shape","\x82","\x47","\xbd","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &B2Shape_obj::__GetStatic;
	__mClass->mSetStaticField = &B2Shape_obj::__SetStatic;
	__mClass->mMarkFunc = B2Shape_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(B2Shape_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2Shape_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2Shape_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2Shape_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2Shape_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2Shape_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void B2Shape_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_154_boot)
HXDLIN( 154)		initialized = false;
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b4fc528925c2c06a_156_boot)
HXDLIN( 156)		distanceInput =  ::box2D::collision::B2DistanceInput_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b4fc528925c2c06a_157_boot)
HXDLIN( 157)		proxyA =  ::box2D::collision::B2DistanceProxy_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b4fc528925c2c06a_158_boot)
HXDLIN( 158)		proxyB =  ::box2D::collision::B2DistanceProxy_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b4fc528925c2c06a_159_boot)
HXDLIN( 159)		simplexCache =  ::box2D::collision::B2SimplexCache_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b4fc528925c2c06a_160_boot)
HXDLIN( 160)		distanceOutput =  ::box2D::collision::B2DistanceOutput_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_183_boot)
HXDLIN( 183)		e_unknownShape = (int)-1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_184_boot)
HXDLIN( 184)		e_circleShape = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_185_boot)
HXDLIN( 185)		e_polygonShape = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_186_boot)
HXDLIN( 186)		e_edgeShape = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_187_boot)
HXDLIN( 187)		e_shapeTypeCount = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_194_boot)
HXDLIN( 194)		e_hitCollide = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_196_boot)
HXDLIN( 196)		e_missCollide = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_b4fc528925c2c06a_198_boot)
HXDLIN( 198)		e_startsInsideCollide = (int)-1;
            	}
}

} // end namespace box2D
} // end namespace collision
} // end namespace shapes
