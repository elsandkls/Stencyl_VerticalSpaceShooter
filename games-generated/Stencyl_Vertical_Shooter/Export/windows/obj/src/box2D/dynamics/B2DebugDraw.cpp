// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_box2D_common_B2Color
#include <box2D/common/B2Color.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Mat22
#include <box2D/common/math/B2Mat22.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Transform
#include <box2D/common/math/B2Transform.h>
#endif
#ifndef INCLUDED_box2D_common_math_B2Vec2
#include <box2D/common/math/B2Vec2.h>
#endif
#ifndef INCLUDED_box2D_dynamics_B2DebugDraw
#include <box2D/dynamics/B2DebugDraw.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d99996969e733d6c_35_new,"box2D.dynamics.B2DebugDraw","new",0x69b3ce30,"box2D.dynamics.B2DebugDraw.new","box2D/dynamics/B2DebugDraw.hx",35,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_70_setFlags,"box2D.dynamics.B2DebugDraw","setFlags",0xc3868475,"box2D.dynamics.B2DebugDraw.setFlags","box2D/dynamics/B2DebugDraw.hx",70,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_77_getFlags,"box2D.dynamics.B2DebugDraw","getFlags",0x15292b01,"box2D.dynamics.B2DebugDraw.getFlags","box2D/dynamics/B2DebugDraw.hx",77,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_84_appendFlags,"box2D.dynamics.B2DebugDraw","appendFlags",0x984d10dd,"box2D.dynamics.B2DebugDraw.appendFlags","box2D/dynamics/B2DebugDraw.hx",84,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_91_clearFlags,"box2D.dynamics.B2DebugDraw","clearFlags",0x3bdcc6aa,"box2D.dynamics.B2DebugDraw.clearFlags","box2D/dynamics/B2DebugDraw.hx",91,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_98_setSprite,"box2D.dynamics.B2DebugDraw","setSprite",0xdda98b17,"box2D.dynamics.B2DebugDraw.setSprite","box2D/dynamics/B2DebugDraw.hx",98,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_105_getSprite,"box2D.dynamics.B2DebugDraw","getSprite",0xfa589f0b,"box2D.dynamics.B2DebugDraw.getSprite","box2D/dynamics/B2DebugDraw.hx",105,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_112_setDrawScale,"box2D.dynamics.B2DebugDraw","setDrawScale",0x2ce38c14,"box2D.dynamics.B2DebugDraw.setDrawScale","box2D/dynamics/B2DebugDraw.hx",112,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_119_getDrawScale,"box2D.dynamics.B2DebugDraw","getDrawScale",0x17ea68a0,"box2D.dynamics.B2DebugDraw.getDrawScale","box2D/dynamics/B2DebugDraw.hx",119,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_126_setLineThickness,"box2D.dynamics.B2DebugDraw","setLineThickness",0xbdc2520e,"box2D.dynamics.B2DebugDraw.setLineThickness","box2D/dynamics/B2DebugDraw.hx",126,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_133_getLineThickness,"box2D.dynamics.B2DebugDraw","getLineThickness",0x6780649a,"box2D.dynamics.B2DebugDraw.getLineThickness","box2D/dynamics/B2DebugDraw.hx",133,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_140_setAlpha,"box2D.dynamics.B2DebugDraw","setAlpha",0xe291008c,"box2D.dynamics.B2DebugDraw.setAlpha","box2D/dynamics/B2DebugDraw.hx",140,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_147_getAlpha,"box2D.dynamics.B2DebugDraw","getAlpha",0x3433a718,"box2D.dynamics.B2DebugDraw.getAlpha","box2D/dynamics/B2DebugDraw.hx",147,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_154_setFillAlpha,"box2D.dynamics.B2DebugDraw","setFillAlpha",0xdc475609,"box2D.dynamics.B2DebugDraw.setFillAlpha","box2D/dynamics/B2DebugDraw.hx",154,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_161_getFillAlpha,"box2D.dynamics.B2DebugDraw","getFillAlpha",0xc74e3295,"box2D.dynamics.B2DebugDraw.getFillAlpha","box2D/dynamics/B2DebugDraw.hx",161,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_168_setXFormScale,"box2D.dynamics.B2DebugDraw","setXFormScale",0x5f897720,"box2D.dynamics.B2DebugDraw.setXFormScale","box2D/dynamics/B2DebugDraw.hx",168,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_175_getXFormScale,"box2D.dynamics.B2DebugDraw","getXFormScale",0x1a839514,"box2D.dynamics.B2DebugDraw.getXFormScale","box2D/dynamics/B2DebugDraw.hx",175,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_181_drawPolygon,"box2D.dynamics.B2DebugDraw","drawPolygon",0xb52394a6,"box2D.dynamics.B2DebugDraw.drawPolygon","box2D/dynamics/B2DebugDraw.hx",181,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_195_drawSolidPolygon,"box2D.dynamics.B2DebugDraw","drawSolidPolygon",0xc4042fe3,"box2D.dynamics.B2DebugDraw.drawSolidPolygon","box2D/dynamics/B2DebugDraw.hx",195,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_211_drawCircle,"box2D.dynamics.B2DebugDraw","drawCircle",0xfc174964,"box2D.dynamics.B2DebugDraw.drawCircle","box2D/dynamics/B2DebugDraw.hx",211,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_221_drawSolidCircle,"box2D.dynamics.B2DebugDraw","drawSolidCircle",0xaaa6a4c7,"box2D.dynamics.B2DebugDraw.drawSolidCircle","box2D/dynamics/B2DebugDraw.hx",221,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_237_drawSegment,"box2D.dynamics.B2DebugDraw","drawSegment",0x496161df,"box2D.dynamics.B2DebugDraw.drawSegment","box2D/dynamics/B2DebugDraw.hx",237,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_249_drawTransform,"box2D.dynamics.B2DebugDraw","drawTransform",0x9f8fa298,"box2D.dynamics.B2DebugDraw.drawTransform","box2D/dynamics/B2DebugDraw.hx",249,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_53_boot,"box2D.dynamics.B2DebugDraw","boot",0x0bb99c62,"box2D.dynamics.B2DebugDraw.boot","box2D/dynamics/B2DebugDraw.hx",53,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_55_boot,"box2D.dynamics.B2DebugDraw","boot",0x0bb99c62,"box2D.dynamics.B2DebugDraw.boot","box2D/dynamics/B2DebugDraw.hx",55,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_57_boot,"box2D.dynamics.B2DebugDraw","boot",0x0bb99c62,"box2D.dynamics.B2DebugDraw.boot","box2D/dynamics/B2DebugDraw.hx",57,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_59_boot,"box2D.dynamics.B2DebugDraw","boot",0x0bb99c62,"box2D.dynamics.B2DebugDraw.boot","box2D/dynamics/B2DebugDraw.hx",59,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_61_boot,"box2D.dynamics.B2DebugDraw","boot",0x0bb99c62,"box2D.dynamics.B2DebugDraw.boot","box2D/dynamics/B2DebugDraw.hx",61,0x7faf8720)
HX_LOCAL_STACK_FRAME(_hx_pos_d99996969e733d6c_63_boot,"box2D.dynamics.B2DebugDraw","boot",0x0bb99c62,"box2D.dynamics.B2DebugDraw.boot","box2D/dynamics/B2DebugDraw.hx",63,0x7faf8720)
namespace box2D{
namespace dynamics{

void B2DebugDraw_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_35_new)
HXLINE(  37)		this->m_drawScale = ((Float)1.0);
HXLINE(  39)		this->m_lineThickness = ((Float)1.0);
HXLINE(  40)		this->m_alpha = ((Float)1.0);
HXLINE(  41)		this->m_fillAlpha = ((Float)1.0);
HXLINE(  42)		this->m_xformScale = ((Float)1.0);
HXLINE(  45)		this->m_drawFlags = (int)0;
            	}

