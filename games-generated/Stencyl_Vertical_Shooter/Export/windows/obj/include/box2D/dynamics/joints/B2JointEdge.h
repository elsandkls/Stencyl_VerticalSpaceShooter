// Generated by Haxe 3.4.7
#ifndef INCLUDED_box2D_dynamics_joints_B2JointEdge
#define INCLUDED_box2D_dynamics_joints_B2JointEdge

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_1095ad562766631d_35_new)
HX_DECLARE_CLASS2(box2D,dynamics,B2Body)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2Joint)
HX_DECLARE_CLASS3(box2D,dynamics,joints,B2JointEdge)

namespace box2D{
namespace dynamics{
namespace joints{


class HXCPP_CLASS_ATTRIBUTES B2JointEdge_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef B2JointEdge_obj OBJ_;
		B2JointEdge_obj();

	public:
		enum { _hx_ClassId = 0x6961907d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="box2D.dynamics.joints.B2JointEdge")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"box2D.dynamics.joints.B2JointEdge"); }

		hx::ObjectPtr< B2JointEdge_obj > __new() {
			hx::ObjectPtr< B2JointEdge_obj > __this = new B2JointEdge_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< B2JointEdge_obj > __alloc(hx::Ctx *_hx_ctx) {
			B2JointEdge_obj *__this = (B2JointEdge_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2JointEdge_obj), true, "box2D.dynamics.joints.B2JointEdge"));
			*(void **)__this = B2JointEdge_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_1095ad562766631d_35_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~B2JointEdge_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("B2JointEdge","\xd7","\x8a","\x7d","\x90"); }

		 ::box2D::dynamics::B2Body other;
		 ::box2D::dynamics::joints::B2Joint joint;
		 ::box2D::dynamics::joints::B2JointEdge prev;
		 ::box2D::dynamics::joints::B2JointEdge next;
};

} // end namespace box2D
} // end namespace dynamics
} // end namespace joints

#endif /* INCLUDED_box2D_dynamics_joints_B2JointEdge */ 
