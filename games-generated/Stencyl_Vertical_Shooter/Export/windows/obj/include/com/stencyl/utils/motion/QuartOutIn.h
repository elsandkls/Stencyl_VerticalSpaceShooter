// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_QuartOutIn
#define INCLUDED_com_stencyl_utils_motion_QuartOutIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_46ffb08c3aeeecc5_167_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,QuartOutIn)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES QuartOutIn_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef QuartOutIn_obj OBJ_;
		QuartOutIn_obj();

	public:
		enum { _hx_ClassId = 0x2479838c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.QuartOutIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.QuartOutIn"); }

		hx::ObjectPtr< QuartOutIn_obj > __new() {
			hx::ObjectPtr< QuartOutIn_obj > __this = new QuartOutIn_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< QuartOutIn_obj > __alloc(hx::Ctx *_hx_ctx) {
			QuartOutIn_obj *__this = (QuartOutIn_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(QuartOutIn_obj), false, "com.stencyl.utils.motion.QuartOutIn"));
			*(void **)__this = QuartOutIn_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_46ffb08c3aeeecc5_167_new)
HXDLIN( 167)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuartOutIn_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("QuartOutIn","\xb4","\xf5","\x4c","\x9c"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_QuartOutIn */ 
