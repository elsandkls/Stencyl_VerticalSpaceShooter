// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_BackIn
#define INCLUDED_com_stencyl_utils_motion_BackIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_f96a840df324e827_373_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,BackIn)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES BackIn_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef BackIn_obj OBJ_;
		BackIn_obj();

	public:
		enum { _hx_ClassId = 0x79e121c8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.BackIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.BackIn"); }

		hx::ObjectPtr< BackIn_obj > __new() {
			hx::ObjectPtr< BackIn_obj > __this = new BackIn_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BackIn_obj > __alloc(hx::Ctx *_hx_ctx) {
			BackIn_obj *__this = (BackIn_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BackIn_obj), false, "com.stencyl.utils.motion.BackIn"));
			*(void **)__this = BackIn_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f96a840df324e827_373_new)
HXDLIN( 373)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackIn_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BackIn","\x0c","\xa6","\x2d","\x7f"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_BackIn */ 
