// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_collision_B2ContactID
#define INCLUDED_box2D_collision_B2ContactID

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2ContactID)
HX_DECLARE_CLASS2(box2D,collision,Features)

namespace box2D{
namespace collision{


class HXCPP_CLASS_ATTRIBUTES B2ContactID_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2ContactID_obj OBJ_;
		B2ContactID_obj();

	public:
		enum { _hx_ClassId = 0x07b096ce };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.collision.B2ContactID")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.collision.B2ContactID"); }
		static hx::ObjectPtr< B2ContactID_obj > __new();
		static hx::ObjectPtr< B2ContactID_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2ContactID_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2ContactID","\xab","\x92","\x36","\x25"); }

		static void __boot();
		static int VERTEX;
		static int FACE;
		void set( ::box2D::collision::B2ContactID id);
		::Dynamic set_dyn();

		 ::box2D::collision::B2ContactID copy();
		::Dynamic copy_dyn();

		int get_key();
		::Dynamic get_key_dyn();

		int set_key(int value);
		::Dynamic set_key_dyn();

		 ::box2D::collision::Features features;
		int _key;
		int indexA;
		int indexB;
		int typeA;
		int typeB;
};

} // end namespace box2D
} // end namespace collision

#endif /* INCLUDED_box2D_collision_B2ContactID */ 
