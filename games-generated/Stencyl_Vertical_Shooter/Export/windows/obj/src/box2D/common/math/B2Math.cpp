// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
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

HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_35_isValid,"box2D.common.math.B2Math","isValid",0xc613d730,"box2D.common.math.B2Math.isValid","box2D/common/math/B2Math.hx",35,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_63_dot,"box2D.common.math.B2Math","dot",0xba856a07,"box2D.common.math.B2Math.dot","box2D/common/math/B2Math.hx",63,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_68_crossVV,"box2D.common.math.B2Math","crossVV",0xd727493e,"box2D.common.math.B2Math.crossVV","box2D/common/math/B2Math.hx",68,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_72_crossVF,"box2D.common.math.B2Math","crossVF",0xd727492e,"box2D.common.math.B2Math.crossVF","box2D/common/math/B2Math.hx",72,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_90_crossFV,"box2D.common.math.B2Math","crossFV",0xd7273b4e,"box2D.common.math.B2Math.crossFV","box2D/common/math/B2Math.hx",90,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_108_mulMV,"box2D.common.math.B2Math","mulMV",0xa8c5eb6b,"box2D.common.math.B2Math.mulMV","box2D/common/math/B2Math.hx",108,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_126_mulTMV,"box2D.common.math.B2Math","mulTMV",0x046d5a7b,"box2D.common.math.B2Math.mulTMV","box2D/common/math/B2Math.hx",126,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_144_mulX,"box2D.common.math.B2Math","mulX",0x802ece96,"box2D.common.math.B2Math.mulX","box2D/common/math/B2Math.hx",144,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_152_mulXT,"box2D.common.math.B2Math","mulXT",0xa8c5f4fe,"box2D.common.math.B2Math.mulXT","box2D/common/math/B2Math.hx",152,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_161_addVV,"box2D.common.math.B2Math","addVV",0xb4b44a9f,"box2D.common.math.B2Math.addVV","box2D/common/math/B2Math.hx",161,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_168_subtractVV,"box2D.common.math.B2Math","subtractVV",0xfc461196,"box2D.common.math.B2Math.subtractVV","box2D/common/math/B2Math.hx",168,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_172_subtractVVPooled,"box2D.common.math.B2Math","subtractVVPooled",0xeef4a271,"box2D.common.math.B2Math.subtractVVPooled","box2D/common/math/B2Math.hx",172,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_178_distance,"box2D.common.math.B2Math","distance",0x4f2a82f7,"box2D.common.math.B2Math.distance","box2D/common/math/B2Math.hx",178,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_184_distanceSquared,"box2D.common.math.B2Math","distanceSquared",0x5fd58af0,"box2D.common.math.B2Math.distanceSquared","box2D/common/math/B2Math.hx",184,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_191_mulFV,"box2D.common.math.B2Math","mulFV",0xa8c5e552,"box2D.common.math.B2Math.mulFV","box2D/common/math/B2Math.hx",191,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_197_addMM,"box2D.common.math.B2Math","addMM",0xb4b442bf,"box2D.common.math.B2Math.addMM","box2D/common/math/B2Math.hx",197,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_204_mulMM,"box2D.common.math.B2Math","mulMM",0xa8c5eb62,"box2D.common.math.B2Math.mulMM","box2D/common/math/B2Math.hx",204,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_211_mulTMM,"box2D.common.math.B2Math","mulTMM",0x046d5a72,"box2D.common.math.B2Math.mulTMM","box2D/common/math/B2Math.hx",211,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_220_abs,"box2D.common.math.B2Math","abs",0xba8317f0,"box2D.common.math.B2Math.abs","box2D/common/math/B2Math.hx",220,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_224_absV,"box2D.common.math.B2Math","absV",0x7831da66,"box2D.common.math.B2Math.absV","box2D/common/math/B2Math.hx",224,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_230_absM,"box2D.common.math.B2Math","absM",0x7831da5d,"box2D.common.math.B2Math.absM","box2D/common/math/B2Math.hx",230,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_237_min,"box2D.common.math.B2Math","min",0xba8c3910,"box2D.common.math.B2Math.min","box2D/common/math/B2Math.hx",237,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_241_minV,"box2D.common.math.B2Math","minV",0x8025b546,"box2D.common.math.B2Math.minV","box2D/common/math/B2Math.hx",241,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_248_max,"box2D.common.math.B2Math","max",0xba8c3222,"box2D.common.math.B2Math.max","box2D/common/math/B2Math.hx",248,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_252_maxV,"box2D.common.math.B2Math","maxV",0x801fabf4,"box2D.common.math.B2Math.maxV","box2D/common/math/B2Math.hx",252,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_259_clamp,"box2D.common.math.B2Math","clamp",0xe0c8f5f9,"box2D.common.math.B2Math.clamp","box2D/common/math/B2Math.hx",259,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_264_clampV,"box2D.common.math.B2Math","clampV",0xcf0e443d,"box2D.common.math.B2Math.clampV","box2D/common/math/B2Math.hx",264,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_268_swap,"box2D.common.math.B2Math","swap",0x84279155,"box2D.common.math.B2Math.swap","box2D/common/math/B2Math.hx",268,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_277_random,"box2D.common.math.B2Math","random",0x81913d45,"box2D.common.math.B2Math.random","box2D/common/math/B2Math.hx",277,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_281_randomRange,"box2D.common.math.B2Math","randomRange",0x03be9e38,"box2D.common.math.B2Math.randomRange","box2D/common/math/B2Math.hx",281,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_293_nextPowerOfTwo,"box2D.common.math.B2Math","nextPowerOfTwo",0xb7a14285,"box2D.common.math.B2Math.nextPowerOfTwo","box2D/common/math/B2Math.hx",293,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_303_isPowerOfTwo,"box2D.common.math.B2Math","isPowerOfTwo",0x705edfbc,"box2D.common.math.B2Math.isPowerOfTwo","box2D/common/math/B2Math.hx",303,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_320_boot,"box2D.common.math.B2Math","boot",0x78e4eaf4,"box2D.common.math.B2Math.boot","box2D/common/math/B2Math.hx",320,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_321_boot,"box2D.common.math.B2Math","boot",0x78e4eaf4,"box2D.common.math.B2Math.boot","box2D/common/math/B2Math.hx",321,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_322_boot,"box2D.common.math.B2Math","boot",0x78e4eaf4,"box2D.common.math.B2Math.boot","box2D/common/math/B2Math.hx",322,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_341_boot,"box2D.common.math.B2Math","boot",0x78e4eaf4,"box2D.common.math.B2Math.boot","box2D/common/math/B2Math.hx",341,0x06538f51)
HX_LOCAL_STACK_FRAME(_hx_pos_b5bae29554fc8931_342_boot,"box2D.common.math.B2Math","boot",0x78e4eaf4,"box2D.common.math.B2Math.boot","box2D/common/math/B2Math.hx",342,0x06538f51)
namespace box2D{
namespace common{
namespace math{

void B2Math_obj::__construct() { }

Dynamic B2Math_obj::__CreateEmpty() { return new B2Math_obj; }

void *B2Math_obj::_hx_vtable = 0;

Dynamic B2Math_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2Math_obj > _hx_result = new B2Math_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2Math_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ed81c68;
}

bool B2Math_obj::isValid(Float x){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_35_isValid)
HXLINE(  36)		bool _hx_tmp;
HXDLIN(  36)		bool _hx_tmp1;
HXDLIN(  36)		if (!(::Math_obj::isNaN(x))) {
HXLINE(  36)			_hx_tmp1 = (x == ::Math_obj::NEGATIVE_INFINITY);
            		}
            		else {
HXLINE(  36)			_hx_tmp1 = true;
            		}
HXDLIN(  36)		if (!(_hx_tmp1)) {
HXLINE(  36)			_hx_tmp = (x == ::Math_obj::POSITIVE_INFINITY);
            		}
            		else {
HXLINE(  36)			_hx_tmp = true;
            		}
HXDLIN(  36)		if (_hx_tmp) {
HXLINE(  38)			return false;
            		}
HXLINE(  42)		return true;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,isValid,return )

Float B2Math_obj::dot( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_63_dot)
HXDLIN(  63)		Float _hx_tmp = (a->x * b->x);
HXDLIN(  63)		return (_hx_tmp + (a->y * b->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,dot,return )

Float B2Math_obj::crossVV( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_68_crossVV)
HXDLIN(  68)		Float _hx_tmp = (a->x * b->y);
HXDLIN(  68)		return (_hx_tmp - (a->y * b->x));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,crossVV,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::crossVF( ::box2D::common::math::B2Vec2 a,Float s,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_72_crossVF)
HXLINE(  73)		 ::box2D::common::math::B2Vec2 v;
HXLINE(  75)		if (fromPool) {
HXLINE(  77)			v = ::box2D::common::math::B2Vec2_obj::getFromPool();
HXLINE(  78)			{
HXLINE(  78)				Float y_ = (-(s) * a->x);
HXDLIN(  78)				v->x = (s * a->y);
HXDLIN(  78)				v->y = y_;
            			}
            		}
            		else {
HXLINE(  83)			Float v1 = (s * a->y);
HXDLIN(  83)			v =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,v1,(-(s) * a->x));
            		}
HXLINE(  86)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,crossVF,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::crossFV(Float s, ::box2D::common::math::B2Vec2 a,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_90_crossFV)
HXLINE(  91)		 ::box2D::common::math::B2Vec2 v;
HXLINE(  93)		if (fromPool) {
HXLINE(  95)			v = ::box2D::common::math::B2Vec2_obj::getFromPool();
HXLINE(  96)			{
HXLINE(  96)				Float y_ = (s * a->x);
HXDLIN(  96)				v->x = (-(s) * a->y);
HXDLIN(  96)				v->y = y_;
            			}
            		}
            		else {
HXLINE( 101)			Float v1 = (-(s) * a->y);
HXDLIN( 101)			v =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,v1,(s * a->x));
            		}
