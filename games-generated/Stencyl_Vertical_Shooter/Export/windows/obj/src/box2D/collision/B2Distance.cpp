// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_box2D_collision_B2Simplex
#include <box2D/collision/B2Simplex.h>
#endif
#ifndef INCLUDED_box2D_collision_B2SimplexCache
#include <box2D/collision/B2SimplexCache.h>
#endif
#ifndef INCLUDED_box2D_collision_B2SimplexVertex
#include <box2D/collision/B2SimplexVertex.h>
#endif
#ifndef INCLUDED_box2D_common_B2Settings
#include <box2D/common/B2Settings.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Math
#include <box2D/common/math/B2Math.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_da2d3335ceceb161_45_distance,"box2D.collision.B2Distance","distance",0x0adb1631,"box2D.collision.B2Distance.distance","box2D/collision/B2Distance.hx",45,0x02276c8a)
HX_LOCAL_STACK_FRAME(_hx_pos_da2d3335ceceb161_41_boot,"box2D.collision.B2Distance","boot",0xc3c8d92e,"box2D.collision.B2Distance.boot","box2D/collision/B2Distance.hx",41,0x02276c8a)
HX_LOCAL_STACK_FRAME(_hx_pos_da2d3335ceceb161_42_boot,"box2D.collision.B2Distance","boot",0xc3c8d92e,"box2D.collision.B2Distance.boot","box2D/collision/B2Distance.hx",42,0x02276c8a)
HX_LOCAL_STACK_FRAME(_hx_pos_da2d3335ceceb161_43_boot,"box2D.collision.B2Distance","boot",0xc3c8d92e,"box2D.collision.B2Distance.boot","box2D/collision/B2Distance.hx",43,0x02276c8a)
namespace box2D{
namespace collision{

void B2Distance_obj::__construct() { }

Dynamic B2Distance_obj::__CreateEmpty() { return new B2Distance_obj; }

void *B2Distance_obj::_hx_vtable = 0;

Dynamic B2Distance_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2Distance_obj > _hx_result = new B2Distance_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2Distance_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0143ad7a;
}

int B2Distance_obj::b2_gjkCalls;

int B2Distance_obj::b2_gjkIters;

int B2Distance_obj::b2_gjkMaxIters;

