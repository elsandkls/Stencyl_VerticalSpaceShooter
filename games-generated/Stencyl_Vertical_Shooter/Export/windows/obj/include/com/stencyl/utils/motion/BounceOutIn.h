// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_BounceOutIn
#define INCLUDED_com_stencyl_utils_motion_BounceOutIn

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_d2089e8382cba25c_345_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,BounceOutIn)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES BounceOutIn_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef BounceOutIn_obj OBJ_;
		BounceOutIn_obj();

	public:
		enum { _hx_ClassId = 0x43b8900f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.BounceOutIn")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.BounceOutIn"); }

		hx::ObjectPtr< BounceOutIn_obj > __new() {
			hx::ObjectPtr< BounceOutIn_obj > __this = new BounceOutIn_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BounceOutIn_obj > __alloc(hx::Ctx *_hx_ctx) {
			BounceOutIn_obj *__this = (BounceOutIn_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BounceOutIn_obj), false, "com.stencyl.utils.motion.BounceOutIn"));
			*(void **)__this = BounceOutIn_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_d2089e8382cba25c_345_new)
HXDLIN( 345)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BounceOutIn_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BounceOutIn","\x4b","\x15","\xd2","\xd6"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_BounceOutIn */ 