HXLINE( 104)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,crossFV,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::mulMV( ::box2D::common::math::B2Mat22 A, ::box2D::common::math::B2Vec2 v,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_108_mulMV)
HXLINE( 109)		 ::box2D::common::math::B2Vec2 vec;
HXLINE( 111)		if (fromPool) {
HXLINE( 113)			vec = ::box2D::common::math::B2Vec2_obj::getFromPool();
HXLINE( 114)			{
HXLINE( 114)				Float x_ = (A->col1->x * v->x);
HXDLIN( 114)				Float y_ = (A->col1->y * v->x);
HXDLIN( 114)				vec->x = (x_ + (A->col2->x * v->y));
HXDLIN( 114)				vec->y = (y_ + (A->col2->y * v->y));
            			}
            		}
            		else {
HXLINE( 119)			Float vec1 = (A->col1->x * v->x);
HXDLIN( 119)			Float vec2 = (vec1 + (A->col2->x * v->y));
HXDLIN( 119)			Float vec3 = (A->col1->y * v->x);
HXDLIN( 119)			vec =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,vec2,(vec3 + (A->col2->y * v->y)));
            		}
HXLINE( 122)		return vec;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,mulMV,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::mulTMV( ::box2D::common::math::B2Mat22 A, ::box2D::common::math::B2Vec2 v,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_126_mulTMV)
HXLINE( 127)		 ::box2D::common::math::B2Vec2 vec;
HXLINE( 129)		if (fromPool) {
HXLINE( 131)			vec = ::box2D::common::math::B2Vec2_obj::getFromPool();
HXLINE( 132)			{
HXLINE( 132)				Float x_ = ::box2D::common::math::B2Math_obj::dot(v,A->col1);
HXDLIN( 132)				Float y_ = ::box2D::common::math::B2Math_obj::dot(v,A->col2);
HXDLIN( 132)				vec->x = x_;
HXDLIN( 132)				vec->y = y_;
            			}
            		}
            		else {
HXLINE( 137)			Float vec1 = ::box2D::common::math::B2Math_obj::dot(v,A->col1);
HXDLIN( 137)			vec =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,vec1,::box2D::common::math::B2Math_obj::dot(v,A->col2));
            		}
