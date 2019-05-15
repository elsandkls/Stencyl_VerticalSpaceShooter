// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_com_stencyl_io_mbs_game_MbsAtlas
#include <com/stencyl/io/mbs/game/MbsAtlas.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_game_MbsCollisionGroup
#include <com/stencyl/io/mbs/game/MbsCollisionGroup.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_game_MbsCollisionPair
#include <com/stencyl/io/mbs/game/MbsCollisionPair.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_game_MbsCollisionShape
#include <com/stencyl/io/mbs/game/MbsCollisionShape.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_game_MbsGame
#include <com/stencyl/io/mbs/game/MbsGame.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_game_autotile_MbsAutotileFormat
#include <com/stencyl/io/mbs/game/autotile/MbsAutotileFormat.h>
#endif
#ifndef INCLUDED_com_stencyl_io_mbs_snippet_MbsMapElement
#include <com/stencyl/io/mbs/snippet/MbsMapElement.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_361c06764b8ac4b5_60_new,"com.stencyl.io.mbs.game.MbsGame","new",0x9a45f2af,"com.stencyl.io.mbs.game.MbsGame.new","com/stencyl/io/mbs/game/MbsGame.hx",60,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_49_getMbsType,"com.stencyl.io.mbs.game.MbsGame","getMbsType",0x63fc9cf3,"com.stencyl.io.mbs.game.MbsGame.getMbsType","com/stencyl/io/mbs/game/MbsGame.hx",49,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_72_allocateNew,"com.stencyl.io.mbs.game.MbsGame","allocateNew",0xadb0d2f2,"com.stencyl.io.mbs.game.MbsGame.allocateNew","com/stencyl/io/mbs/game/MbsGame.hx",72,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_76_getShapes,"com.stencyl.io.mbs.game.MbsGame","getShapes",0xe3d7aaf7,"com.stencyl.io.mbs.game.MbsGame.getShapes","com/stencyl/io/mbs/game/MbsGame.hx",76,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_82_createShapes,"com.stencyl.io.mbs.game.MbsGame","createShapes",0x1233b61f,"com.stencyl.io.mbs.game.MbsGame.createShapes","com/stencyl/io/mbs/game/MbsGame.hx",82,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_89_getAtlases,"com.stencyl.io.mbs.game.MbsGame","getAtlases",0xa42caa14,"com.stencyl.io.mbs.game.MbsGame.getAtlases","com/stencyl/io/mbs/game/MbsGame.hx",89,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_95_createAtlases,"com.stencyl.io.mbs.game.MbsGame","createAtlases",0x065a61ec,"com.stencyl.io.mbs.game.MbsGame.createAtlases","com/stencyl/io/mbs/game/MbsGame.hx",95,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_102_getAutotileFormats,"com.stencyl.io.mbs.game.MbsGame","getAutotileFormats",0xfec1775a,"com.stencyl.io.mbs.game.MbsGame.getAutotileFormats","com/stencyl/io/mbs/game/MbsGame.hx",102,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_108_createAutotileFormats,"com.stencyl.io.mbs.game.MbsGame","createAutotileFormats",0x63aec732,"com.stencyl.io.mbs.game.MbsGame.createAutotileFormats","com/stencyl/io/mbs/game/MbsGame.hx",108,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_115_getGroups,"com.stencyl.io.mbs.game.MbsGame","getGroups",0xe2d5f519,"com.stencyl.io.mbs.game.MbsGame.getGroups","com/stencyl/io/mbs/game/MbsGame.hx",115,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_121_createGroups,"com.stencyl.io.mbs.game.MbsGame","createGroups",0x11320041,"com.stencyl.io.mbs.game.MbsGame.createGroups","com/stencyl/io/mbs/game/MbsGame.hx",121,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_128_getCgroups,"com.stencyl.io.mbs.game.MbsGame","getCgroups",0x425dec92,"com.stencyl.io.mbs.game.MbsGame.getCgroups","com/stencyl/io/mbs/game/MbsGame.hx",128,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_134_createCgroups,"com.stencyl.io.mbs.game.MbsGame","createCgroups",0xa48ba46a,"com.stencyl.io.mbs.game.MbsGame.createCgroups","com/stencyl/io/mbs/game/MbsGame.hx",134,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_141_getGameAttributes,"com.stencyl.io.mbs.game.MbsGame","getGameAttributes",0x5ad4612e,"com.stencyl.io.mbs.game.MbsGame.getGameAttributes","com/stencyl/io/mbs/game/MbsGame.hx",141,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_147_createGameAttributes,"com.stencyl.io.mbs.game.MbsGame","createGameAttributes",0x9a6bd456,"com.stencyl.io.mbs.game.MbsGame.createGameAttributes","com/stencyl/io/mbs/game/MbsGame.hx",147,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_31_initializeType,"com.stencyl.io.mbs.game.MbsGame","initializeType",0xae882a3b,"com.stencyl.io.mbs.game.MbsGame.initializeType","com/stencyl/io/mbs/game/MbsGame.hx",31,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_28_initializeType,"com.stencyl.io.mbs.game.MbsGame","initializeType",0xae882a3b,"com.stencyl.io.mbs.game.MbsGame.initializeType","com/stencyl/io/mbs/game/MbsGame.hx",28,0xe5f02b22)
HX_LOCAL_STACK_FRAME(_hx_pos_361c06764b8ac4b5_44_new_MbsGame_list,"com.stencyl.io.mbs.game.MbsGame","new_MbsGame_list",0x2a06d69d,"com.stencyl.io.mbs.game.MbsGame.new_MbsGame_list","com/stencyl/io/mbs/game/MbsGame.hx",44,0xe5f02b22)
namespace com{
namespace stencyl{
namespace io{
namespace mbs{
namespace game{

void MbsGame_obj::__construct(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_361c06764b8ac4b5_60_new)
HXLINE(  61)		super::__construct(data);
HXLINE(  62)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::game::MbsCollisionShape_obj::MBS_COLLISION_SHAPE;
HXDLIN(  62)		this->_shapes =  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::game::MbsCollisionShape_obj::__alloc( HX_CTX ,data));
HXLINE(  63)		 ::mbs::core::ComposedType _hx_tmp1 = ::com::stencyl::io::mbs::game::MbsAtlas_obj::MBS_ATLAS;
HXDLIN(  63)		this->_atlases =  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp1, ::com::stencyl::io::mbs::game::MbsAtlas_obj::__alloc( HX_CTX ,data));
HXLINE(  64)		 ::mbs::core::ComposedType _hx_tmp2 = ::com::stencyl::io::mbs::game::autotile::MbsAutotileFormat_obj::MBS_AUTOTILE_FORMAT;
HXDLIN(  64)		this->_autotileFormats =  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp2, ::com::stencyl::io::mbs::game::autotile::MbsAutotileFormat_obj::__alloc( HX_CTX ,data));
HXLINE(  65)		 ::mbs::core::ComposedType _hx_tmp3 = ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::MBS_COLLISION_GROUP;
HXDLIN(  65)		this->_groups =  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp3, ::com::stencyl::io::mbs::game::MbsCollisionGroup_obj::__alloc( HX_CTX ,data));
HXLINE(  66)		 ::mbs::core::ComposedType _hx_tmp4 = ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::MBS_COLLISION_PAIR;
HXDLIN(  66)		this->_cgroups =  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp4, ::com::stencyl::io::mbs::game::MbsCollisionPair_obj::__alloc( HX_CTX ,data));
HXLINE(  67)		 ::mbs::core::ComposedType _hx_tmp5 = ::com::stencyl::io::mbs::snippet::MbsMapElement_obj::MBS_MAP_ELEMENT;
HXDLIN(  67)		this->_gameAttributes =  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp5, ::com::stencyl::io::mbs::snippet::MbsMapElement_obj::__alloc( HX_CTX ,data));
            	}

