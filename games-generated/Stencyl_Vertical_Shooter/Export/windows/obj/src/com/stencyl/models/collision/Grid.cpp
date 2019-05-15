// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_com_stencyl_models_Actor
#include <com/stencyl/models/Actor.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Grid
#include <com/stencyl/models/collision/Grid.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Hitbox
#include <com/stencyl/models/collision/Hitbox.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Mask
#include <com/stencyl/models/collision/Mask.h>
#endif
#ifndef INCLUDED_com_stencyl_models_collision_Pixelmask
#include <com/stencyl/models/collision/Pixelmask.h>
#endif
#ifndef INCLUDED_com_stencyl_utils_Utils
#include <com/stencyl/utils/Utils.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_37_new,"com.stencyl.models.collision.Grid","new",0xec820329,"com.stencyl.models.collision.Grid.new","com/stencyl/models/collision/Grid.hx",37,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_81_setTile,"com.stencyl.models.collision.Grid","setTile",0x723ad739,"com.stencyl.models.collision.Grid.setTile","com/stencyl/models/collision/Grid.hx",81,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_99_clearTile,"com.stencyl.models.collision.Grid","clearTile",0xdaf7a2e4,"com.stencyl.models.collision.Grid.clearTile","com/stencyl/models/collision/Grid.hx",99,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_105_checkTile,"com.stencyl.models.collision.Grid","checkTile",0xbb16839f,"com.stencyl.models.collision.Grid.checkTile","com/stencyl/models/collision/Grid.hx",105,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_123_getTile,"com.stencyl.models.collision.Grid","getTile",0x7f39462d,"com.stencyl.models.collision.Grid.getTile","com/stencyl/models/collision/Grid.hx",123,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_143_setRect,"com.stencyl.models.collision.Grid","setRect",0x70e5592f,"com.stencyl.models.collision.Grid.setRect","com/stencyl/models/collision/Grid.hx",143,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_170_clearRect,"com.stencyl.models.collision.Grid","clearRect",0xd9a224da,"com.stencyl.models.collision.Grid.clearRect","com/stencyl/models/collision/Grid.hx",170,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_177_get_tileWidth,"com.stencyl.models.collision.Grid","get_tileWidth",0xe864cfd8,"com.stencyl.models.collision.Grid.get_tileWidth","com/stencyl/models/collision/Grid.hx",177,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_183_get_tileHeight,"com.stencyl.models.collision.Grid","get_tileHeight",0x262085d5,"com.stencyl.models.collision.Grid.get_tileHeight","com/stencyl/models/collision/Grid.hx",183,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_202_collideMask,"com.stencyl.models.collision.Grid","collideMask",0x4a4f5753,"com.stencyl.models.collision.Grid.collideMask","com/stencyl/models/collision/Grid.hx",202,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_226_collideHitbox,"com.stencyl.models.collision.Grid","collideHitbox",0x9a60abbf,"com.stencyl.models.collision.Grid.collideHitbox","com/stencyl/models/collision/Grid.hx",226,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_257_collidePixelmask,"com.stencyl.models.collision.Grid","collidePixelmask",0x572016ab,"com.stencyl.models.collision.Grid.collidePixelmask","com/stencyl/models/collision/Grid.hx",257,0x49159467)
HX_LOCAL_STACK_FRAME(_hx_pos_d9903a1c1b6353a6_348_squareProjection,"com.stencyl.models.collision.Grid","squareProjection",0xc2875723,"com.stencyl.models.collision.Grid.squareProjection","com/stencyl/models/collision/Grid.hx",348,0x49159467)
namespace com{
namespace stencyl{
namespace models{
namespace collision{

void Grid_obj::__construct(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y){
int x = __o_x.Default(0);
int y = __o_y.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_37_new)
HXLINE(  38)		super::__construct(null(),null(),null(),null(),null(),null());
HXLINE(  41)		bool _hx_tmp;
HXDLIN(  41)		bool _hx_tmp1;
HXDLIN(  41)		bool _hx_tmp2;
HXDLIN(  41)		if ((width != (int)0)) {
HXLINE(  41)			_hx_tmp2 = (height == (int)0);
            		}
            		else {
HXLINE(  41)			_hx_tmp2 = true;
            		}
HXDLIN(  41)		if (!(_hx_tmp2)) {
HXLINE(  41)			_hx_tmp1 = (tileWidth == (int)0);
            		}
            		else {
HXLINE(  41)			_hx_tmp1 = true;
            		}
HXDLIN(  41)		if (!(_hx_tmp1)) {
HXLINE(  41)			_hx_tmp = (tileHeight == (int)0);
            		}
            		else {
HXLINE(  41)			_hx_tmp = true;
            		}
HXDLIN(  41)		if (_hx_tmp) {
HXLINE(  43)			HX_STACK_DO_THROW(HX_("Illegal Grid, sizes cannot be 0.",10,ed,94,82));
            		}
HXLINE(  46)		this->_rect = ::com::stencyl::utils::Utils_obj::rect;
HXLINE(  47)		this->_point = ::com::stencyl::utils::Utils_obj::point;
HXLINE(  48)		this->_point2 = ::com::stencyl::utils::Utils_obj::point2;
HXLINE(  51)		this->columns = ::Std_obj::_hx_int(((Float)width / (Float)tileWidth));
HXLINE(  52)		this->rows = ::Std_obj::_hx_int(((Float)height / (Float)tileHeight));
HXLINE(  54)		this->_tile =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,(int)0,(int)0,tileWidth,tileHeight);
HXLINE(  55)		this->_x = x;
HXLINE(  56)		this->_y = y;
HXLINE(  57)		this->_width = width;
HXLINE(  58)		this->_height = height;
HXLINE(  59)		this->usePositions = false;
HXLINE(  60)		this->groupID = (int)1;
HXLINE(  63)		{
HXLINE(  63)			::Dynamic this1 = this->_check;
HXDLIN(  63)			( ( ::haxe::ds::StringMap)(this1) )->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Mask >()),this->collideMask_dyn());
            		}
HXLINE(  64)		{
HXLINE(  64)			::Dynamic this2 = this->_check;
HXDLIN(  64)			( ( ::haxe::ds::StringMap)(this2) )->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Hitbox >()),this->collideHitbox_dyn());
            		}