 ::box2D::collision::B2Simplex B2Distance_obj::s_simplex;

::Array< int > B2Distance_obj::s_saveA;

::Array< int > B2Distance_obj::s_saveB;

void B2Distance_obj::distance( ::box2D::collision::B2DistanceOutput output, ::box2D::collision::B2SimplexCache cache, ::box2D::collision::B2DistanceInput input){
            	HX_STACKFRAME(&_hx_pos_da2d3335ceceb161_45_distance)
HXLINE(  46)		++::box2D::collision::B2Distance_obj::b2_gjkCalls;
HXLINE(  48)		 ::box2D::collision::B2DistanceProxy proxyA = input->proxyA;
HXLINE(  49)		 ::box2D::collision::B2DistanceProxy proxyB = input->proxyB;
HXLINE(  51)		 ::box2D::common::math::B2Transform transformA = input->transformA;
HXLINE(  52)		 ::box2D::common::math::B2Transform transformB = input->transformB;
HXLINE(  55)		 ::box2D::collision::B2Simplex simplex = ::box2D::collision::B2Distance_obj::s_simplex;
HXLINE(  56)		simplex->readCache(cache,proxyA,transformA,proxyB,transformB);
HXLINE(  59)		::Array< ::Dynamic> vertices = simplex->m_vertices;
HXLINE(  60)		int k_maxIters = (int)20;
HXLINE(  64)		::Array< int > saveA = ::box2D::collision::B2Distance_obj::s_saveA;
HXLINE(  65)		::Array< int > saveB = ::box2D::collision::B2Distance_obj::s_saveB;
HXLINE(  66)		int saveCount = (int)0;
HXLINE(  68)		 ::box2D::common::math::B2Vec2 closestPoint = simplex->getClosestPoint();
HXLINE(  69)		Float distanceSqr1 = closestPoint->lengthSquared();
HXLINE(  70)		Float distanceSqr2 = distanceSqr1;
HXLINE(  72)		int i;
HXLINE(  73)		 ::box2D::common::math::B2Vec2 p;
HXLINE(  76)		int iter = (int)0;
HXLINE(  77)		while((iter < k_maxIters)){
HXLINE(  81)			saveCount = simplex->m_count;
HXLINE(  82)			{
HXLINE(  82)				int _g1 = (int)0;
HXDLIN(  82)				int _g = saveCount;
HXDLIN(  82)				while((_g1 < _g)){
HXLINE(  82)					_g1 = (_g1 + (int)1);
HXDLIN(  82)					int i1 = (_g1 - (int)1);
HXLINE(  84)					saveA[i1] = vertices->__get(i1).StaticCast<  ::box2D::collision::B2SimplexVertex >()->indexA;
HXLINE(  85)					saveB[i1] = vertices->__get(i1).StaticCast<  ::box2D::collision::B2SimplexVertex >()->indexB;
            				}
            			}
HXLINE(  88)			{
HXLINE(  88)				int _g2 = simplex->m_count;
HXDLIN(  88)				switch((int)(_g2)){
            					case (int)1: {
            					}
            					break;
            					case (int)2: {
HXLINE(  93)						simplex->solve2();
            					}
            					break;
            					case (int)3: {
HXLINE(  96)						simplex->solve3();
            					}
            					break;
            					default:{
HXLINE(  99)						::box2D::common::B2Settings_obj::b2Assert(false);
            					}
            				}
            			}
HXLINE( 103)			if ((simplex->m_count == (int)3)) {
HXLINE( 105)				goto _hx_goto_0;
            			}
HXLINE( 109)			p = simplex->getClosestPoint();
HXLINE( 110)			distanceSqr2 = p->lengthSquared();
HXLINE( 114)			bool _hx_tmp = (distanceSqr2 > distanceSqr1);
HXLINE( 118)			distanceSqr1 = distanceSqr2;
HXLINE( 121)			 ::box2D::common::math::B2Vec2 d = simplex->getSearchDirection();
HXLINE( 124)			if ((d->lengthSquared() < ((Float)0.))) {
HXLINE( 132)				goto _hx_goto_0;
            			}
HXLINE( 136)			 ::box2D::collision::B2SimplexVertex vertex = vertices->__get(simplex->m_count).StaticCast<  ::box2D::collision::B2SimplexVertex >();
HXLINE( 137)			 ::box2D::common::math::B2Mat22 transformA1 = transformA->R;
HXDLIN( 137)			vertex->indexA = ::Std_obj::_hx_int(proxyA->getSupport(::box2D::common::math::B2Math_obj::mulTMV(transformA1,d->getNegativePooled(),true)));
HXLINE( 138)			vertex->wA = ::box2D::common::math::B2Math_obj::mulX(transformA,proxyA->getVertex(vertex->indexA),true);
HXLINE( 139)			vertex->indexB = ::Std_obj::_hx_int(proxyB->getSupport(::box2D::common::math::B2Math_obj::mulTMV(transformB->R,d,true)));
HXLINE( 140)			vertex->wB = ::box2D::common::math::B2Math_obj::mulX(transformB,proxyB->getVertex(vertex->indexB),true);
HXLINE( 141)			vertex->w = ::box2D::common::math::B2Math_obj::subtractVVPooled(vertex->wB,vertex->wA);
HXLINE( 144)			iter = (iter + (int)1);
HXLINE( 145)			++::box2D::collision::B2Distance_obj::b2_gjkIters;
HXLINE( 148)			bool duplicate = false;
HXLINE( 149)			{
HXLINE( 149)				int _g21 = (int)0;
HXDLIN( 149)				int _g11 = saveCount;
HXDLIN( 149)				while((_g21 < _g11)){
HXLINE( 149)					_g21 = (_g21 + (int)1);
HXDLIN( 149)					int i2 = (_g21 - (int)1);
HXLINE( 151)					bool _hx_tmp1;
HXDLIN( 151)					int vertex1 = vertex->indexA;
HXDLIN( 151)					if ((vertex1 == saveA->__get(i2))) {
HXLINE( 151)						int vertex2 = vertex->indexB;
HXDLIN( 151)						_hx_tmp1 = (vertex2 == saveB->__get(i2));
            					}
            					else {
HXLINE( 151)						_hx_tmp1 = false;
            					}
HXDLIN( 151)					if (_hx_tmp1) {
HXLINE( 153)						duplicate = true;
HXLINE( 154)						goto _hx_goto_2;
            					}
            				}
            				_hx_goto_2:;
            			}
HXLINE( 159)			if (duplicate) {
HXLINE( 161)				goto _hx_goto_0;
            			}
HXLINE( 165)			++simplex->m_count;
            		}
            		_hx_goto_0:;
HXLINE( 168)		::box2D::collision::B2Distance_obj::b2_gjkMaxIters = ::Std_obj::_hx_int(::box2D::common::math::B2Math_obj::max(::box2D::collision::B2Distance_obj::b2_gjkMaxIters,iter));
HXLINE( 171)		simplex->getWitnessPoints(output->pointA,output->pointB);
HXLINE( 172)		output->distance = ::box2D::common::math::B2Math_obj::subtractVVPooled(output->pointA,output->pointB)->length();
HXLINE( 173)		output->iterations = iter;
HXLINE( 176)		simplex->writeCache(cache);
HXLINE( 179)		if (input->useRadii) {
HXLINE( 181)			Float rA = proxyA->m_radius;
HXLINE( 182)			Float rB = proxyB->m_radius;
HXLINE( 184)			bool _hx_tmp2;
HXDLIN( 184)			Float output1 = output->distance;
HXDLIN( 184)			if ((output1 > (rA + rB))) {
HXLINE( 184)				_hx_tmp2 = (output->distance > ((Float)2.2250738585072014e-308));
            			}
            			else {
HXLINE( 184)				_hx_tmp2 = false;
            			}
HXDLIN( 184)			if (_hx_tmp2) {
HXLINE( 188)				 ::box2D::collision::B2DistanceOutput output2 = output;
HXDLIN( 188)				output2->distance = (output2->distance - (rA + rB));
HXLINE( 189)				 ::box2D::common::math::B2Vec2 normal = ::box2D::common::math::B2Math_obj::subtractVVPooled(output->pointB,output->pointA);
HXLINE( 190)				normal->normalize();
HXLINE( 191)				 ::box2D::common::math::B2Vec2 output3 = output->pointA;
HXDLIN( 191)				output3->x = (output3->x + (rA * normal->x));
HXLINE( 192)				 ::box2D::common::math::B2Vec2 output4 = output->pointA;
HXDLIN( 192)				output4->y = (output4->y + (rA * normal->y));
HXLINE( 193)				 ::box2D::common::math::B2Vec2 output5 = output->pointB;
HXDLIN( 193)				output5->x = (output5->x - (rB * normal->x));
HXLINE( 194)				 ::box2D::common::math::B2Vec2 output6 = output->pointB;
HXDLIN( 194)				output6->y = (output6->y - (rB * normal->y));
            			}
            			else {
HXLINE( 201)				p = ::box2D::common::math::B2Vec2_obj::getFromPool();
HXLINE( 202)				p->x = (((Float).5) * (output->pointA->x + output->pointB->x));
HXLINE( 203)				p->y = (((Float).5) * (output->pointA->y + output->pointB->y));
HXLINE( 204)				output->pointA->x = (output->pointB->x = p->x);
HXLINE( 205)				output->pointA->y = (output->pointB->y = p->y);
HXLINE( 206)				output->distance = ((Float)0.0);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Distance_obj,distance,(void))


B2Distance_obj::B2Distance_obj()
{
}

bool B2Distance_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"s_saveA") ) { outValue = ( s_saveA ); return true; }
		if (HX_FIELD_EQ(inName,"s_saveB") ) { outValue = ( s_saveB ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"s_simplex") ) { outValue = ( s_simplex ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"b2_gjkCalls") ) { outValue = ( b2_gjkCalls ); return true; }
		if (HX_FIELD_EQ(inName,"b2_gjkIters") ) { outValue = ( b2_gjkIters ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"b2_gjkMaxIters") ) { outValue = ( b2_gjkMaxIters ); return true; }
	}
	return false;
}

