// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_collision_B2Distance
#define INCLUDED_box2D_collision_B2Distance

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2Distance)
HX_DECLARE_CLASS2(box2D,collision,B2DistanceInput)
HX_DECLARE_CLASS2(box2D,collision,B2DistanceOutput)
HX_DECLARE_CLASS2(box2D,collision,B2Simplex)
HX_DECLARE_CLASS2(box2D,collision,B2SimplexCache)

namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES B2Distance_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2Distance_obj OBJ_;
		B2Distance_obj();

	public:
		enum { _hx_ClassId = 0x0143ad7a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="box2D.collision.B2Distance")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"box2D.collision.B2Distance"); }

		hx::ObjectPtr< B2Distance_obj > __new() {
			hx::ObjectPtr< B2Distance_obj > __this = new B2Distance_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< B2Distance_obj > __alloc(hx::Ctx *_hx_ctx) {
			B2Distance_obj *__this = (B2Distance_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2Distance_obj), false, "box2D.collision.B2Distance"));
			*(void **)__this = B2Distance_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2Distance_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2Distance","\x05","\xb9","\x04","\x0c"); }

		static void __boot();
		static int b2_gjkCalls;
		static int b2_gjkIters;
		static int b2_gjkMaxIters;
		static  ::box2D::collision::B2Simplex s_simplex;
		static ::Array< int > s_saveA;
		static ::Array< int > s_saveB;
		static void distance( ::box2D::collision::B2DistanceOutput output, ::box2D::collision::B2SimplexCache cache, ::box2D::collision::B2DistanceInput input);
		static ::Dynamic distance_dyn();

};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2Distance */ 
