// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_B2DestructionListener
#define INCLUDED_box2D_dynamics_B2DestructionListener

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,dynamics,B2DestructionListener)
HX_DECLARE_CLASS2(box2D,dynamics,B2Fixture)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)

namespace box2D{
namespace dynamics{


class HXCPP_CLASS_ATTRIBUTES B2DestructionListener_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2DestructionListener_obj OBJ_;
		B2DestructionListener_obj();

	public:
		enum { _hx_ClassId = 0x7367a4c9 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="box2D.dynamics.B2DestructionListener")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"box2D.dynamics.B2DestructionListener"); }

		hx::ObjectPtr< B2DestructionListener_obj > __new() {
			hx::ObjectPtr< B2DestructionListener_obj > __this = new B2DestructionListener_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< B2DestructionListener_obj > __alloc(hx::Ctx *_hx_ctx) {
			B2DestructionListener_obj *__this = (B2DestructionListener_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2DestructionListener_obj), false, "box2D.dynamics.B2DestructionListener"));
			*(void **)__this = B2DestructionListener_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2DestructionListener_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2DestructionListener","\xb6","\x71","\xae","\x82"); }

		void sayGoodbyeJoint( ::box2D::dynamics::joints::B2Joint joint);
		::Dynamic sayGoodbyeJoint_dyn();

		void sayGoodbyeFixture( ::box2D::dynamics::B2Fixture fixture);
		::Dynamic sayGoodbyeFixture_dyn();

};

} // end namespace box2D
} // end namespace dynamics

#endif /* INCLUDED_box2D_dynamics_B2DestructionListener */ 
