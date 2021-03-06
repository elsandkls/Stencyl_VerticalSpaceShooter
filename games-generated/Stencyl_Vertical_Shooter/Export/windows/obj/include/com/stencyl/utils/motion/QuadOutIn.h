// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_QuadOutIn
#define INCLUDED_com_stencyl_utils_motion_QuadOutIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_f7499601677d09d3_101_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,QuadOutIn)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES QuadOutIn_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef QuadOutIn_obj OBJ_;
		QuadOutIn_obj();

	public:
		enum { _hx_ClassId = 0x5aa27ad4 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.QuadOutIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.QuadOutIn"); }

		hx::ObjectPtr< QuadOutIn_obj > __new() {
			hx::ObjectPtr< QuadOutIn_obj > __this = new QuadOutIn_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< QuadOutIn_obj > __alloc(hx::Ctx *_hx_ctx) {
			QuadOutIn_obj *__this = (QuadOutIn_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(QuadOutIn_obj), false, "com.stencyl.utils.motion.QuadOutIn"));
			*(void **)__this = QuadOutIn_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f7499601677d09d3_101_new)
HXDLIN( 101)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~QuadOutIn_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("QuadOutIn","\xac","\x85","\x18","\x6a"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_QuadOutIn */ 