Dynamic B2DebugDraw_obj::__CreateEmpty() { return new B2DebugDraw_obj; }

void *B2DebugDraw_obj::_hx_vtable = 0;

Dynamic B2DebugDraw_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< B2DebugDraw_obj > _hx_result = new B2DebugDraw_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool B2DebugDraw_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6958df16;
}

void B2DebugDraw_obj::setFlags(int flags){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_70_setFlags)
HXDLIN(  70)		this->m_drawFlags = flags;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,setFlags,(void))

int B2DebugDraw_obj::getFlags(){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_77_getFlags)
HXDLIN(  77)		return this->m_drawFlags;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2DebugDraw_obj,getFlags,return )

void B2DebugDraw_obj::appendFlags(int flags){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_84_appendFlags)
HXDLIN(  84)		 ::box2D::dynamics::B2DebugDraw _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  84)		_hx_tmp->m_drawFlags = ((int)_hx_tmp->m_drawFlags | (int)flags);
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,appendFlags,(void))

void B2DebugDraw_obj::clearFlags(int flags){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_91_clearFlags)
HXDLIN(  91)		 ::box2D::dynamics::B2DebugDraw _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  91)		_hx_tmp->m_drawFlags = ((int)_hx_tmp->m_drawFlags & (int)~(flags));
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,clearFlags,(void))

void B2DebugDraw_obj::setSprite( ::openfl::display::Sprite sprite){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_98_setSprite)
HXDLIN(  98)		this->m_sprite = sprite;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,setSprite,(void))

 ::openfl::display::Sprite B2DebugDraw_obj::getSprite(){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_105_getSprite)
HXDLIN( 105)		return this->m_sprite;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2DebugDraw_obj,getSprite,return )

void B2DebugDraw_obj::setDrawScale(Float drawScale){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_112_setDrawScale)
HXDLIN( 112)		this->m_drawScale = drawScale;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,setDrawScale,(void))

Float B2DebugDraw_obj::getDrawScale(){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_119_getDrawScale)
HXDLIN( 119)		return this->m_drawScale;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2DebugDraw_obj,getDrawScale,return )

