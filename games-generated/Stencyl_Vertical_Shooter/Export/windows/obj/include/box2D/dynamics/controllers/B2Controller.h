// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_controllers_B2Controller
#define INCLUDED_box2D_dynamics_controllers_B2Controller

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS2(box2D,dynamics,B2DebugDraw)
HX_DECLARE_CLASS2(box2D,dynamics,B2TimeStep)
HX_DECLARE_CLASS2(box2D,dynamics,B2World)
HX_DECLARE_CLASS3(box2D,dynamics,controllers,B2Controller)
HX_DECLARE_CLASS3(box2D,dynamics,controllers,B2ControllerEdge)

namespace box2D{
namespace dynamics{
namespace controllers{


class HXCPP_CLASS_ATTRIBUTES B2Controller_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2Controller_obj OBJ_;
		B2Controller_obj();

	public:
		enum { _hx_ClassId = 0x3eb422f2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.controllers.B2Controller")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.controllers.B2Controller"); }

		hx::ObjectPtr< B2Controller_obj > __new() {
			hx::ObjectPtr< B2Controller_obj > __this = new B2Controller_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< B2Controller_obj > __alloc(hx::Ctx *_hx_ctx) {
			B2Controller_obj *__this = (B2Controller_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2Controller_obj), true, "box2D.dynamics.controllers.B2Controller"));
			*(void **)__this = B2Controller_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2Controller_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2Controller","\x6c","\xd2","\x3a","\x1a"); }

		void step( ::box2D::dynamics::B2TimeStep step);
		::Dynamic step_dyn();

		void draw( ::box2D::dynamics::B2DebugDraw debugDraw);
		::Dynamic draw_dyn();

		void addBody( ::box2D::dynamics::B2Body body);
		::Dynamic addBody_dyn();

		void removeBody( ::box2D::dynamics::B2Body body);
		::Dynamic removeBody_dyn();

		void clear();
		::Dynamic clear_dyn();

		 ::box2D::dynamics::controllers::B2Controller getNext();
		::Dynamic getNext_dyn();

		 ::box2D::dynamics::B2World getWorld();
		::Dynamic getWorld_dyn();

		 ::box2D::dynamics::controllers::B2ControllerEdge getBodyList();
		::Dynamic getBodyList_dyn();

		 ::box2D::dynamics::controllers::B2Controller m_next;
		 ::box2D::dynamics::controllers::B2Controller m_prev;
		 ::box2D::dynamics::controllers::B2ControllerEdge m_bodyList;
		int m_bodyCount;
		 ::box2D::dynamics::B2World m_world;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace controllers

#endif /* INCLUDED_box2D_dynamics_controllers_B2Controller */ 