Dynamic MbsGame_obj::__CreateEmpty() { return new MbsGame_obj; }

void *MbsGame_obj::_hx_vtable = 0;

Dynamic MbsGame_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MbsGame_obj > _hx_result = new MbsGame_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool MbsGame_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x05ad9bf9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x05ad9bf9;
	} else {
		return inClassId==(int)0x17b72d64;
	}
}

 ::mbs::core::MbsType MbsGame_obj::getMbsType(){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_49_getMbsType)
HXDLIN(  49)		return ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME;
            	}


void MbsGame_obj::allocateNew(){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_72_allocateNew)
HXDLIN(  72)		::Dynamic _hx_tmp = this->data;
HXDLIN(  72)		this->setAddress(::mbs::io::MbsIO_obj::allocate(_hx_tmp,::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME->getSize()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsGame_obj,allocateNew,(void))

 ::mbs::io::MbsList MbsGame_obj::getShapes(){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_76_getShapes)
HXLINE(  77)		 ::mbs::io::MbsList _hx_tmp = this->_shapes;
HXDLIN(  77)		::Dynamic _hx_tmp1 = this->data;
HXDLIN(  77)		_hx_tmp->setAddress(::mbs::io::MbsIO_obj::readInt(_hx_tmp1,(this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::shapes->address)));
HXLINE(  78)		return this->_shapes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsGame_obj,getShapes,return )

 ::mbs::io::MbsList MbsGame_obj::createShapes(int _length){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_82_createShapes)