HXLINE( 140)		return vec;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,mulTMV,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::mulX( ::box2D::common::math::B2Transform T, ::box2D::common::math::B2Vec2 v,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_144_mulX)
HXLINE( 145)		 ::box2D::common::math::B2Vec2 a = ::box2D::common::math::B2Math_obj::mulMV(T->R,v,fromPool);
HXLINE( 146)		 ::box2D::common::math::B2Vec2 a1 = a;
HXDLIN( 146)		a1->x = (a1->x + T->position->x);
HXLINE( 147)		 ::box2D::common::math::B2Vec2 a2 = a;
HXDLIN( 147)		a2->y = (a2->y + T->position->y);
HXLINE( 148)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,mulX,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::mulXT( ::box2D::common::math::B2Transform T, ::box2D::common::math::B2Vec2 v,hx::Null< bool >  __o_fromPool){
bool fromPool = __o_fromPool.Default(false);
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_152_mulXT)
HXLINE( 153)		 ::box2D::common::math::B2Vec2 a = ::box2D::common::math::B2Math_obj::subtractVVPooled(v,T->position);
HXLINE( 154)		Float tX = (a->x * T->R->col1->x);
HXDLIN( 154)		Float tX1 = (tX + (a->y * T->R->col1->y));
HXLINE( 155)		Float _hx_tmp = (a->x * T->R->col2->x);
HXDLIN( 155)		a->y = (_hx_tmp + (a->y * T->R->col2->y));
HXLINE( 156)		a->x = tX1;
HXLINE( 157)		return a;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,mulXT,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::addVV( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_161_addVV)
HXLINE( 162)		Float v = (a->x + b->x);
HXDLIN( 162)		 ::box2D::common::math::B2Vec2 v1 =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,v,(a->y + b->y));
HXLINE( 163)		return v1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,addVV,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::subtractVV( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_168_subtractVV)
HXDLIN( 168)		Float _hx_tmp = (a->x - b->x);
HXDLIN( 168)		return  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,_hx_tmp,(a->y - b->y));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,subtractVV,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::subtractVVPooled( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_172_subtractVVPooled)
HXLINE( 173)		 ::box2D::common::math::B2Vec2 v = ::box2D::common::math::B2Vec2_obj::getFromPool();
HXLINE( 174)		{
HXLINE( 174)			v->x = (a->x - b->x);
HXDLIN( 174)			v->y = (a->y - b->y);
            		}
