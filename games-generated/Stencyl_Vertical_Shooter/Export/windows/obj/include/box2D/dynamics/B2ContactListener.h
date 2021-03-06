// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_B2ContactListener
#define INCLUDED_box2D_dynamics_B2ContactListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,collision,B2Manifold)
HX_DECLARE_CLASS2(box2D,dynamics,B2ContactImpulse)
HX_DECLARE_CLASS2(box2D,dynamics,B2ContactListener)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2Contact)

namespace box2D{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES B2ContactListener_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2ContactListener_obj OBJ_;
		B2ContactListener_obj();

	public:
		enum { _hx_ClassId = 0x25a76a5b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="box2D.dynamics.B2ContactListener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"box2D.dynamics.B2ContactListener"); }
		static hx::ObjectPtr< B2ContactListener_obj > __new();
		static hx::ObjectPtr< B2ContactListener_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2ContactListener_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2ContactListener","\x64","\x0b","\x14","\xad"); }

		static void __boot();
		static int KEY_LOCK;
		static  ::box2D::dynamics::B2ContactListener b2_defaultListener;
		void beginContact( ::box2D::dynamics::contacts::B2Contact contact);
		::Dynamic beginContact_dyn();

		void endContact( ::box2D::dynamics::contacts::B2Contact contact);
		::Dynamic endContact_dyn();

		void preSolve( ::box2D::dynamics::contacts::B2Contact contact, ::box2D::collision::B2Manifold oldManifold);
		::Dynamic preSolve_dyn();

		void postSolve( ::box2D::dynamics::contacts::B2Contact contact, ::box2D::dynamics::B2ContactImpulse impulse);
		::Dynamic postSolve_dyn();

};

} // end namespace box2D
} // end namespace dynamics

#endif /* INCLUDED_box2D_dynamics_B2ContactListener */ 