HXLINE(  65)		{
HXLINE(  65)			::Dynamic this3 = this->_check;
HXDLIN(  65)			( ( ::haxe::ds::StringMap)(this3) )->set(::Type_obj::getClassName(hx::ClassOf< ::com::stencyl::models::collision::Pixelmask >()),this->collidePixelmask_dyn());
            		}
HXLINE(  67)		this->data = ::Array_obj< ::Dynamic>::__new();
HXLINE(  68)		{
HXLINE(  68)			int _g1 = (int)0;
HXDLIN(  68)			int _g = this->rows;
HXDLIN(  68)			while((_g1 < _g)){
HXLINE(  68)				_g1 = (_g1 + (int)1);
HXDLIN(  68)				int x1 = (_g1 - (int)1);
HXLINE(  70)				::Array< ::Dynamic> _hx_tmp3 = this->data;
HXDLIN(  70)				_hx_tmp3->push(::Array_obj< bool >::__new());
            			}
            		}
            	}

Dynamic Grid_obj::__CreateEmpty() { return new Grid_obj; }

void *Grid_obj::_hx_vtable = 0;

Dynamic Grid_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Grid_obj > _hx_result = new Grid_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool Grid_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2ff29145) {
		if (inClassId<=(int)0x2c08271f) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x2c08271f;
		} else {
			return inClassId==(int)0x2ff29145;
		}
	} else {
		return inClassId==(int)0x6b714215;
	}
}

void Grid_obj::setTile(hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
bool solid = __o_solid.Default(true);
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_81_setTile)
HXLINE(  82)		bool _hx_tmp;
HXDLIN(  82)		bool _hx_tmp1;
HXDLIN(  82)		bool _hx_tmp2;
HXDLIN(  82)		bool _hx_tmp3;
HXDLIN(  82)		if ((column >= (int)0)) {
HXLINE(  82)			_hx_tmp3 = (column > (this->columns - (int)1));
            		}
            		else {
HXLINE(  82)			_hx_tmp3 = true;
            		}
HXDLIN(  82)		if (!(_hx_tmp3)) {
HXLINE(  82)			_hx_tmp2 = (row < (int)0);
            		}
            		else {
HXLINE(  82)			_hx_tmp2 = true;
            		}
HXDLIN(  82)		if (!(_hx_tmp2)) {
HXLINE(  82)			_hx_tmp1 = (row > (this->rows - (int)1));
            		}
            		else {
HXLINE(  82)			_hx_tmp1 = true;
            		}