HXLINE( 175)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,subtractVVPooled,return )

Float B2Math_obj::distance( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_178_distance)
HXLINE( 179)		Float cX = (a->x - b->x);
HXLINE( 180)		Float cY = (a->y - b->y);
HXLINE( 181)		return ::Math_obj::sqrt(((cX * cX) + (cY * cY)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,distance,return )

Float B2Math_obj::distanceSquared( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_184_distanceSquared)
HXLINE( 185)		Float cX = (a->x - b->x);
HXLINE( 186)		Float cY = (a->y - b->y);
HXLINE( 187)		return ((cX * cX) + (cY * cY));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,distanceSquared,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::mulFV(Float s, ::box2D::common::math::B2Vec2 a){
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_191_mulFV)
HXLINE( 192)		Float v = (s * a->x);
HXDLIN( 192)		 ::box2D::common::math::B2Vec2 v1 =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,v,(s * a->y));
HXLINE( 193)		return v1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,mulFV,return )

 ::box2D::common::math::B2Mat22 B2Math_obj::addMM( ::box2D::common::math::B2Mat22 A, ::box2D::common::math::B2Mat22 B){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_197_addMM)
HXLINE( 198)		 ::box2D::common::math::B2Vec2 C = ::box2D::common::math::B2Math_obj::addVV(A->col1,B->col1);
HXDLIN( 198)		 ::box2D::common::math::B2Mat22 C1 = ::box2D::common::math::B2Mat22_obj::fromVV(C,::box2D::common::math::B2Math_obj::addVV(A->col2,B->col2));
HXLINE( 199)		return C1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,addMM,return )

 ::box2D::common::math::B2Mat22 B2Math_obj::mulMM( ::box2D::common::math::B2Mat22 A, ::box2D::common::math::B2Mat22 B){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_204_mulMM)