HXLINE(  83)		this->_shapes->allocateNew(_length);
HXLINE(  84)		::Dynamic _hx_tmp = this->data;
HXDLIN(  84)		int _hx_tmp1 = (this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::shapes->address);
HXDLIN(  84)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,_hx_tmp1,this->_shapes->getAddress());
HXLINE(  85)		return this->_shapes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsGame_obj,createShapes,return )

 ::mbs::io::MbsList MbsGame_obj::getAtlases(){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_89_getAtlases)
HXLINE(  90)		 ::mbs::io::MbsList _hx_tmp = this->_atlases;
HXDLIN(  90)		::Dynamic _hx_tmp1 = this->data;
HXDLIN(  90)		_hx_tmp->setAddress(::mbs::io::MbsIO_obj::readInt(_hx_tmp1,(this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::atlases->address)));
HXLINE(  91)		return this->_atlases;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsGame_obj,getAtlases,return )

 ::mbs::io::MbsList MbsGame_obj::createAtlases(int _length){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_95_createAtlases)
HXLINE(  96)		this->_atlases->allocateNew(_length);
HXLINE(  97)		::Dynamic _hx_tmp = this->data;
HXDLIN(  97)		int _hx_tmp1 = (this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::atlases->address);
HXDLIN(  97)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,_hx_tmp1,this->_atlases->getAddress());
HXLINE(  98)		return this->_atlases;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsGame_obj,createAtlases,return )

 ::mbs::io::MbsList MbsGame_obj::getAutotileFormats(){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_102_getAutotileFormats)
HXLINE( 103)		 ::mbs::io::MbsList _hx_tmp = this->_autotileFormats;
HXDLIN( 103)		::Dynamic _hx_tmp1 = this->data;
HXDLIN( 103)		_hx_tmp->setAddress(::mbs::io::MbsIO_obj::readInt(_hx_tmp1,(this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::autotileFormats->address)));
HXLINE( 104)		return this->_autotileFormats;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsGame_obj,getAutotileFormats,return )

 ::mbs::io::MbsList MbsGame_obj::createAutotileFormats(int _length){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_108_createAutotileFormats)
HXLINE( 109)		this->_autotileFormats->allocateNew(_length);
HXLINE( 110)		::Dynamic _hx_tmp = this->data;
HXDLIN( 110)		int _hx_tmp1 = (this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::autotileFormats->address);
HXDLIN( 110)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,_hx_tmp1,this->_autotileFormats->getAddress());
HXLINE( 111)		return this->_autotileFormats;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsGame_obj,createAutotileFormats,return )

 ::mbs::io::MbsList MbsGame_obj::getGroups(){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_115_getGroups)
