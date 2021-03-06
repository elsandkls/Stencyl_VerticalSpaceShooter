// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_mbs_MbsResource
#include <com/stencyl/io/mbs/MbsResource.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_scene_MbsTile
#include <com/stencyl/io/mbs/scene/MbsTile.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_scene_MbsTileset
#include <com/stencyl/io/mbs/scene/MbsTileset.h>
#endif
#ifndef INCLUDED_mbs_core_ComposedType
#include <mbs/core/ComposedType.h>
#endif
#ifndef INCLUDED_mbs_core_MbsField
#include <mbs/core/MbsField.h>
#endif
#ifndef INCLUDED_mbs_core_MbsObject
#include <mbs/core/MbsObject.h>
#endif
#ifndef INCLUDED_mbs_core_MbsType
#include <mbs/core/MbsType.h>
#endif
#ifndef INCLUDED_mbs_core_MbsTypes
#include <mbs/core/MbsTypes.h>
#endif
#ifndef INCLUDED_mbs_io_MbsIO
#include <mbs/io/MbsIO.h>
#endif
#ifndef INCLUDED_mbs_io_MbsList
#include <mbs/io/MbsList.h>
#endif
#ifndef INCLUDED_mbs_io_MbsListBase
#include <mbs/io/MbsListBase.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_630ca2eccc61848a_53_new,"com.stencyl.io.mbs.scene.MbsTileset","new",0x64c0b093,"com.stencyl.io.mbs.scene.MbsTileset.new","com/stencyl/io/mbs/scene/MbsTileset.hx",53,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_47_getMbsType,"com.stencyl.io.mbs.scene.MbsTileset","getMbsType",0x6bf1238f,"com.stencyl.io.mbs.scene.MbsTileset.getMbsType","com/stencyl/io/mbs/scene/MbsTileset.hx",47,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_60_allocateNew,"com.stencyl.io.mbs.scene.MbsTileset","allocateNew",0x9bb214d6,"com.stencyl.io.mbs.scene.MbsTileset.allocateNew","com/stencyl/io/mbs/scene/MbsTileset.hx",60,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_65_getAcross,"com.stencyl.io.mbs.scene.MbsTileset","getAcross",0x1f6a7128,"com.stencyl.io.mbs.scene.MbsTileset.getAcross","com/stencyl/io/mbs/scene/MbsTileset.hx",65,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_70_setAcross,"com.stencyl.io.mbs.scene.MbsTileset","setAcross",0x02bb5d34,"com.stencyl.io.mbs.scene.MbsTileset.setAcross","com/stencyl/io/mbs/scene/MbsTileset.hx",70,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_75_getDown,"com.stencyl.io.mbs.scene.MbsTileset","getDown",0x3ebd1dcb,"com.stencyl.io.mbs.scene.MbsTileset.getDown","com/stencyl/io/mbs/scene/MbsTileset.hx",75,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_80_setDown,"com.stencyl.io.mbs.scene.MbsTileset","setDown",0x31beaed7,"com.stencyl.io.mbs.scene.MbsTileset.setDown","com/stencyl/io/mbs/scene/MbsTileset.hx",80,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_85_getReadableImages,"com.stencyl.io.mbs.scene.MbsTileset","getReadableImages",0xe55cd771,"com.stencyl.io.mbs.scene.MbsTileset.getReadableImages","com/stencyl/io/mbs/scene/MbsTileset.hx",85,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_90_setReadableImages,"com.stencyl.io.mbs.scene.MbsTileset","setReadableImages",0x08caaf7d,"com.stencyl.io.mbs.scene.MbsTileset.setReadableImages","com/stencyl/io/mbs/scene/MbsTileset.hx",90,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_95_getTileWidth,"com.stencyl.io.mbs.scene.MbsTileset","getTileWidth",0x8ae1b1ef,"com.stencyl.io.mbs.scene.MbsTileset.getTileWidth","com/stencyl/io/mbs/scene/MbsTileset.hx",95,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_100_setTileWidth,"com.stencyl.io.mbs.scene.MbsTileset","setTileWidth",0x9fdad563,"com.stencyl.io.mbs.scene.MbsTileset.setTileWidth","com/stencyl/io/mbs/scene/MbsTileset.hx",100,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_105_getTileHeight,"com.stencyl.io.mbs.scene.MbsTileset","getTileHeight",0xb0e977de,"com.stencyl.io.mbs.scene.MbsTileset.getTileHeight","com/stencyl/io/mbs/scene/MbsTileset.hx",105,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_110_setTileHeight,"com.stencyl.io.mbs.scene.MbsTileset","setTileHeight",0xf5ef59ea,"com.stencyl.io.mbs.scene.MbsTileset.setTileHeight","com/stencyl/io/mbs/scene/MbsTileset.hx",110,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_114_getTiles,"com.stencyl.io.mbs.scene.MbsTileset","getTiles",0xd92693fc,"com.stencyl.io.mbs.scene.MbsTileset.getTiles","com/stencyl/io/mbs/scene/MbsTileset.hx",114,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_120_createTiles,"com.stencyl.io.mbs.scene.MbsTileset","createTiles",0x2c15001c,"com.stencyl.io.mbs.scene.MbsTileset.createTiles","com/stencyl/io/mbs/scene/MbsTileset.hx",120,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_28_initializeType,"com.stencyl.io.mbs.scene.MbsTileset","initializeType",0x44ba2ed7,"com.stencyl.io.mbs.scene.MbsTileset.initializeType","com/stencyl/io/mbs/scene/MbsTileset.hx",28,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_23_initializeType,"com.stencyl.io.mbs.scene.MbsTileset","initializeType",0x44ba2ed7,"com.stencyl.io.mbs.scene.MbsTileset.initializeType","com/stencyl/io/mbs/scene/MbsTileset.hx",23,0x9586bddc)
HX_LOCAL_STACK_FRAME(_hx_pos_630ca2eccc61848a_42_new_MbsTileset_list,"com.stencyl.io.mbs.scene.MbsTileset","new_MbsTileset_list",0x8a01081b,"com.stencyl.io.mbs.scene.MbsTileset.new_MbsTileset_list","com/stencyl/io/mbs/scene/MbsTileset.hx",42,0x9586bddc)
namespace com{
namespace stencyl{
namespace io{
namespace mbs{
namespace scene{

void MbsTileset_obj::__construct(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_630ca2eccc61848a_53_new)
HXLINE(  54)		super::__construct(data);
HXLINE(  55)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::scene::MbsTile_obj::MBS_TILE;
HXDLIN(  55)		this->_tiles =  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::scene::MbsTile_obj::__alloc( HX_CTX ,data));
            	}

Dynamic MbsTileset_obj::__CreateEmpty() { return new MbsTileset_obj; }

void *MbsTileset_obj::_hx_vtable = 0;

Dynamic MbsTileset_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsTileset_obj > _hx_result = new MbsTileset_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MbsTileset_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17b72d64) {
		if (inClassId<=(int)0x0525537d) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0525537d;
		} else {
			return inClassId==(int)0x17b72d64;
		}
	} else {
		return inClassId==(int)0x6a1d713f;
	}
}

 ::mbs::core::MbsType MbsTileset_obj::getMbsType(){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_47_getMbsType)