void B2DebugDraw_obj::setLineThickness(Float lineThickness){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_126_setLineThickness)
HXDLIN( 126)		this->m_lineThickness = lineThickness;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,setLineThickness,(void))

Float B2DebugDraw_obj::getLineThickness(){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_133_getLineThickness)
HXDLIN( 133)		return this->m_lineThickness;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2DebugDraw_obj,getLineThickness,return )

void B2DebugDraw_obj::setAlpha(Float alpha){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_140_setAlpha)
HXDLIN( 140)		this->m_alpha = alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,setAlpha,(void))

Float B2DebugDraw_obj::getAlpha(){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_147_getAlpha)
HXDLIN( 147)		return this->m_alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2DebugDraw_obj,getAlpha,return )

void B2DebugDraw_obj::setFillAlpha(Float alpha){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_154_setFillAlpha)
HXDLIN( 154)		this->m_fillAlpha = alpha;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,setFillAlpha,(void))

Float B2DebugDraw_obj::getFillAlpha(){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_161_getFillAlpha)
HXDLIN( 161)		return this->m_fillAlpha;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2DebugDraw_obj,getFillAlpha,return )

void B2DebugDraw_obj::setXFormScale(Float xformScale){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_168_setXFormScale)
HXDLIN( 168)		this->m_xformScale = xformScale;
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,setXFormScale,(void))

Float B2DebugDraw_obj::getXFormScale(){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_175_getXFormScale)
HXDLIN( 175)		return this->m_xformScale;
            	}


HX_DEFINE_DYNAMIC_FUNC0(B2DebugDraw_obj,getXFormScale,return )

void B2DebugDraw_obj::drawPolygon(::Array< ::Dynamic> vertices,int vertexCount, ::box2D::common::B2Color color){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_181_drawPolygon)
HXLINE( 183)		 ::openfl::display::Graphics _hx_tmp = this->m_sprite->get_graphics();
HXDLIN( 183)		Float _hx_tmp1 = this->m_lineThickness;
HXDLIN( 183)		int _hx_tmp2 = color->get_color();
HXDLIN( 183)		_hx_tmp->lineStyle(_hx_tmp1,_hx_tmp2,this->m_alpha,null(),null(),null(),null(),null());
HXLINE( 184)		 ::openfl::display::Graphics _hx_tmp3 = this->m_sprite->get_graphics();
HXDLIN( 184)		Float _hx_tmp4 = (vertices->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->x * this->m_drawScale);
HXDLIN( 184)		_hx_tmp3->moveTo(_hx_tmp4,(vertices->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->y * this->m_drawScale));
HXLINE( 185)		{
HXLINE( 185)			int _g1 = (int)0;
HXDLIN( 185)			int _g = vertexCount;
HXDLIN( 185)			while((_g1 < _g)){
HXLINE( 185)				_g1 = (_g1 + (int)1);
HXDLIN( 185)				int i = (_g1 - (int)1);
HXLINE( 186)				 ::openfl::display::Graphics _hx_tmp5 = this->m_sprite->get_graphics();
HXDLIN( 186)				Float _hx_tmp6 = (vertices->__get(i).StaticCast<  ::box2D::common::math::B2Vec2 >()->x * this->m_drawScale);
HXDLIN( 186)				_hx_tmp5->lineTo(_hx_tmp6,(vertices->__get(i).StaticCast<  ::box2D::common::math::B2Vec2 >()->y * this->m_drawScale));
            			}
            		}
HXLINE( 188)		 ::openfl::display::Graphics _hx_tmp7 = this->m_sprite->get_graphics();
HXDLIN( 188)		Float _hx_tmp8 = (vertices->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->x * this->m_drawScale);
HXDLIN( 188)		_hx_tmp7->lineTo(_hx_tmp8,(vertices->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->y * this->m_drawScale));
            	}


HX_DEFINE_DYNAMIC_FUNC3(B2DebugDraw_obj,drawPolygon,(void))