HXLINE( 116)		 ::mbs::io::MbsList _hx_tmp = this->_groups;
HXDLIN( 116)		::Dynamic _hx_tmp1 = this->data;
HXDLIN( 116)		_hx_tmp->setAddress(::mbs::io::MbsIO_obj::readInt(_hx_tmp1,(this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::groups->address)));
HXLINE( 117)		return this->_groups;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsGame_obj,getGroups,return )

 ::mbs::io::MbsList MbsGame_obj::createGroups(int _length){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_121_createGroups)
HXLINE( 122)		this->_groups->allocateNew(_length);
HXLINE( 123)		::Dynamic _hx_tmp = this->data;
HXDLIN( 123)		int _hx_tmp1 = (this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::groups->address);
HXDLIN( 123)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,_hx_tmp1,this->_groups->getAddress());
HXLINE( 124)		return this->_groups;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsGame_obj,createGroups,return )

 ::mbs::io::MbsList MbsGame_obj::getCgroups(){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_128_getCgroups)
HXLINE( 129)		 ::mbs::io::MbsList _hx_tmp = this->_cgroups;
HXDLIN( 129)		::Dynamic _hx_tmp1 = this->data;
HXDLIN( 129)		_hx_tmp->setAddress(::mbs::io::MbsIO_obj::readInt(_hx_tmp1,(this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::cgroups->address)));
HXLINE( 130)		return this->_cgroups;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsGame_obj,getCgroups,return )

 ::mbs::io::MbsList MbsGame_obj::createCgroups(int _length){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_134_createCgroups)
HXLINE( 135)		this->_cgroups->allocateNew(_length);
HXLINE( 136)		::Dynamic _hx_tmp = this->data;
HXDLIN( 136)		int _hx_tmp1 = (this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::cgroups->address);
HXDLIN( 136)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,_hx_tmp1,this->_cgroups->getAddress());
HXLINE( 137)		return this->_cgroups;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsGame_obj,createCgroups,return )

 ::mbs::io::MbsList MbsGame_obj::getGameAttributes(){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_141_getGameAttributes)
HXLINE( 142)		 ::mbs::io::MbsList _hx_tmp = this->_gameAttributes;
HXDLIN( 142)		::Dynamic _hx_tmp1 = this->data;
HXDLIN( 142)		_hx_tmp->setAddress(::mbs::io::MbsIO_obj::readInt(_hx_tmp1,(this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::gameAttributes->address)));
HXLINE( 143)		return this->_gameAttributes;
            	}


HX_DEFINE_DYNAMIC_FUNC0(MbsGame_obj,getGameAttributes,return )

 ::mbs::io::MbsList MbsGame_obj::createGameAttributes(int _length){
            	HX_STACKFRAME(&_hx_pos_361c06764b8ac4b5_147_createGameAttributes)
HXLINE( 148)		this->_gameAttributes->allocateNew(_length);
HXLINE( 149)		::Dynamic _hx_tmp = this->data;
HXDLIN( 149)		int _hx_tmp1 = (this->address + ::com::stencyl::io::mbs::game::MbsGame_obj::gameAttributes->address);
HXDLIN( 149)		::mbs::io::MbsIO_obj::writeInt(_hx_tmp,_hx_tmp1,this->_gameAttributes->getAddress());
HXLINE( 150)		return this->_gameAttributes;
            	}


HX_DEFINE_DYNAMIC_FUNC1(MbsGame_obj,createGameAttributes,return )

 ::mbs::core::MbsField MbsGame_obj::shapes;

 ::mbs::core::MbsField MbsGame_obj::atlases;

 ::mbs::core::MbsField MbsGame_obj::autotileFormats;

 ::mbs::core::MbsField MbsGame_obj::groups;

 ::mbs::core::MbsField MbsGame_obj::cgroups;

 ::mbs::core::MbsField MbsGame_obj::gameAttributes;

 ::mbs::core::ComposedType MbsGame_obj::MBS_GAME;