HXDLIN(  47)		return ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET;
            	}


void MbsTileset_obj::allocateNew(){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_60_allocateNew)
HXDLIN(  60)		::Dynamic _hx_tmp = this->data;
HXDLIN(  60)		this->setAddress(::mbs::io::MbsIO_obj::allocate(_hx_tmp,::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->getSize()));
            	}


int MbsTileset_obj::getAcross(){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_65_getAcross)
HXDLIN(  65)		::Dynamic _hx_tmp = this->data;
HXDLIN(  65)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::across->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsTileset_obj,getAcross,return )

void MbsTileset_obj::setAcross(int _val){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_70_setAcross)
HXDLIN(  70)		::Dynamic _hx_tmp = this->data;
HXDLIN(  70)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::across->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsTileset_obj,setAcross,(void))

int MbsTileset_obj::getDown(){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_75_getDown)
HXDLIN(  75)		::Dynamic _hx_tmp = this->data;
HXDLIN(  75)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::down->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsTileset_obj,getDown,return )

void MbsTileset_obj::setDown(int _val){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_80_setDown)
HXDLIN(  80)		::Dynamic _hx_tmp = this->data;
HXDLIN(  80)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::down->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsTileset_obj,setDown,(void))

bool MbsTileset_obj::getReadableImages(){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_85_getReadableImages)
HXDLIN(  85)		::Dynamic _hx_tmp = this->data;
HXDLIN(  85)		return ::mbs::io::MbsIO_obj::readBool(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::readableImages->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsTileset_obj,getReadableImages,return )

void MbsTileset_obj::setReadableImages(bool _val){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_90_setReadableImages)
HXDLIN(  90)		::Dynamic _hx_tmp = this->data;
HXDLIN(  90)		::mbs::io::MbsIO_obj::writeBool(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::readableImages->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsTileset_obj,setReadableImages,(void))