HXLINE( 205)		 ::box2D::common::math::B2Vec2 C = ::box2D::common::math::B2Math_obj::mulMV(A,B->col1,null());
HXDLIN( 205)		 ::box2D::common::math::B2Mat22 C1 = ::box2D::common::math::B2Mat22_obj::fromVV(C,::box2D::common::math::B2Math_obj::mulMV(A,B->col2,null()));
HXLINE( 206)		return C1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,mulMM,return )

 ::box2D::common::math::B2Mat22 B2Math_obj::mulTMM( ::box2D::common::math::B2Mat22 A, ::box2D::common::math::B2Mat22 B){
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_211_mulTMM)
HXLINE( 212)		Float c1 = ::box2D::common::math::B2Math_obj::dot(A->col1,B->col1);
HXDLIN( 212)		 ::box2D::common::math::B2Vec2 c11 =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,c1,::box2D::common::math::B2Math_obj::dot(A->col2,B->col1));
HXLINE( 213)		Float c2 = ::box2D::common::math::B2Math_obj::dot(A->col1,B->col2);
HXDLIN( 213)		 ::box2D::common::math::B2Vec2 c21 =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,c2,::box2D::common::math::B2Math_obj::dot(A->col2,B->col2));
HXLINE( 214)		 ::box2D::common::math::B2Mat22 C = ::box2D::common::math::B2Mat22_obj::fromVV(c11,c21);
HXLINE( 215)		return C;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,mulTMM,return )

Float B2Math_obj::abs(Float a){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_220_abs)
HXDLIN( 220)		if ((a > ((Float)0.0))) {
HXDLIN( 220)			return a;
            		}
            		else {
HXDLIN( 220)			return -(a);
            		}
HXDLIN( 220)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,abs,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::absV( ::box2D::common::math::B2Vec2 a){
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_224_absV)
HXLINE( 225)		Float b = ::box2D::common::math::B2Math_obj::abs(a->x);
HXDLIN( 225)		 ::box2D::common::math::B2Vec2 b1 =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,b,::box2D::common::math::B2Math_obj::abs(a->y));
HXLINE( 226)		return b1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,absV,return )

 ::box2D::common::math::B2Mat22 B2Math_obj::absM( ::box2D::common::math::B2Mat22 A){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_230_absM)
HXLINE( 231)		 ::box2D::common::math::B2Vec2 B = ::box2D::common::math::B2Math_obj::absV(A->col1);
HXDLIN( 231)		 ::box2D::common::math::B2Mat22 B1 = ::box2D::common::math::B2Mat22_obj::fromVV(B,::box2D::common::math::B2Math_obj::absV(A->col2));
HXLINE( 232)		return B1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,absM,return )

Float B2Math_obj::min(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_237_min)
HXDLIN( 237)		if ((a < b)) {
HXDLIN( 237)			return a;
            		}
            		else {
HXDLIN( 237)			return b;
            		}
HXDLIN( 237)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,min,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::minV( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_241_minV)
HXLINE( 242)		Float c = ::box2D::common::math::B2Math_obj::min(a->x,b->x);
HXDLIN( 242)		 ::box2D::common::math::B2Vec2 c1 =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,c,::box2D::common::math::B2Math_obj::min(a->y,b->y));
HXLINE( 243)		return c1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,minV,return )

Float B2Math_obj::max(Float a,Float b){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_248_max)
HXDLIN( 248)		if ((a > b)) {
HXDLIN( 248)			return a;
            		}
            		else {
HXDLIN( 248)			return b;
            		}
HXDLIN( 248)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,max,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::maxV( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 b){
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_252_maxV)
HXLINE( 253)		Float c = ::box2D::common::math::B2Math_obj::max(a->x,b->x);
HXDLIN( 253)		 ::box2D::common::math::B2Vec2 c1 =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,c,::box2D::common::math::B2Math_obj::max(a->y,b->y));
HXLINE( 254)		return c1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,maxV,return )

Float B2Math_obj::clamp(Float a,Float low,Float high){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_259_clamp)
HXDLIN( 259)		if ((a < low)) {
HXDLIN( 259)			return low;
            		}
            		else {
HXDLIN( 259)			if ((a > high)) {
HXDLIN( 259)				return high;
            			}
            			else {
HXDLIN( 259)				return a;
            			}
            		}
