// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_contacts_B2ContactEdge
#define INCLUDED_box2D_dynamics_contacts_B2ContactEdge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_e2078ef55f35c832_34_new)
HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2Contact)
HX_DECLARE_CLASS3(box2D,dynamics,contacts,B2ContactEdge)

namespace box2D{
namespace dynamics{
namespace contacts{


class HXCPP_CLASS_ATTRIBUTES B2ContactEdge_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2ContactEdge_obj OBJ_;
		B2ContactEdge_obj();

	public:
		enum { _hx_ClassId = 0x17ed5631 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.contacts.B2ContactEdge")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.contacts.B2ContactEdge"); }

		hx::ObjectPtr< B2ContactEdge_obj > __new() {
			hx::ObjectPtr< B2ContactEdge_obj > __this = new B2ContactEdge_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< B2ContactEdge_obj > __alloc(hx::Ctx *_hx_ctx) {
			B2ContactEdge_obj *__this = (B2ContactEdge_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2ContactEdge_obj), true, "box2D.dynamics.contacts.B2ContactEdge"));
			*(void **)__this = B2ContactEdge_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_e2078ef55f35c832_34_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2ContactEdge_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2ContactEdge","\x2d","\x9b","\x74","\xcb"); }

		 ::box2D::dynamics::B2Body other;
		 ::box2D::dynamics::contacts::B2Contact contact;
		 ::box2D::dynamics::contacts::B2ContactEdge prev;
		 ::box2D::dynamics::contacts::B2ContactEdge next;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace contacts

#endif /* INCLUDED_box2D_dynamics_contacts_B2ContactEdge */ 