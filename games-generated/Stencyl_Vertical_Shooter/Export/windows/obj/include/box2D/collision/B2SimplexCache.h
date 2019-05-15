// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_collision_B2SimplexCache
#define INCLUDED_box2D_collision_B2SimplexCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_ec958d87d13fd367_25_new)
HX_DECLARE_CLASS2(box2D,collision,B2SimplexCache)

namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES B2SimplexCache_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2SimplexCache_obj OBJ_;
		B2SimplexCache_obj();

	public:
		enum { _hx_ClassId = 0x0de5ad21 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.collision.B2SimplexCache")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.collision.B2SimplexCache"); }

		hx::ObjectPtr< B2SimplexCache_obj > __new() {
			hx::ObjectPtr< B2SimplexCache_obj > __this = new B2SimplexCache_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< B2SimplexCache_obj > __alloc(hx::Ctx *_hx_ctx) {
			B2SimplexCache_obj *__this = (B2SimplexCache_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2SimplexCache_obj), true, "box2D.collision.B2SimplexCache"));
			*(void **)__this = B2SimplexCache_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_ec958d87d13fd367_25_new)
HXLINE(  43)		( ( ::box2D::collision::B2SimplexCache)(__this) )->useCache = false;
HXLINE(  30)		( ( ::box2D::collision::B2SimplexCache)(__this) )->indexA = ::Array_obj< int >::__new();
HXLINE(  31)		( ( ::box2D::collision::B2SimplexCache)(__this) )->indexB = ::Array_obj< int >::__new();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2SimplexCache_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2SimplexCache","\x2c","\xda","\x3a","\x7e"); }

		Float metric;
		int count;
		::Array< int > indexA;
		::Array< int > indexB;
		bool useCache;
};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2SimplexCache */ 