bool B2Distance_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"s_saveA") ) { s_saveA=ioValue.Cast< ::Array< int > >(); return true; }
		if (HX_FIELD_EQ(inName,"s_saveB") ) { s_saveB=ioValue.Cast< ::Array< int > >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"s_simplex") ) { s_simplex=ioValue.Cast<  ::box2D::collision::B2Simplex >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"b2_gjkCalls") ) { b2_gjkCalls=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"b2_gjkIters") ) { b2_gjkIters=ioValue.Cast< int >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"b2_gjkMaxIters") ) { b2_gjkMaxIters=ioValue.Cast< int >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *B2Distance_obj_sMemberStorageInfo = 0;
static hx::StaticInfo B2Distance_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &B2Distance_obj::b2_gjkCalls,HX_HCSTRING("b2_gjkCalls","\xdc","\x03","\xee","\x02")},
	{hx::fsInt,(void *) &B2Distance_obj::b2_gjkIters,HX_HCSTRING("b2_gjkIters","\x22","\x42","\xdf","\x83")},
	{hx::fsInt,(void *) &B2Distance_obj::b2_gjkMaxIters,HX_HCSTRING("b2_gjkMaxIters","\xb0","\x87","\x11","\x75")},
	{hx::fsObject /*::box2D::collision::B2Simplex*/ ,(void *) &B2Distance_obj::s_simplex,HX_HCSTRING("s_simplex","\xfa","\x2c","\xcf","\xb2")},
	{hx::fsObject /*Array< int >*/ ,(void *) &B2Distance_obj::s_saveA,HX_HCSTRING("s_saveA","\x58","\xea","\x97","\x21")},
	{hx::fsObject /*Array< int >*/ ,(void *) &B2Distance_obj::s_saveB,HX_HCSTRING("s_saveB","\x59","\xea","\x97","\x21")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void B2Distance_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Distance_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Distance_obj::b2_gjkCalls,"b2_gjkCalls");
	HX_MARK_MEMBER_NAME(B2Distance_obj::b2_gjkIters,"b2_gjkIters");
	HX_MARK_MEMBER_NAME(B2Distance_obj::b2_gjkMaxIters,"b2_gjkMaxIters");
	HX_MARK_MEMBER_NAME(B2Distance_obj::s_simplex,"s_simplex");
	HX_MARK_MEMBER_NAME(B2Distance_obj::s_saveA,"s_saveA");
	HX_MARK_MEMBER_NAME(B2Distance_obj::s_saveB,"s_saveB");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2Distance_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Distance_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Distance_obj::b2_gjkCalls,"b2_gjkCalls");
	HX_VISIT_MEMBER_NAME(B2Distance_obj::b2_gjkIters,"b2_gjkIters");
	HX_VISIT_MEMBER_NAME(B2Distance_obj::b2_gjkMaxIters,"b2_gjkMaxIters");
	HX_VISIT_MEMBER_NAME(B2Distance_obj::s_simplex,"s_simplex");
	HX_VISIT_MEMBER_NAME(B2Distance_obj::s_saveA,"s_saveA");
	HX_VISIT_MEMBER_NAME(B2Distance_obj::s_saveB,"s_saveB");
};

