// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_JoystickButton
#define INCLUDED_com_stencyl_JoystickButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7c4cc09a28728f58_1054_new)
HX_DECLARE_CLASS2(com,stencyl,JoystickButton)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace com{
namespace stencyl{


class HXCPP_CLASS_ATTRIBUTES JoystickButton_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef JoystickButton_obj OBJ_;
		JoystickButton_obj();

	public:
		enum { _hx_ClassId = 0x35d5f7dd };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.stencyl.JoystickButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.stencyl.JoystickButton"); }

		hx::ObjectPtr< JoystickButton_obj > __new() {
			hx::ObjectPtr< JoystickButton_obj > __this = new JoystickButton_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< JoystickButton_obj > __alloc(hx::Ctx *_hx_ctx) {
			JoystickButton_obj *__this = (JoystickButton_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(JoystickButton_obj), true, "com.stencyl.JoystickButton"));
			*(void **)__this = JoystickButton_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7c4cc09a28728f58_1054_new)
HXLINE(1055)		( ( ::com::stencyl::JoystickButton)(__this) )->id = HX_("",00,00,00,00);
HXLINE(1056)		( ( ::com::stencyl::JoystickButton)(__this) )->a = ::Array_obj< int >::__new(0);
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~JoystickButton_obj();

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
		::String __ToString() const { return HX_HCSTRING("JoystickButton","\xee","\x7f","\x27","\xb1"); }

		static void __boot();
		static int DEVICE;
		static int TYPE;
		static int UP;
		static int DOWN;
		static int LEFT;
		static int RIGHT;
		static int AXIS;
		static int HAT;
		static int BUTTON;
		static int BALL;
		static  ::haxe::ds::StringMap cacheFromID;
		static  ::com::stencyl::JoystickButton fromID(::String id);
		static ::Dynamic fromID_dyn();

		bool equals( ::com::stencyl::JoystickButton b);
		::Dynamic equals_dyn();

		::String id;
		::Array< int > a;
};

} // end namespace com
} // end namespace stencyl

#endif /* INCLUDED_com_stencyl_JoystickButton */ 