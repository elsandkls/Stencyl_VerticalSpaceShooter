// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_SineInOut
#define INCLUDED_com_stencyl_utils_motion_SineInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_6f4e0d28c2227278_47_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,SineInOut)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES SineInOut_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef SineInOut_obj OBJ_;
		SineInOut_obj();

	public:
		enum { _hx_ClassId = 0x5bf67124 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.SineInOut")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.SineInOut"); }

		hx::ObjectPtr< SineInOut_obj > __new() {
			hx::ObjectPtr< SineInOut_obj > __this = new SineInOut_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< SineInOut_obj > __alloc(hx::Ctx *_hx_ctx) {
			SineInOut_obj *__this = (SineInOut_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SineInOut_obj), false, "com.stencyl.utils.motion.SineInOut"));
			*(void **)__this = SineInOut_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_6f4e0d28c2227278_47_new)
HXDLIN(  47)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SineInOut_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SineInOut","\xfc","\x7b","\x6c","\x6b"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_SineInOut */ 