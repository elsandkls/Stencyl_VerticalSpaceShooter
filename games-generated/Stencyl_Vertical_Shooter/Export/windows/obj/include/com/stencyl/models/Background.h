// Generated by Haxe 3.4.7
#ifndef INCLUDED_com_stencyl_models_Background
#define INCLUDED_com_stencyl_models_Background

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(com,stencyl,models,Background)
HX_DECLARE_CLASS2(openfl,display,Graphics)

namespace com{
namespace stencyl{
namespace models{


class HXCPP_CLASS_ATTRIBUTES Background_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		void (hx::Object :: *_hx_update)(); 
		static inline void update( ::Dynamic _hx_) {
			(_hx_.mPtr->*( static_cast< ::com::stencyl::models::Background_obj *>(_hx_.mPtr->_hx_getInterface(0xd3f2ad83)))->_hx_update)();
		}
		void (hx::Object :: *_hx_draw)( ::openfl::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight); 
		static inline void draw( ::Dynamic _hx_, ::openfl::display::Graphics g,int cameraX,int cameraY,int screenWidth,int screenHeight) {
			(_hx_.mPtr->*( static_cast< ::com::stencyl::models::Background_obj *>(_hx_.mPtr->_hx_getInterface(0xd3f2ad83)))->_hx_draw)(g,cameraX,cameraY,screenWidth,screenHeight);
		}
};

} // end namespace com
} // end namespace stencyl
} // end namespace models

#endif /* INCLUDED_com_stencyl_models_Background */ 