#endif

hx::Class B2Distance_obj::__mClass;

static ::String B2Distance_obj_sStaticFields[] = {
	HX_HCSTRING("b2_gjkCalls","\xdc","\x03","\xee","\x02"),
	HX_HCSTRING("b2_gjkIters","\x22","\x42","\xdf","\x83"),
	HX_HCSTRING("b2_gjkMaxIters","\xb0","\x87","\x11","\x75"),
	HX_HCSTRING("s_simplex","\xfa","\x2c","\xcf","\xb2"),
	HX_HCSTRING("s_saveA","\x58","\xea","\x97","\x21"),
	HX_HCSTRING("s_saveB","\x59","\xea","\x97","\x21"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	::String(null())
};

void B2Distance_obj::__register()
{
	hx::Object *dummy = new B2Distance_obj;
	B2Distance_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.collision.B2Distance","\xf2","\x2c","\x9f","\x6f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &B2Distance_obj::__GetStatic;
	__mClass->mSetStaticField = &B2Distance_obj::__SetStatic;
	__mClass->mMarkFunc = B2Distance_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(B2Distance_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< B2Distance_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2Distance_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2Distance_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2Distance_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void B2Distance_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_da2d3335ceceb161_41_boot)
HXDLIN(  41)		s_simplex =  ::box2D::collision::B2Simplex_obj::__alloc( HX_CTX );
            	}
{
            	HX_STACKFRAME(&_hx_pos_da2d3335ceceb161_42_boot)
HXDLIN(  42)		s_saveA = ::Array_obj< int >::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_da2d3335ceceb161_43_boot)
HXDLIN(  43)		s_saveB = ::Array_obj< int >::__new();
            	}
}

} // end namespace box2D
} // end namespace collision