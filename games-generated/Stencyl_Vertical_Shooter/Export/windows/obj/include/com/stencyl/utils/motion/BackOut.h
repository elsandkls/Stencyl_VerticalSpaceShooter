// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_utils_motion_BackOut
#define INCLUDED_com_stencyl_utils_motion_BackOut

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_com_stencyl_utils_motion_EasingFunction
#include <com/stencyl/utils/motion/EasingFunction.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_149c8ea9f457b9c3_387_new)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,BackOut)
HX_DECLARE_CLASS4(com,stencyl,utils,motion,EasingFunction)

namespace com{
namespace stencyl{
namespace utils{
namespace motion{


class HXCPP_CLASS_ATTRIBUTES BackOut_obj : public  ::com::stencyl::utils::motion::EasingFunction_obj
{
	public:
		typedef  ::com::stencyl::utils::motion::EasingFunction_obj super;
		typedef BackOut_obj OBJ_;
		BackOut_obj();

	public:
		enum { _hx_ClassId = 0x2b21014b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="com.stencyl.utils.motion.BackOut")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"com.stencyl.utils.motion.BackOut"); }

		hx::ObjectPtr< BackOut_obj > __new() {
			hx::ObjectPtr< BackOut_obj > __this = new BackOut_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< BackOut_obj > __alloc(hx::Ctx *_hx_ctx) {
			BackOut_obj *__this = (BackOut_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BackOut_obj), false, "com.stencyl.utils.motion.BackOut"));
			*(void **)__this = BackOut_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_149c8ea9f457b9c3_387_new)
HXDLIN( 387)		__this->super::__construct();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BackOut_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("BackOut","\x87","\x38","\xc8","\xc8"); }

		Float apply(Float t);

};

} // end namespace com
} // end namespace stencyl
} // end namespace utils
} // end namespace motion

#endif /* INCLUDED_com_stencyl_utils_motion_BackOut */ 