HXDLIN( 259)		return ((Float)0.);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,clamp,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::clampV( ::box2D::common::math::B2Vec2 a, ::box2D::common::math::B2Vec2 low, ::box2D::common::math::B2Vec2 high){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_264_clampV)
HXDLIN( 264)		return ::box2D::common::math::B2Math_obj::maxV(low,::box2D::common::math::B2Math_obj::minV(a,high));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(B2Math_obj,clampV,return )

void B2Math_obj::swap(::cpp::VirtualArray a,::cpp::VirtualArray b){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_268_swap)
HXLINE( 269)		 ::Dynamic tmp = a->__get((int)0);
HXLINE( 270)		a->set((int)0,b->__get((int)0));
HXLINE( 271)		b->set((int)0,tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,swap,(void))

Float B2Math_obj::random(){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_277_random)
HXDLIN( 277)		return ((::Math_obj::random() * (int)2) - (int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(B2Math_obj,random,return )

Float B2Math_obj::randomRange(Float lo,Float hi){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_281_randomRange)
HXLINE( 282)		Float r = ::Math_obj::random();
HXLINE( 283)		r = (((hi - lo) * r) + lo);
HXLINE( 284)		return r;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(B2Math_obj,randomRange,return )

int B2Math_obj::nextPowerOfTwo(int x){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_293_nextPowerOfTwo)
HXLINE( 294)		x = ((int)x | (int)((int)((int)x >> (int)(int)1) & (int)(int)2147483647));
HXLINE( 295)		x = ((int)x | (int)((int)((int)x >> (int)(int)2) & (int)(int)1073741823));
HXLINE( 296)		x = ((int)x | (int)((int)((int)x >> (int)(int)4) & (int)(int)268435455));
HXLINE( 297)		x = ((int)x | (int)((int)((int)x >> (int)(int)8) & (int)(int)16777215));
HXLINE( 298)		x = ((int)x | (int)((int)((int)x >> (int)(int)16) & (int)(int)65535));
HXLINE( 299)		return (x + (int)1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,nextPowerOfTwo,return )

bool B2Math_obj::isPowerOfTwo(int x){
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_303_isPowerOfTwo)
HXLINE( 304)		bool result;
HXDLIN( 304)		if ((x > (int)0)) {
HXLINE( 304)			result = (((int)x & (int)(x - (int)1)) == (int)0);
            		}
            		else {
HXLINE( 304)			result = false;
            		}
HXLINE( 305)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(B2Math_obj,isPowerOfTwo,return )

 ::box2D::common::math::B2Vec2 B2Math_obj::b2Vec2_zero;

 ::box2D::common::math::B2Mat22 B2Math_obj::b2Mat22_identity;

 ::box2D::common::math::B2Transform B2Math_obj::b2Transform_identity;

Float B2Math_obj::MIN_VALUE;

Float B2Math_obj::MAX_VALUE;


B2Math_obj::B2Math_obj()
{
}

bool B2Math_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"dot") ) { outValue = dot_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"abs") ) { outValue = abs_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"min") ) { outValue = min_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"max") ) { outValue = max_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mulX") ) { outValue = mulX_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"absV") ) { outValue = absV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"absM") ) { outValue = absM_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"minV") ) { outValue = minV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"maxV") ) { outValue = maxV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"swap") ) { outValue = swap_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mulMV") ) { outValue = mulMV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mulXT") ) { outValue = mulXT_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addVV") ) { outValue = addVV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mulFV") ) { outValue = mulFV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"addMM") ) { outValue = addMM_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mulMM") ) { outValue = mulMM_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clamp") ) { outValue = clamp_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"mulTMV") ) { outValue = mulTMV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"mulTMM") ) { outValue = mulTMM_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"clampV") ) { outValue = clampV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"random") ) { outValue = random_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isValid") ) { outValue = isValid_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"crossVV") ) { outValue = crossVV_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"crossVF") ) { outValue = crossVF_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"crossFV") ) { outValue = crossFV_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { outValue = distance_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"subtractVV") ) { outValue = subtractVV_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"randomRange") ) { outValue = randomRange_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"b2Vec2_zero") ) { outValue = ( b2Vec2_zero ); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isPowerOfTwo") ) { outValue = isPowerOfTwo_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"nextPowerOfTwo") ) { outValue = nextPowerOfTwo_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"distanceSquared") ) { outValue = distanceSquared_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"subtractVVPooled") ) { outValue = subtractVVPooled_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"b2Mat22_identity") ) { outValue = ( b2Mat22_identity ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"b2Transform_identity") ) { outValue = ( b2Transform_identity ); return true; }
	}
	return false;
}