void B2DebugDraw_obj::drawSolidPolygon(::Array< ::Dynamic> vertices,int vertexCount, ::box2D::common::B2Color color){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_195_drawSolidPolygon)
HXLINE( 197)		 ::openfl::display::Graphics _hx_tmp = this->m_sprite->get_graphics();
HXDLIN( 197)		Float _hx_tmp1 = this->m_lineThickness;
HXDLIN( 197)		int _hx_tmp2 = color->get_color();
HXDLIN( 197)		_hx_tmp->lineStyle(_hx_tmp1,_hx_tmp2,this->m_alpha,null(),null(),null(),null(),null());
HXLINE( 198)		 ::openfl::display::Graphics _hx_tmp3 = this->m_sprite->get_graphics();
HXDLIN( 198)		Float _hx_tmp4 = (vertices->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->x * this->m_drawScale);
HXDLIN( 198)		_hx_tmp3->moveTo(_hx_tmp4,(vertices->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->y * this->m_drawScale));
HXLINE( 199)		 ::openfl::display::Graphics _hx_tmp5 = this->m_sprite->get_graphics();
HXDLIN( 199)		int _hx_tmp6 = color->get_color();
HXDLIN( 199)		_hx_tmp5->beginFill(_hx_tmp6,this->m_fillAlpha);
HXLINE( 200)		{
HXLINE( 200)			int _g1 = (int)0;
HXDLIN( 200)			int _g = vertexCount;
HXDLIN( 200)			while((_g1 < _g)){
HXLINE( 200)				_g1 = (_g1 + (int)1);
HXDLIN( 200)				int i = (_g1 - (int)1);
HXLINE( 201)				 ::openfl::display::Graphics _hx_tmp7 = this->m_sprite->get_graphics();
HXDLIN( 201)				Float _hx_tmp8 = (vertices->__get(i).StaticCast<  ::box2D::common::math::B2Vec2 >()->x * this->m_drawScale);
HXDLIN( 201)				_hx_tmp7->lineTo(_hx_tmp8,(vertices->__get(i).StaticCast<  ::box2D::common::math::B2Vec2 >()->y * this->m_drawScale));
            			}
            		}
HXLINE( 203)		 ::openfl::display::Graphics _hx_tmp9 = this->m_sprite->get_graphics();
HXDLIN( 203)		Float _hx_tmp10 = (vertices->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->x * this->m_drawScale);
HXDLIN( 203)		_hx_tmp9->lineTo(_hx_tmp10,(vertices->__get((int)0).StaticCast<  ::box2D::common::math::B2Vec2 >()->y * this->m_drawScale));
HXLINE( 204)		this->m_sprite->get_graphics()->endFill();
            	}


HX_DEFINE_DYNAMIC_FUNC3(B2DebugDraw_obj,drawSolidPolygon,(void))

void B2DebugDraw_obj::drawCircle( ::box2D::common::math::B2Vec2 center,Float radius, ::box2D::common::B2Color color){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_211_drawCircle)
HXLINE( 213)		 ::openfl::display::Graphics _hx_tmp = this->m_sprite->get_graphics();
HXDLIN( 213)		Float _hx_tmp1 = this->m_lineThickness;
HXDLIN( 213)		int _hx_tmp2 = color->get_color();
HXDLIN( 213)		_hx_tmp->lineStyle(_hx_tmp1,_hx_tmp2,this->m_alpha,null(),null(),null(),null(),null());
HXLINE( 214)		 ::openfl::display::Graphics _hx_tmp3 = this->m_sprite->get_graphics();
HXDLIN( 214)		Float _hx_tmp4 = (center->x * this->m_drawScale);
HXDLIN( 214)		Float _hx_tmp5 = (center->y * this->m_drawScale);
HXDLIN( 214)		_hx_tmp3->drawCircle(_hx_tmp4,_hx_tmp5,(radius * this->m_drawScale));
            	}


HX_DEFINE_DYNAMIC_FUNC3(B2DebugDraw_obj,drawCircle,(void))

void B2DebugDraw_obj::drawSolidCircle( ::box2D::common::math::B2Vec2 center,Float radius, ::box2D::common::math::B2Vec2 axis, ::box2D::common::B2Color color){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_221_drawSolidCircle)
HXLINE( 223)		 ::openfl::display::Graphics _hx_tmp = this->m_sprite->get_graphics();
HXDLIN( 223)		Float _hx_tmp1 = this->m_lineThickness;
HXDLIN( 223)		int _hx_tmp2 = color->get_color();
HXDLIN( 223)		_hx_tmp->lineStyle(_hx_tmp1,_hx_tmp2,this->m_alpha,null(),null(),null(),null(),null());
HXLINE( 224)		this->m_sprite->get_graphics()->moveTo((int)0,(int)0);
HXLINE( 225)		 ::openfl::display::Graphics _hx_tmp3 = this->m_sprite->get_graphics();
HXDLIN( 225)		int _hx_tmp4 = color->get_color();
HXDLIN( 225)		_hx_tmp3->beginFill(_hx_tmp4,this->m_fillAlpha);
HXLINE( 226)		 ::openfl::display::Graphics _hx_tmp5 = this->m_sprite->get_graphics();
HXDLIN( 226)		Float _hx_tmp6 = (center->x * this->m_drawScale);
HXDLIN( 226)		Float _hx_tmp7 = (center->y * this->m_drawScale);
HXDLIN( 226)		_hx_tmp5->drawCircle(_hx_tmp6,_hx_tmp7,(radius * this->m_drawScale));
HXLINE( 227)		this->m_sprite->get_graphics()->endFill();
HXLINE( 228)		 ::openfl::display::Graphics _hx_tmp8 = this->m_sprite->get_graphics();
HXDLIN( 228)		Float _hx_tmp9 = (center->x * this->m_drawScale);
HXDLIN( 228)		_hx_tmp8->moveTo(_hx_tmp9,(center->y * this->m_drawScale));
HXLINE( 229)		 ::openfl::display::Graphics _hx_tmp10 = this->m_sprite->get_graphics();
HXDLIN( 229)		Float center1 = center->x;
HXDLIN( 229)		Float _hx_tmp11 = ((center1 + (axis->x * radius)) * this->m_drawScale);
HXDLIN( 229)		Float center2 = center->y;
HXDLIN( 229)		_hx_tmp10->lineTo(_hx_tmp11,((center2 + (axis->y * radius)) * this->m_drawScale));
            	}