HXDLIN(  82)		if (_hx_tmp1) {
HXLINE(  82)			_hx_tmp = false;
            		}
            		else {
HXLINE(  82)			_hx_tmp = true;
            		}
HXDLIN(  82)		if (!(_hx_tmp)) {
HXLINE(  82)			return;
            		}
HXLINE(  84)		if (this->usePositions) {
HXLINE(  86)			column = ::Std_obj::_hx_int(((Float)column / (Float)this->_tile->width));
HXLINE(  87)			row = ::Std_obj::_hx_int(((Float)row / (Float)this->_tile->height));
            		}
HXLINE(  89)		this->data->__get(row).StaticCast< ::Array< bool > >()[column] = solid;
            	}


HX_DEFINE_DYNAMIC_FUNC3(Grid_obj,setTile,(void))

void Grid_obj::clearTile(hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_99_clearTile)
HXDLIN(  99)		this->setTile(column,row,false);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,clearTile,(void))

bool Grid_obj::checkTile(int column,int row){
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_105_checkTile)
HXDLIN( 105)		bool _hx_tmp;
HXDLIN( 105)		bool _hx_tmp1;
HXDLIN( 105)		bool _hx_tmp2;
HXDLIN( 105)		if ((column >= (int)0)) {
HXDLIN( 105)			_hx_tmp2 = (column > (this->columns - (int)1));
            		}
            		else {
HXDLIN( 105)			_hx_tmp2 = true;
            		}
HXDLIN( 105)		if (!(_hx_tmp2)) {
HXDLIN( 105)			_hx_tmp1 = (row < (int)0);
            		}
            		else {
HXDLIN( 105)			_hx_tmp1 = true;
            		}
HXDLIN( 105)		if (!(_hx_tmp1)) {
HXDLIN( 105)			_hx_tmp = (row > (this->rows - (int)1));
            		}
            		else {
HXDLIN( 105)			_hx_tmp = true;
            		}
HXDLIN( 105)		if (_hx_tmp) {
HXLINE( 108)			return false;
            		}
            		else {
HXLINE( 112)			return true;
            		}
HXLINE( 105)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,checkTile,return )

bool Grid_obj::getTile(hx::Null< int >  __o_column,hx::Null< int >  __o_row){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_123_getTile)
HXLINE( 124)		bool _hx_tmp;
HXDLIN( 124)		bool _hx_tmp1;
HXDLIN( 124)		bool _hx_tmp2;
HXDLIN( 124)		bool _hx_tmp3;
HXDLIN( 124)		if ((column >= (int)0)) {
HXLINE( 124)			_hx_tmp3 = (column > (this->columns - (int)1));
            		}
            		else {
HXLINE( 124)			_hx_tmp3 = true;
            		}
HXDLIN( 124)		if (!(_hx_tmp3)) {
HXLINE( 124)			_hx_tmp2 = (row < (int)0);
            		}
            		else {
HXLINE( 124)			_hx_tmp2 = true;
            		}
HXDLIN( 124)		if (!(_hx_tmp2)) {
HXLINE( 124)			_hx_tmp1 = (row > (this->rows - (int)1));
            		}
            		else {
HXLINE( 124)			_hx_tmp1 = true;
            		}
HXDLIN( 124)		if (_hx_tmp1) {
HXLINE( 124)			_hx_tmp = false;
            		}
            		else {
HXLINE( 124)			_hx_tmp = true;
            		}
HXDLIN( 124)		if (!(_hx_tmp)) {
HXLINE( 124)			return false;
            		}
HXLINE( 126)		if (this->usePositions) {
HXLINE( 128)			column = ::Std_obj::_hx_int(((Float)column / (Float)this->_tile->width));
HXLINE( 129)			row = ::Std_obj::_hx_int(((Float)row / (Float)this->_tile->height));
            		}
HXLINE( 131)		return this->data->__get(row).StaticCast< ::Array< bool > >()->__get(column);
            	}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,getTile,return )

void Grid_obj::setRect(hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< bool >  __o_solid){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
bool solid = __o_solid.Default(true);
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_143_setRect)
HXLINE( 144)		if (this->usePositions) {
HXLINE( 146)			column = ::Std_obj::_hx_int(((Float)column / (Float)this->_tile->width));
HXLINE( 147)			row = ::Std_obj::_hx_int(((Float)row / (Float)this->_tile->height));
HXLINE( 148)			width = ::Std_obj::_hx_int(((Float)width / (Float)this->_tile->width));
HXLINE( 149)			height = ::Std_obj::_hx_int(((Float)height / (Float)this->_tile->height));
            		}