bool B2Math_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"b2Vec2_zero") ) { b2Vec2_zero=ioValue.Cast<  ::box2D::common::math::B2Vec2 >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"b2Mat22_identity") ) { b2Mat22_identity=ioValue.Cast<  ::box2D::common::math::B2Mat22 >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"b2Transform_identity") ) { b2Transform_identity=ioValue.Cast<  ::box2D::common::math::B2Transform >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *B2Math_obj_sMemberStorageInfo = 0;
static hx::StaticInfo B2Math_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::box2D::common::math::B2Vec2*/ ,(void *) &B2Math_obj::b2Vec2_zero,HX_HCSTRING("b2Vec2_zero","\x39","\xe7","\x57","\x68")},
	{hx::fsObject /*::box2D::common::math::B2Mat22*/ ,(void *) &B2Math_obj::b2Mat22_identity,HX_HCSTRING("b2Mat22_identity","\xed","\xd7","\x25","\xdb")},
	{hx::fsObject /*::box2D::common::math::B2Transform*/ ,(void *) &B2Math_obj::b2Transform_identity,HX_HCSTRING("b2Transform_identity","\x61","\x1f","\xe6","\x09")},
	{hx::fsFloat,(void *) &B2Math_obj::MIN_VALUE,HX_HCSTRING("MIN_VALUE","\x84","\x4d","\x17","\x19")},
	{hx::fsFloat,(void *) &B2Math_obj::MAX_VALUE,HX_HCSTRING("MAX_VALUE","\x16","\x60","\x5a","\xef")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void B2Math_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2Math_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2Math_obj::b2Vec2_zero,"b2Vec2_zero");
	HX_MARK_MEMBER_NAME(B2Math_obj::b2Mat22_identity,"b2Mat22_identity");
	HX_MARK_MEMBER_NAME(B2Math_obj::b2Transform_identity,"b2Transform_identity");
	HX_MARK_MEMBER_NAME(B2Math_obj::MIN_VALUE,"MIN_VALUE");
	HX_MARK_MEMBER_NAME(B2Math_obj::MAX_VALUE,"MAX_VALUE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2Math_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2Math_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2Math_obj::b2Vec2_zero,"b2Vec2_zero");
	HX_VISIT_MEMBER_NAME(B2Math_obj::b2Mat22_identity,"b2Mat22_identity");
	HX_VISIT_MEMBER_NAME(B2Math_obj::b2Transform_identity,"b2Transform_identity");
	HX_VISIT_MEMBER_NAME(B2Math_obj::MIN_VALUE,"MIN_VALUE");
	HX_VISIT_MEMBER_NAME(B2Math_obj::MAX_VALUE,"MAX_VALUE");
};

#endif

hx::Class B2Math_obj::__mClass;

