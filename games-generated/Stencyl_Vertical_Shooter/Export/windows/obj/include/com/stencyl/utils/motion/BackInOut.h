// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_BackInOut
#define INCLUDED_com_stencyl_utils_motion_BackInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_205117c5055b7582_401_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,BackInOut)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES BackInOut_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef BackInOut_obj OBJ_;
		BackInOut_obj();

	public:
		enum { _hx_ClassId = 0x7d3883a6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.BackInOut")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.BackInOut"); }

		hx::ObjectPtr< BackInOut_obj > __new() {
			hx::ObjectPtr< BackInOut_obj > __this = new BackInOut_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BackInOut_obj > __alloc(hx::Ctx *_hx_ctx) {
			BackInOut_obj *__this = (BackInOut_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BackInOut_obj), false, "com.stencyl.utils.motion.BackInOut"));
			*(void **)__this = BackInOut_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_205117c5055b7582_401_new)
HXDLIN( 401)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackInOut_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BackInOut","\xe2","\x01","\x89","\x3c"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_BackInOut */ 