void MbsGame_obj::initializeType(){
            		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_hx_Closure_0) HXARGC(1)
            		 ::mbs::core::MbsObject _hx_run(::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_361c06764b8ac4b5_31_initializeType)
HXLINE(  31)			return  ::com::stencyl::io::mbs::game::MbsGame_obj::__alloc( HX_CTX ,data);
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_361c06764b8ac4b5_28_initializeType)
HXLINE(  29)		if (hx::IsNotNull( ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME )) {
HXLINE(  29)			return;
            		}
HXLINE(  30)		::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME =  ::mbs::core::ComposedType_obj::__alloc( HX_CTX ,HX_("MbsGame",70,ea,3a,17));
HXLINE(  31)		::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME->setInstantiator( ::Dynamic(new _hx_Closure_0()));
HXLINE(  33)		::com::stencyl::io::mbs::game::MbsGame_obj::shapes = ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME->createField(HX_("shapes",32,da,29,1d),::mbs::core::MbsTypes_obj::LIST);
HXLINE(  34)		::com::stencyl::io::mbs::game::MbsGame_obj::atlases = ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME->createField(HX_("atlases",79,ce,c3,92),::mbs::core::MbsTypes_obj::LIST);
HXLINE(  35)		::com::stencyl::io::mbs::game::MbsGame_obj::autotileFormats = ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME->createField(HX_("autotileFormats",bf,08,5b,08),::mbs::core::MbsTypes_obj::LIST);
HXLINE(  36)		::com::stencyl::io::mbs::game::MbsGame_obj::groups = ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME->createField(HX_("groups",54,24,28,1c),::mbs::core::MbsTypes_obj::LIST);
HXLINE(  37)		::com::stencyl::io::mbs::game::MbsGame_obj::cgroups = ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME->createField(HX_("cgroups",f7,10,f5,30),::mbs::core::MbsTypes_obj::LIST);
HXLINE(  38)		::com::stencyl::io::mbs::game::MbsGame_obj::gameAttributes = ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME->createField(HX_("gameAttributes",69,c3,10,26),::mbs::core::MbsTypes_obj::LIST);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(MbsGame_obj,initializeType,(void))

 ::mbs::io::MbsList MbsGame_obj::new_MbsGame_list(::Dynamic data){
            	HX_GC_STACKFRAME(&_hx_pos_361c06764b8ac4b5_44_new_MbsGame_list)
HXDLIN(  44)		 ::mbs::core::ComposedType _hx_tmp = ::com::stencyl::io::mbs::game::MbsGame_obj::MBS_GAME;
HXDLIN(  44)		return  ::mbs::io::MbsList_obj::__alloc( HX_CTX ,data,_hx_tmp, ::com::stencyl::io::mbs::game::MbsGame_obj::__alloc( HX_CTX ,data));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(MbsGame_obj,new_MbsGame_list,return )


hx::ObjectPtr< MbsGame_obj > MbsGame_obj::__new(::Dynamic data) {
	hx::ObjectPtr< MbsGame_obj > __this = new MbsGame_obj();
	__this->__construct(data);
	return __this;
}

hx::ObjectPtr< MbsGame_obj > MbsGame_obj::__alloc(hx::Ctx *_hx_ctx,::Dynamic data) {
	MbsGame_obj *__this = (MbsGame_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MbsGame_obj), true, "com.stencyl.io.mbs.game.MbsGame"));
	*(void **)__this = MbsGame_obj::_hx_vtable;
	__this->__construct(data);
	return __this;
}

MbsGame_obj::MbsGame_obj()
{
}