int MbsTileset_obj::getTileWidth(){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_95_getTileWidth)
HXDLIN(  95)		::Dynamic _hx_tmp = this->data;
HXDLIN(  95)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::tileWidth->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsTileset_obj,getTileWidth,return )

void MbsTileset_obj::setTileWidth(int _val){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_100_setTileWidth)
HXDLIN( 100)		::Dynamic _hx_tmp = this->data;
HXDLIN( 100)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::tileWidth->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsTileset_obj,setTileWidth,(void))

int MbsTileset_obj::getTileHeight(){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_105_getTileHeight)
HXDLIN( 105)		::Dynamic _hx_tmp = this->data;
HXDLIN( 105)		return ::mbs::io::MbsIO_obj::readInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::tileHeight->address));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsTileset_obj,getTileHeight,return )

void MbsTileset_obj::setTileHeight(int _val){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_110_setTileHeight)
HXDLIN( 110)		::Dynamic _hx_tmp = this->data;
HXDLIN( 110)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::tileHeight->address),_val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsTileset_obj,setTileHeight,(void))

 ::mbs::io::MbsList MbsTileset_obj::getTiles(){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_114_getTiles)
HXLINE( 115)		 ::mbs::io::MbsList _hx_tmp = this->_tiles;
HXDLIN( 115)		::Dynamic _hx_tmp1 = this->data;
HXDLIN( 115)		_hx_tmp->setAddress(::mbs::io::MbsIO_obj::readInt(_hx_tmp1,(this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::tiles->address)));
HXLINE( 116)		return this->_tiles;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsTileset_obj,getTiles,return )

 ::mbs::io::MbsList MbsTileset_obj::createTiles(int _length){
            	HX_STACKFRAME(&_hx_pos_630ca2eccc61848a_120_createTiles)
HXLINE( 121)		this->_tiles->allocateNew(_length);
HXLINE( 122)		::Dynamic _hx_tmp = this->data;
HXDLIN( 122)		int _hx_tmp1 = (this->address + ::com::stencyl::io::mbs::scene::MbsTileset_obj::tiles->address);
HXDLIN( 122)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,_hx_tmp1,this->_tiles->getAddress());
HXLINE( 123)		return this->_tiles;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsTileset_obj,createTiles,return )

 ::mbs::core::MbsField MbsTileset_obj::across;

 ::mbs::core::MbsField MbsTileset_obj::down;

 ::mbs::core::MbsField MbsTileset_obj::readableImages;

 ::mbs::core::MbsField MbsTileset_obj::tileWidth;

 ::mbs::core::MbsField MbsTileset_obj::tileHeight;

 ::mbs::core::MbsField MbsTileset_obj::tiles;

 ::mbs::core::ComposedType MbsTileset_obj::MBS_TILESET;

void MbsTileset_obj::initializeType(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::mbs::core::MbsObject _hx_run(::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_630ca2eccc61848a_28_initializeType)
HXLINE(  28)			return  ::com::stencyl::io::mbs::scene::MbsTileset_obj::__alloc( HX_CTX ,data);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_630ca2eccc61848a_23_initializeType)
HXLINE(  24)		if (hx::IsNotNull( ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET )) {
HXLINE(  24)			return;
            		}
HXLINE(  25)		::com::stencyl::io::mbs::MbsResource_obj::initializeType();
HXLINE(  27)		::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET =  ::mbs::core::ComposedType_obj::__alloc( HX_CTX ,HX_("MbsTileset",76,2d,5e,5b));
HXLINE(  28)		::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->setInstantiator( ::Dynamic(new _hx_Closure_0()));
HXLINE(  29)		::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->inherit(::com::stencyl::io::mbs::MbsResource_obj::MBS_RESOURCE);
HXLINE(  31)		::com::stencyl::io::mbs::scene::MbsTileset_obj::across = ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->createField(HX_("across",7f,5f,f8,14),::mbs::core::MbsTypes_obj::INTEGER);
HXLINE(  32)		::com::stencyl::io::mbs::scene::MbsTileset_obj::down = ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->createField(HX_("down",62,f8,6d,42),::mbs::core::MbsTypes_obj::INTEGER);
HXLINE(  33)		::com::stencyl::io::mbs::scene::MbsTileset_obj::readableImages = ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->createField(HX_("readableImages",c8,74,93,cf),::mbs::core::MbsTypes_obj::BOOLEAN);
HXLINE(  34)		::com::stencyl::io::mbs::scene::MbsTileset_obj::tileWidth = ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->createField(HX_("tileWidth",f8,13,be,55),::mbs::core::MbsTypes_obj::INTEGER);
HXLINE(  35)		::com::stencyl::io::mbs::scene::MbsTileset_obj::tileHeight = ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->createField(HX_("tileHeight",b5,dd,e2,66),::mbs::core::MbsTypes_obj::INTEGER);
HXLINE(  36)		::com::stencyl::io::mbs::scene::MbsTileset_obj::tiles = ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET->createField(HX_("tiles",85,fd,34,10),::mbs::core::MbsTypes_obj::LIST);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MbsTileset_obj,initializeType,(void))

 ::mbs::io::MbsList MbsTileset_obj::new_MbsTileset_list(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_630ca2eccc61848a_42_new_MbsTileset_list)
