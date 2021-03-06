// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_SineIn
#define INCLUDED_com_stencyl_utils_motion_SineIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_480777dc0a78b5c0_19_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,SineIn)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES SineIn_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef SineIn_obj OBJ_;
		SineIn_obj();

	public:
		enum { _hx_ClassId = 0x245ef98a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.SineIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.SineIn"); }

		hx::ObjectPtr< SineIn_obj > __new() {
			hx::ObjectPtr< SineIn_obj > __this = new SineIn_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SineIn_obj > __alloc(hx::Ctx *_hx_ctx) {
			SineIn_obj *__this = (SineIn_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SineIn_obj), false, "com.stencyl.utils.motion.SineIn"));
			*(void **)__this = SineIn_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_480777dc0a78b5c0_19_new)
HXDLIN(  19)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SineIn_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SineIn","\xb2","\x37","\xb4","\xed"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_SineIn */ 