HX_DEFINE_DYNAMIC_FUNC4(B2DebugDraw_obj,drawSolidCircle,(void))

void B2DebugDraw_obj::drawSegment( ::box2D::common::math::B2Vec2 p1, ::box2D::common::math::B2Vec2 p2, ::box2D::common::B2Color color){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_237_drawSegment)
HXLINE( 239)		 ::openfl::display::Graphics _hx_tmp = this->m_sprite->get_graphics();
HXDLIN( 239)		Float _hx_tmp1 = this->m_lineThickness;
HXDLIN( 239)		int _hx_tmp2 = color->get_color();
HXDLIN( 239)		_hx_tmp->lineStyle(_hx_tmp1,_hx_tmp2,this->m_alpha,null(),null(),null(),null(),null());
HXLINE( 240)		 ::openfl::display::Graphics _hx_tmp3 = this->m_sprite->get_graphics();
HXDLIN( 240)		Float _hx_tmp4 = (p1->x * this->m_drawScale);
HXDLIN( 240)		_hx_tmp3->moveTo(_hx_tmp4,(p1->y * this->m_drawScale));
HXLINE( 241)		 ::openfl::display::Graphics _hx_tmp5 = this->m_sprite->get_graphics();
HXDLIN( 241)		Float _hx_tmp6 = (p2->x * this->m_drawScale);
HXDLIN( 241)		_hx_tmp5->lineTo(_hx_tmp6,(p2->y * this->m_drawScale));
            	}


HX_DEFINE_DYNAMIC_FUNC3(B2DebugDraw_obj,drawSegment,(void))

void B2DebugDraw_obj::drawTransform( ::box2D::common::math::B2Transform xf){
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_249_drawTransform)
HXLINE( 251)		this->m_sprite->get_graphics()->lineStyle(this->m_lineThickness,(int)16711680,this->m_alpha,null(),null(),null(),null(),null());
HXLINE( 252)		 ::openfl::display::Graphics _hx_tmp = this->m_sprite->get_graphics();
HXDLIN( 252)		Float _hx_tmp1 = (xf->position->x * this->m_drawScale);
HXDLIN( 252)		_hx_tmp->moveTo(_hx_tmp1,(xf->position->y * this->m_drawScale));
HXLINE( 253)		 ::openfl::display::Graphics _hx_tmp2 = this->m_sprite->get_graphics();
HXDLIN( 253)		Float xf1 = xf->position->x;
HXDLIN( 253)		Float _hx_tmp3 = ((xf1 + (this->m_xformScale * xf->R->col1->x)) * this->m_drawScale);
HXDLIN( 253)		Float xf2 = xf->position->y;
HXDLIN( 253)		_hx_tmp2->lineTo(_hx_tmp3,((xf2 + (this->m_xformScale * xf->R->col1->y)) * this->m_drawScale));
HXLINE( 255)		this->m_sprite->get_graphics()->lineStyle(this->m_lineThickness,(int)65280,this->m_alpha,null(),null(),null(),null(),null());
HXLINE( 256)		 ::openfl::display::Graphics _hx_tmp4 = this->m_sprite->get_graphics();
HXDLIN( 256)		Float _hx_tmp5 = (xf->position->x * this->m_drawScale);
HXDLIN( 256)		_hx_tmp4->moveTo(_hx_tmp5,(xf->position->y * this->m_drawScale));
HXLINE( 257)		 ::openfl::display::Graphics _hx_tmp6 = this->m_sprite->get_graphics();
HXDLIN( 257)		Float xf3 = xf->position->x;
HXDLIN( 257)		Float _hx_tmp7 = ((xf3 + (this->m_xformScale * xf->R->col2->x)) * this->m_drawScale);
HXDLIN( 257)		Float xf4 = xf->position->y;
HXDLIN( 257)		_hx_tmp6->lineTo(_hx_tmp7,((xf4 + (this->m_xformScale * xf->R->col2->y)) * this->m_drawScale));
            	}


HX_DEFINE_DYNAMIC_FUNC1(B2DebugDraw_obj,drawTransform,(void))

int B2DebugDraw_obj::e_shapeBit;

int B2DebugDraw_obj::e_jointBit;

int B2DebugDraw_obj::e_aabbBit;

int B2DebugDraw_obj::e_pairBit;

int B2DebugDraw_obj::e_centerOfMassBit;

int B2DebugDraw_obj::e_controllerBit;


