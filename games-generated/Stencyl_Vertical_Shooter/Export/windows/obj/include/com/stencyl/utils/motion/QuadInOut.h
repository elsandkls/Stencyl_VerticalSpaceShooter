// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_QuadInOut
#define INCLUDED_com_stencyl_utils_motion_QuadInOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_451f3f2ff259298d_93_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,QuadInOut)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES QuadInOut_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef QuadInOut_obj OBJ_;
		QuadInOut_obj();

	public:
		enum { _hx_ClassId = 0x31a42106 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.QuadInOut")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.QuadInOut"); }

		hx::ObjectPtr< QuadInOut_obj > __new() {
			hx::ObjectPtr< QuadInOut_obj > __this = new QuadInOut_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< QuadInOut_obj > __alloc(hx::Ctx *_hx_ctx) {
			QuadInOut_obj *__this = (QuadInOut_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(QuadInOut_obj), false, "com.stencyl.utils.motion.QuadInOut"));
			*(void **)__this = QuadInOut_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_451f3f2ff259298d_93_new)
HXDLIN(  93)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadInOut_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("QuadInOut","\x42","\x9f","\xf4","\xf0"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_QuadInOut */ 