HXLINE( 152)		{
HXLINE( 152)			int _g1 = row;
HXDLIN( 152)			int _g = (row + height);
HXDLIN( 152)			while((_g1 < _g)){
HXLINE( 152)				_g1 = (_g1 + (int)1);
HXDLIN( 152)				int yy = (_g1 - (int)1);
HXLINE( 154)				{
HXLINE( 154)					int _g3 = column;
HXDLIN( 154)					int _g2 = (column + width);
HXDLIN( 154)					while((_g3 < _g2)){
HXLINE( 154)						_g3 = (_g3 + (int)1);
HXDLIN( 154)						int xx = (_g3 - (int)1);
HXLINE( 156)						this->setTile(xx,yy,solid);
            					}
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC5(Grid_obj,setRect,(void))

void Grid_obj::clearRect(hx::Null< int >  __o_column,hx::Null< int >  __o_row,hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int column = __o_column.Default(0);
int row = __o_row.Default(0);
int width = __o_width.Default(1);
int height = __o_height.Default(1);
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_170_clearRect)
HXDLIN( 170)		this->setRect(column,row,width,height,false);
            	}


HX_DEFINE_DYNAMIC_FUNC4(Grid_obj,clearRect,(void))

int Grid_obj::get_tileWidth(){
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_177_get_tileWidth)
HXDLIN( 177)		return ::Std_obj::_hx_int(this->_tile->width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileWidth,return )

int Grid_obj::get_tileHeight(){
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_183_get_tileHeight)
HXDLIN( 183)		return ::Std_obj::_hx_int(this->_tile->height);
            	}


HX_DEFINE_DYNAMIC_FUNC0(Grid_obj,get_tileHeight,return )

bool Grid_obj::collideMask( ::com::stencyl::models::collision::Mask other){
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_202_collideMask)
HXLINE( 203)		int rectX;
HXDLIN( 203)		int rectY;
HXDLIN( 203)		int pointX;
HXDLIN( 203)		int pointY;
HXLINE( 204)		this->_rect->x = (other->parent->colX - this->parent->colX);
HXLINE( 205)		this->_rect->y = (other->parent->colY - this->parent->colY);
HXLINE( 206)		pointX = (::Std_obj::_hx_int(((Float)((this->_rect->x + other->parent->cacheWidth) - (int)1) / (Float)this->_tile->width)) + (int)1);
HXLINE( 207)		pointY = (::Std_obj::_hx_int(((Float)((this->_rect->y + other->parent->cacheHeight) - (int)1) / (Float)this->_tile->height)) + (int)1);
HXLINE( 208)		rectX = ::Std_obj::_hx_int(((Float)this->_rect->x / (Float)this->_tile->width));
HXLINE( 209)		rectY = ::Std_obj::_hx_int(((Float)this->_rect->y / (Float)this->_tile->height));
HXLINE( 211)		{
HXLINE( 211)			int _g1 = rectY;
HXDLIN( 211)			int _g = pointY;
HXDLIN( 211)			while((_g1 < _g)){
HXLINE( 211)				_g1 = (_g1 + (int)1);
HXDLIN( 211)				int dy = (_g1 - (int)1);
HXLINE( 213)				{
HXLINE( 213)					int _g3 = rectX;
HXDLIN( 213)					int _g2 = pointX;
HXDLIN( 213)					while((_g3 < _g2)){
HXLINE( 213)						_g3 = (_g3 + (int)1);
HXDLIN( 213)						int dx = (_g3 - (int)1);
HXLINE( 215)						if (this->getTile(dx,dy)) {
HXLINE( 217)							return true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 221)		return false;
            	}


bool Grid_obj::collideHitbox( ::com::stencyl::models::collision::Hitbox other){
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_226_collideHitbox)
HXLINE( 227)		int rectX;
HXDLIN( 227)		int rectY;
HXDLIN( 227)		int pointX;
HXDLIN( 227)		int pointY;
HXLINE( 228)		this->_rect->x = (other->parent->colX + other->_x);
HXLINE( 229)		this->_rect->y = (other->parent->colY + other->_y);
HXLINE( 230)		pointX = (::Std_obj::_hx_int(((Float)((this->_rect->x + other->_width) - (int)1) / (Float)this->_tile->width)) + (int)1);
HXLINE( 231)		pointY = (::Std_obj::_hx_int(((Float)((this->_rect->y + other->_height) - (int)1) / (Float)this->_tile->height)) + (int)1);
HXLINE( 232)		rectX = ::Std_obj::_hx_int(((Float)this->_rect->x / (Float)this->_tile->width));
HXLINE( 233)		rectY = ::Std_obj::_hx_int(((Float)this->_rect->y / (Float)this->_tile->height));
HXLINE( 235)		{
HXLINE( 235)			int _g1 = rectY;
HXDLIN( 235)			int _g = pointY;
HXDLIN( 235)			while((_g1 < _g)){
HXLINE( 235)				_g1 = (_g1 + (int)1);
HXDLIN( 235)				int dy = (_g1 - (int)1);
HXLINE( 237)				{
HXLINE( 237)					int _g3 = rectX;
HXDLIN( 237)					int _g2 = pointX;
HXDLIN( 237)					while((_g3 < _g2)){
HXLINE( 237)						_g3 = (_g3 + (int)1);
HXDLIN( 237)						int dx = (_g3 - (int)1);
HXLINE( 239)						if (this->getTile(dx,dy)) {
HXLINE( 241)							this->lastBounds->x = (dx * this->_tile->width);
HXLINE( 242)							this->lastBounds->y = (dy * this->_tile->height);
HXLINE( 243)							this->lastBounds->width = this->_tile->width;
HXLINE( 244)							this->lastBounds->height = this->_tile->height;
HXLINE( 246)							other->lastColID = this->groupID;
HXLINE( 248)							return true;
            						}
            					}
            				}
            			}
            		}
HXLINE( 252)		return false;
            	}


bool Grid_obj::collidePixelmask( ::com::stencyl::models::collision::Pixelmask other){
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_257_collidePixelmask)
HXLINE( 299)		::haxe::Log_obj::trace(HX_("Pixelmasks will not work in targets other than flash due to hittest not being implemented in openfl.",6a,13,99,97),hx::SourceInfo(HX_("Grid.hx",98,93,72,d4),299,HX_("com.stencyl.models.collision.Grid",b7,3a,4d,07),HX_("collidePixelmask",14,13,af,13)));
HXLINE( 301)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Grid_obj,collidePixelmask,return )

void Grid_obj::squareProjection( ::openfl::geom::Point axis, ::openfl::geom::Point point){
            	HX_STACKFRAME(&_hx_pos_d9903a1c1b6353a6_348_squareProjection)
HXDLIN( 348)		if ((axis->x < axis->y)) {
HXLINE( 350)			point->x = axis->x;
HXLINE( 351)			point->y = axis->y;
            		}
            		else {
HXLINE( 355)			point->y = axis->x;
HXLINE( 356)			point->x = axis->y;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Grid_obj,squareProjection,(void))


hx::ObjectPtr< Grid_obj > Grid_obj::__new(int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y) {
	hx::ObjectPtr< Grid_obj > __this = new Grid_obj();
	__this->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return __this;
}

hx::ObjectPtr< Grid_obj > Grid_obj::__alloc(hx::Ctx *_hx_ctx,int width,int height,int tileWidth,int tileHeight,hx::Null< int >  __o_x,hx::Null< int >  __o_y) {
	Grid_obj *__this = (Grid_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Grid_obj), true, "com.stencyl.models.collision.Grid"));
	*(void **)__this = Grid_obj::_hx_vtable;
	__this->__construct(width,height,tileWidth,tileHeight,__o_x,__o_y);
	return __this;
}

Grid_obj::Grid_obj()
{
}

void Grid_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Grid);
	HX_MARK_MEMBER_NAME(usePositions,"usePositions");
	HX_MARK_MEMBER_NAME(columns,"columns");
	HX_MARK_MEMBER_NAME(rows,"rows");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(_tile,"_tile");
	HX_MARK_MEMBER_NAME(_rect,"_rect");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_point2,"_point2");
	 ::com::stencyl::models::collision::Mask_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Grid_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(usePositions,"usePositions");
	HX_VISIT_MEMBER_NAME(columns,"columns");
	HX_VISIT_MEMBER_NAME(rows,"rows");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(_tile,"_tile");
	HX_VISIT_MEMBER_NAME(_rect,"_rect");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_point2,"_point2");
	 ::com::stencyl::models::collision::Mask_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Grid_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { return hx::Val( rows ); }
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { return hx::Val( _tile ); }
		if (HX_FIELD_EQ(inName,"_rect") ) { return hx::Val( _rect ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return hx::Val( _point ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setTile") ) { return hx::Val( setTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"getTile") ) { return hx::Val( getTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"setRect") ) { return hx::Val( setRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"columns") ) { return hx::Val( columns ); }
		if (HX_FIELD_EQ(inName,"_point2") ) { return hx::Val( _point2 ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"clearTile") ) { return hx::Val( clearTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkTile") ) { return hx::Val( checkTile_dyn() ); }
		if (HX_FIELD_EQ(inName,"clearRect") ) { return hx::Val( clearRect_dyn() ); }
		if (HX_FIELD_EQ(inName,"tileWidth") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_tileWidth() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_tileHeight() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"collideMask") ) { return hx::Val( collideMask_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { return hx::Val( usePositions ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_tileWidth") ) { return hx::Val( get_tileWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"collideHitbox") ) { return hx::Val( collideHitbox_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_tileHeight") ) { return hx::Val( get_tileHeight_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"collidePixelmask") ) { return hx::Val( collidePixelmask_dyn() ); }
		if (HX_FIELD_EQ(inName,"squareProjection") ) { return hx::Val( squareProjection_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Grid_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rows") ) { rows=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_tile") ) { _tile=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=inValue.Cast<  ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"columns") ) { columns=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point2") ) { _point2=inValue.Cast<  ::openfl::geom::Point >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"usePositions") ) { usePositions=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Grid_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f"));
	outFields->push(HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"));
	outFields->push(HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"));
	outFields->push(HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"));
	outFields->push(HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"));
	outFields->push(HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"));
	outFields->push(HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"));
	outFields->push(HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Grid_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Grid_obj,usePositions),HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f")},
	{hx::fsInt,(int)offsetof(Grid_obj,columns),HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3")},
	{hx::fsInt,(int)offsetof(Grid_obj,rows),HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Grid_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Grid_obj,_tile),HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(Grid_obj,_rect),HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Grid_obj,_point),HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2")},
	{hx::fsObject /*::openfl::geom::Point*/ ,(int)offsetof(Grid_obj,_point2),HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Grid_obj_sStaticStorageInfo = 0;
#endif

static ::String Grid_obj_sMemberFields[] = {
	HX_HCSTRING("usePositions","\x63","\x66","\xed","\x3f"),
	HX_HCSTRING("setTile","\xf0","\x0b","\x81","\x12"),
	HX_HCSTRING("clearTile","\x5b","\xb3","\xbd","\xc0"),
	HX_HCSTRING("checkTile","\x16","\x94","\xdc","\xa0"),
	HX_HCSTRING("getTile","\xe4","\x7a","\x7f","\x1f"),
	HX_HCSTRING("setRect","\xe6","\x8d","\x2b","\x11"),
	HX_HCSTRING("clearRect","\x51","\x35","\x68","\xbf"),
	HX_HCSTRING("get_tileWidth","\xcf","\xe7","\x21","\x17"),
	HX_HCSTRING("get_tileHeight","\xfe","\x65","\xd8","\xdc"),
	HX_HCSTRING("columns","\xdd","\xac","\x59","\xf3"),
	HX_HCSTRING("rows","\x19","\xf5","\xae","\x4b"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("collideMask","\x8a","\xb3","\x13","\xba"),
	HX_HCSTRING("collideHitbox","\xb6","\xc3","\x1d","\xc9"),
	HX_HCSTRING("collidePixelmask","\x14","\x13","\xaf","\x13"),
	HX_HCSTRING("squareProjection","\x8c","\x53","\x16","\x7f"),
	HX_HCSTRING("_tile","\x0d","\xe7","\x0d","\x00"),
	HX_HCSTRING("_rect","\x03","\x69","\xb8","\xfe"),
	HX_HCSTRING("_point","\x91","\xfb","\x76","\xc2"),
	HX_HCSTRING("_point2","\x81","\x23","\xa5","\x65"),
	::String(null()) };

static void Grid_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Grid_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Grid_obj::__mClass,"__mClass");
};

#endif

hx::Class Grid_obj::__mClass;

void Grid_obj::__register()
{
	hx::Object *dummy = new Grid_obj;
	Grid_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.models.collision.Grid","\xb7","\x3a","\x4d","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Grid_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Grid_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Grid_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Grid_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Grid_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Grid_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace models
} // end namespace collision