hx::ObjectPtr< B2DebugDraw_obj > B2DebugDraw_obj::__new() {
	hx::ObjectPtr< B2DebugDraw_obj > __this = new B2DebugDraw_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< B2DebugDraw_obj > B2DebugDraw_obj::__alloc(hx::Ctx *_hx_ctx) {
	B2DebugDraw_obj *__this = (B2DebugDraw_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(B2DebugDraw_obj), true, "box2D.dynamics.B2DebugDraw"));
	*(void **)__this = B2DebugDraw_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

B2DebugDraw_obj::B2DebugDraw_obj()
{
}

void B2DebugDraw_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(B2DebugDraw);
	HX_MARK_MEMBER_NAME(m_drawFlags,"m_drawFlags");
	HX_MARK_MEMBER_NAME(m_sprite,"m_sprite");
	HX_MARK_MEMBER_NAME(m_drawScale,"m_drawScale");
	HX_MARK_MEMBER_NAME(m_lineThickness,"m_lineThickness");
	HX_MARK_MEMBER_NAME(m_alpha,"m_alpha");
	HX_MARK_MEMBER_NAME(m_fillAlpha,"m_fillAlpha");
	HX_MARK_MEMBER_NAME(m_xformScale,"m_xformScale");
	HX_MARK_END_CLASS();
}

void B2DebugDraw_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(m_drawFlags,"m_drawFlags");
	HX_VISIT_MEMBER_NAME(m_sprite,"m_sprite");
	HX_VISIT_MEMBER_NAME(m_drawScale,"m_drawScale");
	HX_VISIT_MEMBER_NAME(m_lineThickness,"m_lineThickness");
	HX_VISIT_MEMBER_NAME(m_alpha,"m_alpha");
	HX_VISIT_MEMBER_NAME(m_fillAlpha,"m_fillAlpha");
	HX_VISIT_MEMBER_NAME(m_xformScale,"m_xformScale");
}

hx::Val B2DebugDraw_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_alpha") ) { return hx::Val( m_alpha ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setFlags") ) { return hx::Val( setFlags_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFlags") ) { return hx::Val( getFlags_dyn() ); }
		if (HX_FIELD_EQ(inName,"setAlpha") ) { return hx::Val( setAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAlpha") ) { return hx::Val( getAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_sprite") ) { return hx::Val( m_sprite ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setSprite") ) { return hx::Val( setSprite_dyn() ); }
		if (HX_FIELD_EQ(inName,"getSprite") ) { return hx::Val( getSprite_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"clearFlags") ) { return hx::Val( clearFlags_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawCircle") ) { return hx::Val( drawCircle_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"appendFlags") ) { return hx::Val( appendFlags_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawPolygon") ) { return hx::Val( drawPolygon_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawSegment") ) { return hx::Val( drawSegment_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_drawFlags") ) { return hx::Val( m_drawFlags ); }
		if (HX_FIELD_EQ(inName,"m_drawScale") ) { return hx::Val( m_drawScale ); }
		if (HX_FIELD_EQ(inName,"m_fillAlpha") ) { return hx::Val( m_fillAlpha ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setDrawScale") ) { return hx::Val( setDrawScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDrawScale") ) { return hx::Val( getDrawScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFillAlpha") ) { return hx::Val( setFillAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFillAlpha") ) { return hx::Val( getFillAlpha_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_xformScale") ) { return hx::Val( m_xformScale ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setXFormScale") ) { return hx::Val( setXFormScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"getXFormScale") ) { return hx::Val( getXFormScale_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawTransform") ) { return hx::Val( drawTransform_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"drawSolidCircle") ) { return hx::Val( drawSolidCircle_dyn() ); }
		if (HX_FIELD_EQ(inName,"m_lineThickness") ) { return hx::Val( m_lineThickness ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"setLineThickness") ) { return hx::Val( setLineThickness_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLineThickness") ) { return hx::Val( getLineThickness_dyn() ); }
		if (HX_FIELD_EQ(inName,"drawSolidPolygon") ) { return hx::Val( drawSolidPolygon_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool B2DebugDraw_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"e_aabbBit") ) { outValue = ( e_aabbBit ); return true; }
		if (HX_FIELD_EQ(inName,"e_pairBit") ) { outValue = ( e_pairBit ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"e_shapeBit") ) { outValue = ( e_shapeBit ); return true; }
		if (HX_FIELD_EQ(inName,"e_jointBit") ) { outValue = ( e_jointBit ); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"e_controllerBit") ) { outValue = ( e_controllerBit ); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"e_centerOfMassBit") ) { outValue = ( e_centerOfMassBit ); return true; }
	}
	return false;
}

hx::Val B2DebugDraw_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"m_alpha") ) { m_alpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"m_sprite") ) { m_sprite=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"m_drawFlags") ) { m_drawFlags=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_drawScale") ) { m_drawScale=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m_fillAlpha") ) { m_fillAlpha=inValue.Cast< Float >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"m_xformScale") ) { m_xformScale=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"m_lineThickness") ) { m_lineThickness=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool B2DebugDraw_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"e_aabbBit") ) { e_aabbBit=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"e_pairBit") ) { e_pairBit=ioValue.Cast< int >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"e_shapeBit") ) { e_shapeBit=ioValue.Cast< int >(); return true; }
		if (HX_FIELD_EQ(inName,"e_jointBit") ) { e_jointBit=ioValue.Cast< int >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"e_controllerBit") ) { e_controllerBit=ioValue.Cast< int >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"e_centerOfMassBit") ) { e_centerOfMassBit=ioValue.Cast< int >(); return true; }
	}
	return false;
}