static ::String B2Math_obj_sStaticFields[] = {
	HX_HCSTRING("isValid","\xb2","\x18","\x3e","\xce"),
	HX_HCSTRING("dot","\x89","\x42","\x4c","\x00"),
	HX_HCSTRING("crossVV","\xc0","\x8a","\x51","\xdf"),
	HX_HCSTRING("crossVF","\xb0","\x8a","\x51","\xdf"),
	HX_HCSTRING("crossFV","\xd0","\x7c","\x51","\xdf"),
	HX_HCSTRING("mulMV","\x6d","\x68","\x55","\x10"),
	HX_HCSTRING("mulTMV","\x39","\x3f","\x6b","\x3a"),
	HX_HCSTRING("mulX","\xd4","\x67","\x65","\x48"),
	HX_HCSTRING("mulXT","\x00","\x72","\x55","\x10"),
	HX_HCSTRING("addVV","\xa1","\xc7","\x43","\x1c"),
	HX_HCSTRING("subtractVV","\x54","\x2d","\x28","\x37"),
	HX_HCSTRING("subtractVVPooled","\xaf","\x20","\xcb","\x1f"),
	HX_HCSTRING("distance","\x35","\x93","\xf9","\x6b"),
	HX_HCSTRING("distanceSquared","\x72","\x1e","\x40","\x0c"),
	HX_HCSTRING("mulFV","\x54","\x62","\x55","\x10"),
	HX_HCSTRING("addMM","\xc1","\xbf","\x43","\x1c"),
	HX_HCSTRING("mulMM","\x64","\x68","\x55","\x10"),
	HX_HCSTRING("mulTMM","\x30","\x3f","\x6b","\x3a"),
	HX_HCSTRING("abs","\x72","\xf0","\x49","\x00"),
	HX_HCSTRING("absV","\xa4","\x73","\x68","\x40"),
	HX_HCSTRING("absM","\x9b","\x73","\x68","\x40"),
	HX_HCSTRING("min","\x92","\x11","\x53","\x00"),
	HX_HCSTRING("minV","\x84","\x4e","\x5c","\x48"),
	HX_HCSTRING("max","\xa4","\x0a","\x53","\x00"),
	HX_HCSTRING("maxV","\x32","\x45","\x56","\x48"),
	HX_HCSTRING("clamp","\xfb","\x72","\x58","\x48"),
	HX_HCSTRING("clampV","\xfb","\x28","\x0c","\x05"),
	HX_HCSTRING("swap","\x93","\x2a","\x5e","\x4c"),
	HX_HCSTRING("random","\x03","\x22","\x8f","\xb7"),
	HX_HCSTRING("randomRange","\xba","\xc8","\xb4","\x4e"),
	HX_HCSTRING("nextPowerOfTwo","\x43","\x15","\x4f","\x43"),
	HX_HCSTRING("isPowerOfTwo","\xfa","\xe6","\xcd","\xbc"),
	HX_HCSTRING("b2Vec2_zero","\x39","\xe7","\x57","\x68"),
	HX_HCSTRING("b2Mat22_identity","\xed","\xd7","\x25","\xdb"),
	HX_HCSTRING("b2Transform_identity","\x61","\x1f","\xe6","\x09"),
	HX_HCSTRING("MIN_VALUE","\x84","\x4d","\x17","\x19"),
	HX_HCSTRING("MAX_VALUE","\x16","\x60","\x5a","\xef"),
	::String(null())
};

void B2Math_obj::__register()
{
	hx::Object *dummy = new B2Math_obj;
	B2Math_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.common.math.B2Math","\xec","\x70","\x48","\x14");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &B2Math_obj::__GetStatic;
	__mClass->mSetStaticField = &B2Math_obj::__SetStatic;
	__mClass->mMarkFunc = B2Math_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(B2Math_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< B2Math_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2Math_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2Math_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2Math_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void B2Math_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_320_boot)
HXDLIN( 320)		b2Vec2_zero =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,((Float)0.0),((Float)0.0));
            	}
{
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(0)
            		 ::Dynamic _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_321_boot)
HXDLIN( 321)			 ::box2D::common::math::B2Vec2 _hx_tmp =  ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,((Float)1.0),((Float)0.0));
HXDLIN( 321)			return ::box2D::common::math::B2Mat22_obj::fromVV(_hx_tmp, ::box2D::common::math::B2Vec2_obj::__alloc( HX_CTX ,((Float)0.0),((Float)1.0)));
            		}
            		HX_END_LOCAL_FUNC0(return)

            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_321_boot)
HXDLIN( 321)		b2Mat22_identity =  ::Dynamic(new _hx_Closure_0())();
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b5bae29554fc8931_322_boot)
HXDLIN( 322)		b2Transform_identity =  ::box2D::common::math::B2Transform_obj::__alloc( HX_CTX ,::box2D::common::math::B2Math_obj::b2Vec2_zero,::box2D::common::math::B2Math_obj::b2Mat22_identity);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_341_boot)
HXDLIN( 341)		MIN_VALUE = ((Float)2.2250738585072014e-308);
            	}
{
            	HX_STACKFRAME(&_hx_pos_b5bae29554fc8931_342_boot)
HXDLIN( 342)		MAX_VALUE = ((Float)1.7976931348623158e+308);
            	}
}

} // end namespace box2D
} // end namespace common
} // end namespace math