void MbsGame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MbsGame);
	HX_MARK_MEMBER_NAME(_shapes,"_shapes");
	HX_MARK_MEMBER_NAME(_atlases,"_atlases");
	HX_MARK_MEMBER_NAME(_autotileFormats,"_autotileFormats");
	HX_MARK_MEMBER_NAME(_groups,"_groups");
	HX_MARK_MEMBER_NAME(_cgroups,"_cgroups");
	HX_MARK_MEMBER_NAME(_gameAttributes,"_gameAttributes");
	 ::mbs::core::MbsObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MbsGame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_shapes,"_shapes");
	HX_VISIT_MEMBER_NAME(_atlases,"_atlases");
	HX_VISIT_MEMBER_NAME(_autotileFormats,"_autotileFormats");
	HX_VISIT_MEMBER_NAME(_groups,"_groups");
	HX_VISIT_MEMBER_NAME(_cgroups,"_cgroups");
	HX_VISIT_MEMBER_NAME(_gameAttributes,"_gameAttributes");
	 ::mbs::core::MbsObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MbsGame_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_shapes") ) { return hx::Val( _shapes ); }
		if (HX_FIELD_EQ(inName,"_groups") ) { return hx::Val( _groups ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_atlases") ) { return hx::Val( _atlases ); }
		if (HX_FIELD_EQ(inName,"_cgroups") ) { return hx::Val( _cgroups ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getShapes") ) { return hx::Val( getShapes_dyn() ); }
		if (HX_FIELD_EQ(inName,"getGroups") ) { return hx::Val( getGroups_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getMbsType") ) { return hx::Val( getMbsType_dyn() ); }
		if (HX_FIELD_EQ(inName,"getAtlases") ) { return hx::Val( getAtlases_dyn() ); }
		if (HX_FIELD_EQ(inName,"getCgroups") ) { return hx::Val( getCgroups_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"allocateNew") ) { return hx::Val( allocateNew_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createShapes") ) { return hx::Val( createShapes_dyn() ); }
		if (HX_FIELD_EQ(inName,"createGroups") ) { return hx::Val( createGroups_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"createAtlases") ) { return hx::Val( createAtlases_dyn() ); }
		if (HX_FIELD_EQ(inName,"createCgroups") ) { return hx::Val( createCgroups_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_gameAttributes") ) { return hx::Val( _gameAttributes ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autotileFormats") ) { return hx::Val( _autotileFormats ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getGameAttributes") ) { return hx::Val( getGameAttributes_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getAutotileFormats") ) { return hx::Val( getAutotileFormats_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"createGameAttributes") ) { return hx::Val( createGameAttributes_dyn() ); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"createAutotileFormats") ) { return hx::Val( createAutotileFormats_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool MbsGame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { outValue = ( shapes ); return true; }
		if (HX_FIELD_EQ(inName,"groups") ) { outValue = ( groups ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"atlases") ) { outValue = ( atlases ); return true; }
		if (HX_FIELD_EQ(inName,"cgroups") ) { outValue = ( cgroups ); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MBS_GAME") ) { outValue = ( MBS_GAME ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gameAttributes") ) { outValue = ( gameAttributes ); return true; }
		if (HX_FIELD_EQ(inName,"initializeType") ) { outValue = initializeType_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"autotileFormats") ) { outValue = ( autotileFormats ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"new_MbsGame_list") ) { outValue = new_MbsGame_list_dyn(); return true; }
	}
	return false;
}

hx::Val MbsGame_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_shapes") ) { _shapes=inValue.Cast<  ::mbs::io::MbsList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_groups") ) { _groups=inValue.Cast<  ::mbs::io::MbsList >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_atlases") ) { _atlases=inValue.Cast<  ::mbs::io::MbsList >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_cgroups") ) { _cgroups=inValue.Cast<  ::mbs::io::MbsList >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_gameAttributes") ) { _gameAttributes=inValue.Cast<  ::mbs::io::MbsList >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_autotileFormats") ) { _autotileFormats=inValue.Cast<  ::mbs::io::MbsList >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool MbsGame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"shapes") ) { shapes=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		if (HX_FIELD_EQ(inName,"groups") ) { groups=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"atlases") ) { atlases=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		if (HX_FIELD_EQ(inName,"cgroups") ) { cgroups=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"MBS_GAME") ) { MBS_GAME=ioValue.Cast<  ::mbs::core::ComposedType >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"gameAttributes") ) { gameAttributes=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"autotileFormats") ) { autotileFormats=ioValue.Cast<  ::mbs::core::MbsField >(); return true; }
	}
	return false;
}