void B2DebugDraw_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("m_drawFlags","\x11","\x87","\xed","\x04"));
	outFields->push(HX_HCSTRING("m_sprite","\xd7","\x84","\x87","\x8c"));
	outFields->push(HX_HCSTRING("m_drawScale","\x54","\x2a","\x30","\x7b"));
	outFields->push(HX_HCSTRING("m_lineThickness","\x4e","\x10","\x5b","\x4b"));
	outFields->push(HX_HCSTRING("m_alpha","\xcc","\x7e","\x21","\xd2"));
	outFields->push(HX_HCSTRING("m_fillAlpha","\x49","\xf4","\x93","\x2a"));
	outFields->push(HX_HCSTRING("m_xformScale","\x00","\x71","\x74","\xf2"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo B2DebugDraw_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(B2DebugDraw_obj,m_drawFlags),HX_HCSTRING("m_drawFlags","\x11","\x87","\xed","\x04")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(B2DebugDraw_obj,m_sprite),HX_HCSTRING("m_sprite","\xd7","\x84","\x87","\x8c")},
	{hx::fsFloat,(int)offsetof(B2DebugDraw_obj,m_drawScale),HX_HCSTRING("m_drawScale","\x54","\x2a","\x30","\x7b")},
	{hx::fsFloat,(int)offsetof(B2DebugDraw_obj,m_lineThickness),HX_HCSTRING("m_lineThickness","\x4e","\x10","\x5b","\x4b")},
	{hx::fsFloat,(int)offsetof(B2DebugDraw_obj,m_alpha),HX_HCSTRING("m_alpha","\xcc","\x7e","\x21","\xd2")},
	{hx::fsFloat,(int)offsetof(B2DebugDraw_obj,m_fillAlpha),HX_HCSTRING("m_fillAlpha","\x49","\xf4","\x93","\x2a")},
	{hx::fsFloat,(int)offsetof(B2DebugDraw_obj,m_xformScale),HX_HCSTRING("m_xformScale","\x00","\x71","\x74","\xf2")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo B2DebugDraw_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &B2DebugDraw_obj::e_shapeBit,HX_HCSTRING("e_shapeBit","\x86","\xba","\xcc","\x43")},
	{hx::fsInt,(void *) &B2DebugDraw_obj::e_jointBit,HX_HCSTRING("e_jointBit","\xfd","\xe3","\x14","\x7a")},
	{hx::fsInt,(void *) &B2DebugDraw_obj::e_aabbBit,HX_HCSTRING("e_aabbBit","\xf3","\xf8","\x74","\xab")},
	{hx::fsInt,(void *) &B2DebugDraw_obj::e_pairBit,HX_HCSTRING("e_pairBit","\xb9","\x67","\x98","\x2d")},
	{hx::fsInt,(void *) &B2DebugDraw_obj::e_centerOfMassBit,HX_HCSTRING("e_centerOfMassBit","\x33","\x5c","\x95","\xed")},
	{hx::fsInt,(void *) &B2DebugDraw_obj::e_controllerBit,HX_HCSTRING("e_controllerBit","\xf7","\x18","\x58","\xeb")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String B2DebugDraw_obj_sMemberFields[] = {
	HX_HCSTRING("setFlags","\x45","\x94","\xc0","\x10"),
	HX_HCSTRING("getFlags","\xd1","\x3a","\x63","\x62"),
	HX_HCSTRING("appendFlags","\x0d","\xc3","\x02","\x3f"),
	HX_HCSTRING("clearFlags","\x7a","\x6a","\x96","\xd7"),
	HX_HCSTRING("setSprite","\x47","\x51","\x3d","\x23"),
	HX_HCSTRING("getSprite","\x3b","\x65","\xec","\x3f"),
	HX_HCSTRING("setDrawScale","\xe4","\xc3","\x29","\x65"),
	HX_HCSTRING("getDrawScale","\x70","\xa0","\x30","\x50"),
	HX_HCSTRING("setLineThickness","\xde","\xb1","\x48","\x5e"),
	HX_HCSTRING("getLineThickness","\x6a","\xc4","\x06","\x08"),
	HX_HCSTRING("setAlpha","\x5c","\x10","\xcb","\x2f"),
	HX_HCSTRING("getAlpha","\xe8","\xb6","\x6d","\x81"),
	HX_HCSTRING("setFillAlpha","\xd9","\x8d","\x8d","\x14"),
	HX_HCSTRING("getFillAlpha","\x65","\x6a","\x94","\xff"),
	HX_HCSTRING("setXFormScale","\x50","\x15","\xb4","\x64"),
	HX_HCSTRING("getXFormScale","\x44","\x33","\xae","\x1f"),
	HX_HCSTRING("drawPolygon","\xd6","\x46","\xd9","\x5b"),
	HX_HCSTRING("drawSolidPolygon","\xb3","\x8f","\x8a","\x64"),
	HX_HCSTRING("drawCircle","\x34","\xed","\xd0","\x97"),
	HX_HCSTRING("drawSolidCircle","\xf7","\x2e","\x59","\x46"),
	HX_HCSTRING("drawSegment","\x0f","\x14","\x17","\xf0"),
	HX_HCSTRING("drawTransform","\xc8","\x40","\xba","\xa4"),
	HX_HCSTRING("m_drawFlags","\x11","\x87","\xed","\x04"),
	HX_HCSTRING("m_sprite","\xd7","\x84","\x87","\x8c"),
	HX_HCSTRING("m_drawScale","\x54","\x2a","\x30","\x7b"),
	HX_HCSTRING("m_lineThickness","\x4e","\x10","\x5b","\x4b"),
	HX_HCSTRING("m_alpha","\xcc","\x7e","\x21","\xd2"),
	HX_HCSTRING("m_fillAlpha","\x49","\xf4","\x93","\x2a"),
	HX_HCSTRING("m_xformScale","\x00","\x71","\x74","\xf2"),
	::String(null()) };

static void B2DebugDraw_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(B2DebugDraw_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(B2DebugDraw_obj::e_shapeBit,"e_shapeBit");
	HX_MARK_MEMBER_NAME(B2DebugDraw_obj::e_jointBit,"e_jointBit");
	HX_MARK_MEMBER_NAME(B2DebugDraw_obj::e_aabbBit,"e_aabbBit");
	HX_MARK_MEMBER_NAME(B2DebugDraw_obj::e_pairBit,"e_pairBit");
	HX_MARK_MEMBER_NAME(B2DebugDraw_obj::e_centerOfMassBit,"e_centerOfMassBit");
	HX_MARK_MEMBER_NAME(B2DebugDraw_obj::e_controllerBit,"e_controllerBit");
};

#ifdef HXCPP_VISIT_ALLOCS
static void B2DebugDraw_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(B2DebugDraw_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(B2DebugDraw_obj::e_shapeBit,"e_shapeBit");
	HX_VISIT_MEMBER_NAME(B2DebugDraw_obj::e_jointBit,"e_jointBit");
	HX_VISIT_MEMBER_NAME(B2DebugDraw_obj::e_aabbBit,"e_aabbBit");
	HX_VISIT_MEMBER_NAME(B2DebugDraw_obj::e_pairBit,"e_pairBit");
	HX_VISIT_MEMBER_NAME(B2DebugDraw_obj::e_centerOfMassBit,"e_centerOfMassBit");
	HX_VISIT_MEMBER_NAME(B2DebugDraw_obj::e_controllerBit,"e_controllerBit");
};

#endif

hx::Class B2DebugDraw_obj::__mClass;

static ::String B2DebugDraw_obj_sStaticFields[] = {
	HX_HCSTRING("e_shapeBit","\x86","\xba","\xcc","\x43"),
	HX_HCSTRING("e_jointBit","\xfd","\xe3","\x14","\x7a"),
	HX_HCSTRING("e_aabbBit","\xf3","\xf8","\x74","\xab"),
	HX_HCSTRING("e_pairBit","\xb9","\x67","\x98","\x2d"),
	HX_HCSTRING("e_centerOfMassBit","\x33","\x5c","\x95","\xed"),
	HX_HCSTRING("e_controllerBit","\xf7","\x18","\x58","\xeb"),
	::String(null())
};

void B2DebugDraw_obj::__register()
{
	hx::Object *dummy = new B2DebugDraw_obj;
	B2DebugDraw_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("box2D.dynamics.B2DebugDraw","\x3e","\x36","\x4d","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &B2DebugDraw_obj::__GetStatic;
	__mClass->mSetStaticField = &B2DebugDraw_obj::__SetStatic;
	__mClass->mMarkFunc = B2DebugDraw_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(B2DebugDraw_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(B2DebugDraw_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< B2DebugDraw_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = B2DebugDraw_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = B2DebugDraw_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = B2DebugDraw_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void B2DebugDraw_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_53_boot)
HXDLIN(  53)		e_shapeBit = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_55_boot)
HXDLIN(  55)		e_jointBit = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_57_boot)
HXDLIN(  57)		e_aabbBit = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_59_boot)
HXDLIN(  59)		e_pairBit = (int)8;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_61_boot)
HXDLIN(  61)		e_centerOfMassBit = (int)16;
            	}
{
            	HX_STACKFRAME(&_hx_pos_d99996969e733d6c_63_boot)
HXDLIN(  63)		e_controllerBit = (int)32;
            	}
}

} // end namespace box2D
} // end namespace dynamics