HXDLIN(  42)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::scene::MbsTileset_obj::MBS_TILESET;
HXDLIN(  42)		return  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::scene::MbsTileset_obj::__alloc( HX_CTX ,data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MbsTileset_obj,new_MbsTileset_list,return )


hx::ObjectPtr< MbsTileset_obj > MbsTileset_obj::__new(::Dynamic data) {
	hx::ObjectPtr< MbsTileset_obj > __this = new MbsTileset_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< MbsTileset_obj > MbsTileset_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic data) {
	MbsTileset_obj *__this = (MbsTileset_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsTileset_obj), true, "com.stencyl.io.mbs.scene.MbsTileset"));
	*(void **)__this = MbsTileset_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

MbsTileset_obj::MbsTileset_obj()
{
}

void MbsTileset_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MbsTileset);
	HX_MARK_MEMBER_NAME(_tiles,"_tiles");
	 ::mbs::core::MbsObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MbsTileset_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tiles,"_tiles");
	 ::mbs::core::MbsObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MbsTileset_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { return hx::Val( _tiles ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"getDown") ) { return hx::Val( getDown_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDown") ) { return hx::Val( setDown_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getTiles") ) { return hx::Val( getTiles_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getAcross") ) { return hx::Val( getAcross_dyn() ); }
		if (HX_FIELD_EQ(inName,"setAcross") ) { return hx::Val( setAcross_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMbsType") ) { return hx::Val( getMbsType_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocateNew") ) { return hx::Val( allocateNew_dyn() ); }
		if (HX_FIELD_EQ(inName,"createTiles") ) { return hx::Val( createTiles_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getTileWidth") ) { return hx::Val( getTileWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileWidth") ) { return hx::Val( setTileWidth_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getTileHeight") ) { return hx::Val( getTileHeight_dyn() ); }
		if (HX_FIELD_EQ(inName,"setTileHeight") ) { return hx::Val( setTileHeight_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getReadableImages") ) { return hx::Val( getReadableImages_dyn() ); }
		if (HX_FIELD_EQ(inName,"setReadableImages") ) { return hx::Val( setReadableImages_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MbsTileset_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { outValue = ( down ); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { outValue = ( tiles ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"across") ) { outValue = ( across ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { outValue = ( tileWidth ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { outValue = ( tileHeight ); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MBS_TILESET") ) { outValue = ( MBS_TILESET ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readableImages") ) { outValue = ( readableImages ); return true; }
		if (HX_FIELD_EQ(inName,"initializeType") ) { outValue = initializeType_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"new_MbsTileset_list") ) { outValue = new_MbsTileset_list_dyn(); return true; }
	}
	return false;
}

hx::Val MbsTileset_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_tiles") ) { _tiles=inValue.Cast<  ::mbs::io::MbsList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MbsTileset_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"down") ) { down=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"tiles") ) { tiles=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"across") ) { across=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileWidth") ) { tileWidth=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"tileHeight") ) { tileHeight=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"MBS_TILESET") ) { MBS_TILESET=ioValue.Cast<  ::mbs::core::ComposedType >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"readableImages") ) { readableImages=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
	}
	return false;
}

void MbsTileset_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_tiles","\xc6","\x44","\x1c","\x0c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MbsTileset_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::mbs::io::MbsList*/ ,(int)offsetof(MbsTileset_obj,_tiles),HX_HCSTRING("_tiles","\xc6","\x44","\x1c","\x0c")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo MbsTileset_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsTileset_obj::across,HX_HCSTRING("across","\x7f","\x5f","\xf8","\x14")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsTileset_obj::down,HX_HCSTRING("down","\x62","\xf8","\x6d","\x42")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsTileset_obj::readableImages,HX_HCSTRING("readableImages","\xc8","\x74","\x93","\xcf")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsTileset_obj::tileWidth,HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsTileset_obj::tileHeight,HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsTileset_obj::tiles,HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10")},
	{hx::fsObject /*::mbs::core::ComposedType*/ ,(void *) &MbsTileset_obj::MBS_TILESET,HX_HCSTRING("MBS_TILESET","\xf3","\xe3","\x7d","\xb9")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MbsTileset_obj_sMemberFields[] = {
	HX_HCSTRING("getMbsType","\x62","\x47","\xf5","\xa1"),
	HX_HCSTRING("_tiles","\xc6","\x44","\x1c","\x0c"),
	HX_HCSTRING("allocateNew","\xa3","\x49","\x4d","\xa9"),
	HX_HCSTRING("getAcross","\xb5","\xe8","\x4e","\x91"),
	HX_HCSTRING("setAcross","\xc1","\xd4","\x9f","\x74"),
	HX_HCSTRING("getDown","\x18","\xa8","\xf0","\x14"),
	HX_HCSTRING("setDown","\x24","\x39","\xf2","\x07"),
	HX_HCSTRING("getReadableImages","\xfe","\x23","\x07","\x42"),
	HX_HCSTRING("setReadableImages","\x0a","\xfc","\x74","\x65"),
	HX_HCSTRING("getTileWidth","\x82","\xb0","\x14","\x65"),
	HX_HCSTRING("setTileWidth","\xf6","\xd3","\x0d","\x7a"),
	HX_HCSTRING("getTileHeight","\xeb","\x39","\x55","\xc3"),
	HX_HCSTRING("setTileHeight","\xf7","\x1b","\x5b","\x08"),
	HX_HCSTRING("getTiles","\x0f","\x0d","\x0c","\x70"),
	HX_HCSTRING("createTiles","\xe9","\x34","\xb0","\x39"),
	::String(null()) };

static void MbsTileset_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsTileset_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MbsTileset_obj::across,"across");
	HX_MARK_MEMBER_NAME(MbsTileset_obj::down,"down");
	HX_MARK_MEMBER_NAME(MbsTileset_obj::readableImages,"readableImages");
	HX_MARK_MEMBER_NAME(MbsTileset_obj::tileWidth,"tileWidth");
	HX_MARK_MEMBER_NAME(MbsTileset_obj::tileHeight,"tileHeight");
	HX_MARK_MEMBER_NAME(MbsTileset_obj::tiles,"tiles");
	HX_MARK_MEMBER_NAME(MbsTileset_obj::MBS_TILESET,"MBS_TILESET");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsTileset_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsTileset_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MbsTileset_obj::across,"across");
	HX_VISIT_MEMBER_NAME(MbsTileset_obj::down,"down");
	HX_VISIT_MEMBER_NAME(MbsTileset_obj::readableImages,"readableImages");
	HX_VISIT_MEMBER_NAME(MbsTileset_obj::tileWidth,"tileWidth");
	HX_VISIT_MEMBER_NAME(MbsTileset_obj::tileHeight,"tileHeight");
	HX_VISIT_MEMBER_NAME(MbsTileset_obj::tiles,"tiles");
	HX_VISIT_MEMBER_NAME(MbsTileset_obj::MBS_TILESET,"MBS_TILESET");
};

#endif

hx::Class MbsTileset_obj::__mClass;

static ::String MbsTileset_obj_sStaticFields[] = {
	HX_HCSTRING("across","\x7f","\x5f","\xf8","\x14"),
	HX_HCSTRING("down","\x62","\xf8","\x6d","\x42"),
	HX_HCSTRING("readableImages","\xc8","\x74","\x93","\xcf"),
	HX_HCSTRING("tileWidth","\xf8","\x13","\xbe","\x55"),
	HX_HCSTRING("tileHeight","\xb5","\xdd","\xe2","\x66"),
	HX_HCSTRING("tiles","\x85","\xfd","\x34","\x10"),
	HX_HCSTRING("MBS_TILESET","\xf3","\xe3","\x7d","\xb9"),
	HX_HCSTRING("initializeType","\x2a","\x38","\x98","\x50"),
	HX_HCSTRING("new_MbsTileset_list","\xe8","\x51","\x41","\x1f"),
	::String(null())
};

void MbsTileset_obj::__register()
{
	hx::Object *dummy = new MbsTileset_obj;
	MbsTileset_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.mbs.scene.MbsTileset","\x21","\x6b","\xba","\x80");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MbsTileset_obj::__GetStatic;
	__mClass->mSetStaticField = &MbsTileset_obj::__SetStatic;
	__mClass->mMarkFunc = MbsTileset_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MbsTileset_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsTileset_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsTileset_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsTileset_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsTileset_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsTileset_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace scene