void MbsGame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_shapes","\xd1","\xeb","\xa0","\x8b"));
	outFields->push(HX_HCSTRING("_atlases","\xfa","\x27","\x7c","\xcc"));
	outFields->push(HX_HCSTRING("_autotileFormats","\x40","\x4b","\x3a","\xf3"));
	outFields->push(HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a"));
	outFields->push(HX_HCSTRING("_cgroups","\x78","\x6a","\xad","\x6a"));
	outFields->push(HX_HCSTRING("_gameAttributes","\x08","\x0c","\x71","\x6f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MbsGame_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::mbs::io::MbsList*/ ,(int)offsetof(MbsGame_obj,_shapes),HX_HCSTRING("_shapes","\xd1","\xeb","\xa0","\x8b")},
	{hx::fsObject /*::mbs::io::MbsList*/ ,(int)offsetof(MbsGame_obj,_atlases),HX_HCSTRING("_atlases","\xfa","\x27","\x7c","\xcc")},
	{hx::fsObject /*::mbs::io::MbsList*/ ,(int)offsetof(MbsGame_obj,_autotileFormats),HX_HCSTRING("_autotileFormats","\x40","\x4b","\x3a","\xf3")},
	{hx::fsObject /*::mbs::io::MbsList*/ ,(int)offsetof(MbsGame_obj,_groups),HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a")},
	{hx::fsObject /*::mbs::io::MbsList*/ ,(int)offsetof(MbsGame_obj,_cgroups),HX_HCSTRING("_cgroups","\x78","\x6a","\xad","\x6a")},
	{hx::fsObject /*::mbs::io::MbsList*/ ,(int)offsetof(MbsGame_obj,_gameAttributes),HX_HCSTRING("_gameAttributes","\x08","\x0c","\x71","\x6f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo MbsGame_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsGame_obj::shapes,HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsGame_obj::atlases,HX_HCSTRING("atlases","\x79","\xce","\xc3","\x92")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsGame_obj::autotileFormats,HX_HCSTRING("autotileFormats","\xbf","\x08","\x5b","\x08")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsGame_obj::groups,HX_HCSTRING("groups","\x54","\x24","\x28","\x1c")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsGame_obj::cgroups,HX_HCSTRING("cgroups","\xf7","\x10","\xf5","\x30")},
	{hx::fsObject /*::mbs::core::MbsField*/ ,(void *) &MbsGame_obj::gameAttributes,HX_HCSTRING("gameAttributes","\x69","\xc3","\x10","\x26")},
	{hx::fsObject /*::mbs::core::ComposedType*/ ,(void *) &MbsGame_obj::MBS_GAME,HX_HCSTRING("MBS_GAME","\xb3","\xbb","\x84","\xfe")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String MbsGame_obj_sMemberFields[] = {
	HX_HCSTRING("getMbsType","\x62","\x47","\xf5","\xa1"),
	HX_HCSTRING("_shapes","\xd1","\xeb","\xa0","\x8b"),
	HX_HCSTRING("_atlases","\xfa","\x27","\x7c","\xcc"),
	HX_HCSTRING("_autotileFormats","\x40","\x4b","\x3a","\xf3"),
	HX_HCSTRING("_groups","\xf3","\x35","\x9f","\x8a"),
	HX_HCSTRING("_cgroups","\x78","\x6a","\xad","\x6a"),
	HX_HCSTRING("_gameAttributes","\x08","\x0c","\x71","\x6f"),
	HX_HCSTRING("allocateNew","\xa3","\x49","\x4d","\xa9"),
	HX_HCSTRING("getShapes","\x68","\x63","\x80","\x99"),
	HX_HCSTRING("createShapes","\x4e","\x1a","\x7f","\x3f"),
	HX_HCSTRING("getAtlases","\x83","\x54","\x25","\xe2"),
	HX_HCSTRING("createAtlases","\xdd","\xa6","\x06","\x7b"),
	HX_HCSTRING("getAutotileFormats","\xc9","\xa8","\x20","\xbb"),
	HX_HCSTRING("createAutotileFormats","\x23","\xe5","\x82","\x19"),
	HX_HCSTRING("getGroups","\x8a","\xad","\x7e","\x98"),
	HX_HCSTRING("createGroups","\x70","\x64","\x7d","\x3e"),
	HX_HCSTRING("getCgroups","\x01","\x97","\x56","\x80"),
	HX_HCSTRING("createCgroups","\x5b","\xe9","\x37","\x19"),
	HX_HCSTRING("getGameAttributes","\x9f","\x72","\x84","\x98"),
	HX_HCSTRING("createGameAttributes","\x85","\x7f","\x0d","\x92"),
	::String(null()) };

static void MbsGame_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MbsGame_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(MbsGame_obj::shapes,"shapes");
	HX_MARK_MEMBER_NAME(MbsGame_obj::atlases,"atlases");
	HX_MARK_MEMBER_NAME(MbsGame_obj::autotileFormats,"autotileFormats");
	HX_MARK_MEMBER_NAME(MbsGame_obj::groups,"groups");
	HX_MARK_MEMBER_NAME(MbsGame_obj::cgroups,"cgroups");
	HX_MARK_MEMBER_NAME(MbsGame_obj::gameAttributes,"gameAttributes");
	HX_MARK_MEMBER_NAME(MbsGame_obj::MBS_GAME,"MBS_GAME");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MbsGame_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MbsGame_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(MbsGame_obj::shapes,"shapes");
	HX_VISIT_MEMBER_NAME(MbsGame_obj::atlases,"atlases");
	HX_VISIT_MEMBER_NAME(MbsGame_obj::autotileFormats,"autotileFormats");
	HX_VISIT_MEMBER_NAME(MbsGame_obj::groups,"groups");
	HX_VISIT_MEMBER_NAME(MbsGame_obj::cgroups,"cgroups");
	HX_VISIT_MEMBER_NAME(MbsGame_obj::gameAttributes,"gameAttributes");
	HX_VISIT_MEMBER_NAME(MbsGame_obj::MBS_GAME,"MBS_GAME");
};

#endif

hx::Class MbsGame_obj::__mClass;

static ::String MbsGame_obj_sStaticFields[] = {
	HX_HCSTRING("shapes","\x32","\xda","\x29","\x1d"),
	HX_HCSTRING("atlases","\x79","\xce","\xc3","\x92"),
	HX_HCSTRING("autotileFormats","\xbf","\x08","\x5b","\x08"),
	HX_HCSTRING("groups","\x54","\x24","\x28","\x1c"),
	HX_HCSTRING("cgroups","\xf7","\x10","\xf5","\x30"),
	HX_HCSTRING("gameAttributes","\x69","\xc3","\x10","\x26"),
	HX_HCSTRING("MBS_GAME","\xb3","\xbb","\x84","\xfe"),
	HX_HCSTRING("initializeType","\x2a","\x38","\x98","\x50"),
	HX_HCSTRING("new_MbsGame_list","\x4c","\x7e","\xa9","\x7a"),
	::String(null())
};

void MbsGame_obj::__register()
{
	hx::Object *dummy = new MbsGame_obj;
	MbsGame_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.stencyl.io.mbs.game.MbsGame","\x3d","\x6f","\x35","\xa3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &MbsGame_obj::__GetStatic;
	__mClass->mSetStaticField = &MbsGame_obj::__SetStatic;
	__mClass->mMarkFunc = MbsGame_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(MbsGame_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MbsGame_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MbsGame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MbsGame_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MbsGame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MbsGame_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace stencyl
} // end namespace io
} // end namespace mbs
} // end namespace game