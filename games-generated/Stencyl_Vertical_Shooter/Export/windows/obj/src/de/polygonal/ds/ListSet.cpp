// Generated by Haxe 3.4.7
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Cloneable
#include <de/polygonal/ds/Cloneable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Collection
#include <de/polygonal/ds/Collection.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_HashKey
#include <de/polygonal/ds/HashKey.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Hashable
#include <de/polygonal/ds/Hashable.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_ListSet
#include <de/polygonal/ds/ListSet.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_ListSetIterator
#include <de/polygonal/ds/ListSetIterator.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_Set
#include <de/polygonal/ds/Set.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_tools_GrowthRate
#include <de/polygonal/ds/tools/GrowthRate.h>
#endif
#ifndef INCLUDED_de_polygonal_ds_tools_NativeArrayTools
#include <de/polygonal/ds/tools/NativeArrayTools.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_052a1ee7766b44f7_49_new,"de.polygonal.ds.ListSet","new",0xd14d524d,"de.polygonal.ds.ListSet.new","de/polygonal/ds/ListSet.hx",49,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_101_reserve,"de.polygonal.ds.ListSet","reserve",0xc90dfaa9,"de.polygonal.ds.ListSet.reserve","de/polygonal/ds/ListSet.hx",101,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_117_pack,"de.polygonal.ds.ListSet","pack",0x53aa044c,"de.polygonal.ds.ListSet.pack","de/polygonal/ds/ListSet.hx",117,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_135_iter,"de.polygonal.ds.ListSet","iter",0x4f17f28b,"de.polygonal.ds.ListSet.iter","de/polygonal/ds/ListSet.hx",135,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_147_toString,"de.polygonal.ds.ListSet","toString",0x0cf6339f,"de.polygonal.ds.ListSet.toString","de/polygonal/ds/ListSet.hx",147,0x3feed482)
static const ::String _hx_array_data_4cb127db_9[] = {
	HX_(" ]",3d,1c,00,00),
};
static const ::String _hx_array_data_4cb127db_10[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_4cb127db_11[] = {
	HX_("  ",00,1c,00,00),
};
static const ::String _hx_array_data_4cb127db_12[] = {
	HX_("\n",0a,00,00,00),
};
static const ::String _hx_array_data_4cb127db_13[] = {
	HX_("]",5d,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_173_has,"de.polygonal.ds.ListSet","has",0xd148c147,"de.polygonal.ds.ListSet.has","de/polygonal/ds/ListSet.hx",173,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_185_set,"de.polygonal.ds.ListSet","set",0xd1511d8f,"de.polygonal.ds.ListSet.set","de/polygonal/ds/ListSet.hx",185,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_203_unset,"de.polygonal.ds.ListSet","unset",0xcabe8a16,"de.polygonal.ds.ListSet.unset","de/polygonal/ds/ListSet.hx",203,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_215_merge,"de.polygonal.ds.ListSet","merge",0x299639e5,"de.polygonal.ds.ListSet.merge","de/polygonal/ds/ListSet.hx",215,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_245_get_size,"de.polygonal.ds.ListSet","get_size",0xa095bf3d,"de.polygonal.ds.ListSet.get_size","de/polygonal/ds/ListSet.hx",245,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_254_free,"de.polygonal.ds.ListSet","free",0x4d1aca1f,"de.polygonal.ds.ListSet.free","de/polygonal/ds/ListSet.hx",254,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_269_contains,"de.polygonal.ds.ListSet","contains",0x0102bd12,"de.polygonal.ds.ListSet.contains","de/polygonal/ds/ListSet.hx",269,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_277_remove,"de.polygonal.ds.ListSet","remove",0x365d4c77,"de.polygonal.ds.ListSet.remove","de/polygonal/ds/ListSet.hx",277,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_293_clear,"de.polygonal.ds.ListSet","clear",0x6c2b08ba,"de.polygonal.ds.ListSet.clear","de/polygonal/ds/ListSet.hx",293,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_307_iterator,"de.polygonal.ds.ListSet","iterator",0x6821ace1,"de.polygonal.ds.ListSet.iterator","de/polygonal/ds/ListSet.hx",307,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_324_isEmpty,"de.polygonal.ds.ListSet","isEmpty",0x74a55ab0,"de.polygonal.ds.ListSet.isEmpty","de/polygonal/ds/ListSet.hx",324,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_332_toArray,"de.polygonal.ds.ListSet","toArray",0x5a59368b,"de.polygonal.ds.ListSet.toArray","de/polygonal/ds/ListSet.hx",332,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_343_clone,"de.polygonal.ds.ListSet","clone",0x6c32aa8a,"de.polygonal.ds.ListSet.clone","de/polygonal/ds/ListSet.hx",343,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_373_grow,"de.polygonal.ds.ListSet","grow",0x4dc40986,"de.polygonal.ds.ListSet.grow","de/polygonal/ds/ListSet.hx",373,0x3feed482)
HX_LOCAL_STACK_FRAME(_hx_pos_052a1ee7766b44f7_379_resizeContainer,"de.polygonal.ds.ListSet","resizeContainer",0x90fd4e1a,"de.polygonal.ds.ListSet.resizeContainer","de/polygonal/ds/ListSet.hx",379,0x3feed482)
namespace de{
namespace polygonal{
namespace ds{

void ListSet_obj::__construct( ::Dynamic __o_initialCapacity,::cpp::VirtualArray source){
 ::Dynamic initialCapacity = __o_initialCapacity.Default(16);
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_49_new)
HXLINE(  83)		this->mIterator = null();
HXLINE(  82)		this->mSize = (int)0;
HXLINE(  78)		this->reuseIterator = false;
HXLINE(  69)		this->growthRate = (int)-2;
HXLINE(  56)		this->key = ::de::polygonal::ds::HashKey_obj::next();
HXLINE(  87)		int y = initialCapacity;
HXDLIN(  87)		int _hx_tmp;
HXDLIN(  87)		if (((int)1 > y)) {
HXLINE(  87)			_hx_tmp = (int)1;
            		}
            		else {
HXLINE(  87)			_hx_tmp = y;
            		}
HXDLIN(  87)		this->mInitialCapacity = _hx_tmp;
HXLINE(  88)		this->capacity = this->mInitialCapacity;
HXLINE(  89)		if (hx::IsNotNull( source )) {
HXLINE(  89)			this->capacity = source->get_length();
            		}
HXLINE(  90)		int len = this->capacity;
HXDLIN(  90)		::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXDLIN(  90)		_hx_array_set_size_exact(a,len);
HXDLIN(  90)		this->mData = a;
HXLINE(  91)		if (hx::IsNotNull( source )) {
HXLINE(  91)			int _g = (int)0;
HXDLIN(  91)			while((_g < source->get_length())){
HXLINE(  91)				 ::Dynamic i = source->__get(_g);
HXDLIN(  91)				_g = (_g + (int)1);
HXDLIN(  91)				this->set(i);
            			}
            		}
            	}

Dynamic ListSet_obj::__CreateEmpty() { return new ListSet_obj; }

void *ListSet_obj::_hx_vtable = 0;

Dynamic ListSet_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ListSet_obj > _hx_result = new ListSet_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool ListSet_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x70937711;
}

static ::de::polygonal::ds::Collection_obj _hx_de_polygonal_ds_ListSet__hx_de_polygonal_ds_Collection= {
	( int (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::get_size,
	( void (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::free,
	( bool (hx::Object::*)( ::Dynamic))&::de::polygonal::ds::ListSet_obj::contains,
	( bool (hx::Object::*)( ::Dynamic))&::de::polygonal::ds::ListSet_obj::remove,
	( void (hx::Object::*)(hx::Null< bool > ))&::de::polygonal::ds::ListSet_obj::clear,
	( ::Dynamic (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::iterator,
	( bool (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::isEmpty,
	( ::cpp::VirtualArray (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::toArray,
	( ::Dynamic (hx::Object::*)(hx::Null< bool > , ::Dynamic))&::de::polygonal::ds::ListSet_obj::clone,
};

static ::de::polygonal::ds::Set_obj _hx_de_polygonal_ds_ListSet__hx_de_polygonal_ds_Set= {
	( int (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::get_size,
	( void (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::free,
	( bool (hx::Object::*)( ::Dynamic))&::de::polygonal::ds::ListSet_obj::contains,
	( bool (hx::Object::*)( ::Dynamic))&::de::polygonal::ds::ListSet_obj::remove,
	( void (hx::Object::*)(hx::Null< bool > ))&::de::polygonal::ds::ListSet_obj::clear,
	( ::Dynamic (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::iterator,
	( bool (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::isEmpty,
	( ::cpp::VirtualArray (hx::Object::*)())&::de::polygonal::ds::ListSet_obj::toArray,
	( ::Dynamic (hx::Object::*)(hx::Null< bool > , ::Dynamic))&::de::polygonal::ds::ListSet_obj::clone,
	( bool (hx::Object::*)( ::Dynamic))&::de::polygonal::ds::ListSet_obj::has,
	( bool (hx::Object::*)( ::Dynamic))&::de::polygonal::ds::ListSet_obj::set,
	( bool (hx::Object::*)( ::Dynamic))&::de::polygonal::ds::ListSet_obj::unset,
};

static ::de::polygonal::ds::Hashable_obj _hx_de_polygonal_ds_ListSet__hx_de_polygonal_ds_Hashable= {
};

void *ListSet_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xfeda5751: return &_hx_de_polygonal_ds_ListSet__hx_de_polygonal_ds_Collection;
		case (int)0x312df24f: return &_hx_de_polygonal_ds_ListSet__hx_de_polygonal_ds_Set;
		case (int)0xff6ef29b: return &_hx_de_polygonal_ds_ListSet__hx_de_polygonal_ds_Hashable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::de::polygonal::ds::ListSet ListSet_obj::reserve(int n){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_101_reserve)
HXLINE( 102)		if ((n > this->capacity)) {
HXLINE( 104)			this->capacity = n;
HXLINE( 105)			this->resizeContainer(n);
            		}
HXLINE( 107)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,reserve,return )

 ::de::polygonal::ds::ListSet ListSet_obj::pack(){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_117_pack)
HXLINE( 118)		if ((this->capacity > this->mInitialCapacity)) {
HXLINE( 120)			int x = this->mInitialCapacity;
HXDLIN( 120)			int y = this->mSize;
HXDLIN( 120)			int _hx_tmp;
HXDLIN( 120)			if ((x > y)) {
HXLINE( 120)				_hx_tmp = x;
            			}
            			else {
HXLINE( 120)				_hx_tmp = y;
            			}
HXDLIN( 120)			this->capacity = _hx_tmp;
HXLINE( 121)			this->resizeContainer(this->capacity);
            		}
            		else {
HXLINE( 125)			::cpp::VirtualArray d = this->mData;
HXLINE( 126)			{
HXLINE( 126)				int _g1 = this->mSize;
HXDLIN( 126)				int _g = this->capacity;
HXDLIN( 126)				while((_g1 < _g)){
HXLINE( 126)					_g1 = (_g1 + (int)1);
HXDLIN( 126)					int i = (_g1 - (int)1);
HXDLIN( 126)					d->set(i,null());
            				}
            			}
            		}
HXLINE( 128)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,pack,return )

 ::de::polygonal::ds::ListSet ListSet_obj::iter( ::Dynamic f){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_135_iter)
HXLINE( 137)		::cpp::VirtualArray d = this->mData;
HXLINE( 138)		{
HXLINE( 138)			int _g1 = (int)0;
HXDLIN( 138)			int _g = this->mSize;
HXDLIN( 138)			while((_g1 < _g)){
HXLINE( 138)				_g1 = (_g1 + (int)1);
HXDLIN( 138)				int i = (_g1 - (int)1);
HXDLIN( 138)				f(d->__get(i));
            			}
            		}
HXLINE( 139)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,iter,return )

::String ListSet_obj::toString(){
            	HX_GC_STACKFRAME(&_hx_pos_052a1ee7766b44f7_147_toString)
HXLINE( 148)		 ::StringBuf b =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 149)		{
HXLINE( 149)			::String x = (HX_("[ ListSet size=",7b,62,98,12) + this->mSize);
HXDLIN( 149)			if (hx::IsNotNull( b->charBuf )) {
HXLINE( 149)				b->flush();
            			}
HXDLIN( 149)			if (hx::IsNull( b->b )) {
HXLINE( 149)				b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 149)				::Array< ::String > b1 = b->b;
HXDLIN( 149)				b1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 150)		if (this->isEmpty()) {
HXLINE( 152)			{
HXLINE( 152)				if (hx::IsNotNull( b->charBuf )) {
HXLINE( 152)					b->flush();
            				}
HXDLIN( 152)				if (hx::IsNull( b->b )) {
HXLINE( 152)					b->b = ::Array_obj< ::String >::fromData( _hx_array_data_4cb127db_9,1);
            				}
            				else {
HXLINE( 152)					b->b->push(HX_(" ]",3d,1c,00,00));
            				}
            			}
HXLINE( 153)			return b->toString();
            		}
HXLINE( 155)		{
HXLINE( 155)			if (hx::IsNotNull( b->charBuf )) {
HXLINE( 155)				b->flush();
            			}
HXDLIN( 155)			if (hx::IsNull( b->b )) {
HXLINE( 155)				b->b = ::Array_obj< ::String >::fromData( _hx_array_data_4cb127db_10,1);
            			}
            			else {
HXLINE( 155)				b->b->push(HX_("\n",0a,00,00,00));
            			}
            		}
HXLINE( 156)		{
HXLINE( 156)			int _g1 = (int)0;
HXDLIN( 156)			int _g = this->mSize;
HXDLIN( 156)			while((_g1 < _g)){
HXLINE( 156)				_g1 = (_g1 + (int)1);
HXDLIN( 156)				int i = (_g1 - (int)1);
HXLINE( 158)				{
HXLINE( 158)					if (hx::IsNotNull( b->charBuf )) {
HXLINE( 158)						b->flush();
            					}
HXDLIN( 158)					if (hx::IsNull( b->b )) {
HXLINE( 158)						b->b = ::Array_obj< ::String >::fromData( _hx_array_data_4cb127db_11,1);
            					}
            					else {
HXLINE( 158)						b->b->push(HX_("  ",00,1c,00,00));
            					}
            				}
HXLINE( 159)				{
HXLINE( 159)					::String x1 = ::Std_obj::string(this->mData->__get(i));
HXDLIN( 159)					if (hx::IsNotNull( b->charBuf )) {
HXLINE( 159)						b->flush();
            					}
HXDLIN( 159)					if (hx::IsNull( b->b )) {
HXLINE( 159)						b->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            					}
            					else {
HXLINE( 159)						::Array< ::String > b2 = b->b;
HXDLIN( 159)						b2->push(::Std_obj::string(x1));
            					}
            				}
HXLINE( 160)				{
HXLINE( 160)					if (hx::IsNotNull( b->charBuf )) {
HXLINE( 160)						b->flush();
            					}
HXDLIN( 160)					if (hx::IsNull( b->b )) {
HXLINE( 160)						b->b = ::Array_obj< ::String >::fromData( _hx_array_data_4cb127db_12,1);
            					}
            					else {
HXLINE( 160)						b->b->push(HX_("\n",0a,00,00,00));
            					}
            				}
            			}
            		}
HXLINE( 162)		{
HXLINE( 162)			if (hx::IsNotNull( b->charBuf )) {
HXLINE( 162)				b->flush();
            			}
HXDLIN( 162)			if (hx::IsNull( b->b )) {
HXLINE( 162)				b->b = ::Array_obj< ::String >::fromData( _hx_array_data_4cb127db_13,1);
            			}
            			else {
HXLINE( 162)				b->b->push(HX_("]",5d,00,00,00));
            			}
            		}
HXLINE( 163)		return b->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,toString,return )

bool ListSet_obj::has( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_173_has)
HXLINE( 174)		if (this->isEmpty()) {
HXLINE( 174)			return false;
            		}
HXLINE( 175)		::cpp::VirtualArray d = this->mData;
HXLINE( 176)		{
HXLINE( 176)			int _g1 = (int)0;
HXDLIN( 176)			int _g = this->mSize;
HXDLIN( 176)			while((_g1 < _g)){
HXLINE( 176)				_g1 = (_g1 + (int)1);
HXDLIN( 176)				int i = (_g1 - (int)1);
HXDLIN( 176)				if (hx::IsEq( d->__get(i),val )) {
HXLINE( 176)					return true;
            				}
            			}
            		}
HXLINE( 177)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,has,return )

bool ListSet_obj::set( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_185_set)
HXLINE( 186)		::cpp::VirtualArray d = this->mData;
HXLINE( 187)		{
HXLINE( 187)			int _g1 = (int)0;
HXDLIN( 187)			int _g = this->mSize;
HXDLIN( 187)			while((_g1 < _g)){
HXLINE( 187)				_g1 = (_g1 + (int)1);
HXDLIN( 187)				int i = (_g1 - (int)1);
HXDLIN( 187)				if (hx::IsEq( d->__get(i),val )) {
HXLINE( 187)					return false;
            				}
            			}
            		}
HXLINE( 188)		if ((this->mSize == this->capacity)) {
HXLINE( 190)			this->grow();
HXLINE( 191)			d = this->mData;
            		}
HXLINE( 193)		d->set(this->mSize++,val);
HXLINE( 194)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,set,return )

bool ListSet_obj::unset( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_203_unset)
HXDLIN( 203)		return this->remove(val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,unset,return )

void ListSet_obj::merge(::Dynamic set, ::Dynamic assign, ::Dynamic copier){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_215_merge)
HXDLIN( 215)		if (assign) {
HXLINE( 217)			::Dynamic val = ::de::polygonal::ds::Collection_obj::iterator(set);
HXDLIN( 217)			while(::de::polygonal::ds::Itr_obj::hasNext(val)){
HXLINE( 217)				 ::Dynamic val1 = ::de::polygonal::ds::Itr_obj::next(val);
HXDLIN( 217)				this->set(val1);
            			}
            		}
            		else {
HXLINE( 221)			if (hx::IsNotNull( copier )) {
HXLINE( 223)				::Dynamic val2 = ::de::polygonal::ds::Collection_obj::iterator(set);
HXDLIN( 223)				while(::de::polygonal::ds::Itr_obj::hasNext(val2)){
HXLINE( 223)					 ::Dynamic val3 = ::de::polygonal::ds::Itr_obj::next(val2);
HXLINE( 224)					this->set(copier(val3));
            				}
            			}
            			else {
HXLINE( 228)				::Dynamic val4 = ::de::polygonal::ds::Collection_obj::iterator(set);
HXDLIN( 228)				while(::de::polygonal::ds::Itr_obj::hasNext(val4)){
HXLINE( 228)					 ::Dynamic val5 = ::de::polygonal::ds::Itr_obj::next(val4);
HXLINE( 232)					this->set(::de::polygonal::ds::Cloneable_obj::clone(val5));
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(ListSet_obj,merge,(void))

int ListSet_obj::get_size(){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_245_get_size)
HXDLIN( 245)		return this->mSize;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,get_size,return )

void ListSet_obj::free(){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_254_free)
HXLINE( 255)		::de::polygonal::ds::tools::NativeArrayTools_obj::nullify(this->mData,null(),null());
HXLINE( 256)		this->mData = null();
HXLINE( 257)		if (hx::IsNotNull( this->mIterator )) {
HXLINE( 259)			this->mIterator->free();
HXLINE( 260)			this->mIterator = null();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,free,(void))

bool ListSet_obj::contains( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_269_contains)
HXDLIN( 269)		return this->has(val);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,contains,return )

bool ListSet_obj::remove( ::Dynamic val){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_277_remove)
HXLINE( 278)		::cpp::VirtualArray d = this->mData;
HXLINE( 279)		{
HXLINE( 279)			int _g1 = (int)0;
HXDLIN( 279)			int _g = this->mSize;
HXDLIN( 279)			while((_g1 < _g)){
HXLINE( 279)				_g1 = (_g1 + (int)1);
HXDLIN( 279)				int i = (_g1 - (int)1);
HXLINE( 280)				if (hx::IsEq( d->__get(i),val )) {
HXLINE( 282)					d->set(i,this->mData->__get(--this->mSize));
HXLINE( 283)					return true;
            				}
            			}
            		}
HXLINE( 285)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,remove,return )

void ListSet_obj::clear(hx::Null< bool >  __o_gc){
bool gc = __o_gc.Default(false);
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_293_clear)
HXLINE( 294)		if (gc) {
HXLINE( 294)			::de::polygonal::ds::tools::NativeArrayTools_obj::nullify(this->mData,null(),null());
            		}
HXLINE( 295)		this->mSize = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,clear,(void))

::Dynamic ListSet_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_052a1ee7766b44f7_307_iterator)
HXDLIN( 307)		if (this->reuseIterator) {
HXLINE( 309)			if (hx::IsNull( this->mIterator )) {
HXLINE( 310)				this->mIterator =  ::de::polygonal::ds::ListSetIterator_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            			}
            			else {
HXLINE( 312)				 ::de::polygonal::ds::ListSetIterator _this = this->mIterator;
HXDLIN( 312)				_this->mData = _this->mObject->mData;
HXDLIN( 312)				_this->mS = _this->mObject->mSize;
HXDLIN( 312)				_this->mI = (int)0;
            			}
HXLINE( 313)			return this->mIterator;
            		}
            		else {
HXLINE( 316)			return  ::de::polygonal::ds::ListSetIterator_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this));
            		}
HXLINE( 307)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,iterator,return )

bool ListSet_obj::isEmpty(){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_324_isEmpty)
HXDLIN( 324)		return (this->mSize == (int)0);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,isEmpty,return )

::cpp::VirtualArray ListSet_obj::toArray(){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_332_toArray)
HXDLIN( 332)		return ::de::polygonal::ds::tools::NativeArrayTools_obj::toArray(this->mData,(int)0,this->mSize,::cpp::VirtualArray_obj::__new(0));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,toArray,return )

::Dynamic ListSet_obj::clone(hx::Null< bool >  __o_byRef, ::Dynamic copier){
bool byRef = __o_byRef.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_052a1ee7766b44f7_343_clone)
HXLINE( 344)		 ::de::polygonal::ds::ListSet out =  ::de::polygonal::ds::ListSet_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 345)		out->capacity = this->mSize;
HXLINE( 346)		out->mSize = this->mSize;
HXLINE( 347)		int len = this->mSize;
HXDLIN( 347)		::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXDLIN( 347)		_hx_array_set_size_exact(a,len);
HXDLIN( 347)		out->mData = a;
HXLINE( 349)		::cpp::VirtualArray src = this->mData;
HXLINE( 350)		::cpp::VirtualArray dst = out->mData;
HXLINE( 352)		if (byRef) {
HXLINE( 353)			int n = this->mSize;
HXDLIN( 353)			if ((n > (int)0)) {
HXLINE( 353)				dst->__Field(HX_("blit",35,38,19,41),hx::paccDynamic)((int)0,src,(int)0,n);
            			}
            		}
            		else {
HXLINE( 355)			if (hx::IsNull( copier )) {
HXLINE( 357)				int _g1 = (int)0;
HXDLIN( 357)				int _g = this->mSize;
HXDLIN( 357)				while((_g1 < _g)){
HXLINE( 357)					_g1 = (_g1 + (int)1);
HXDLIN( 357)					int i = (_g1 - (int)1);
HXLINE( 361)					dst->set(i,::de::polygonal::ds::Cloneable_obj::clone(src->__get(i)));
            				}
            			}
            			else {
HXLINE( 366)				int _g11 = (int)0;
HXDLIN( 366)				int _g2 = this->mSize;
HXDLIN( 366)				while((_g11 < _g2)){
HXLINE( 366)					_g11 = (_g11 + (int)1);
HXDLIN( 366)					int i1 = (_g11 - (int)1);
HXLINE( 367)					dst->set(i1,copier(src->__get(i1)));
            				}
            			}
            		}
HXLINE( 369)		return out;
            	}


HX_DEFINE_DYNAMIC_FUNC2(ListSet_obj,clone,return )

void ListSet_obj::grow(){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_373_grow)
HXLINE( 374)		this->capacity = ::de::polygonal::ds::tools::GrowthRate_obj::compute(this->growthRate,this->capacity);
HXLINE( 375)		this->resizeContainer(this->capacity);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ListSet_obj,grow,(void))

void ListSet_obj::resizeContainer(int newSize){
            	HX_STACKFRAME(&_hx_pos_052a1ee7766b44f7_379_resizeContainer)
HXLINE( 380)		::cpp::VirtualArray a = ::cpp::VirtualArray_obj::__new();
HXDLIN( 380)		_hx_array_set_size_exact(a,newSize);
HXDLIN( 380)		::cpp::VirtualArray t = a;
HXLINE( 381)		{
HXLINE( 381)			int n = this->mSize;
HXDLIN( 381)			if ((n > (int)0)) {
HXLINE( 381)				t->__Field(HX_("blit",35,38,19,41),hx::paccDynamic)((int)0,this->mData,(int)0,n);
            			}
            		}
HXLINE( 382)		this->mData = t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ListSet_obj,resizeContainer,(void))


hx::ObjectPtr< ListSet_obj > ListSet_obj::__new( ::Dynamic __o_initialCapacity,::cpp::VirtualArray source) {
	hx::ObjectPtr< ListSet_obj > __this = new ListSet_obj();
	__this->__construct(__o_initialCapacity,source);
	return __this;
}

hx::ObjectPtr< ListSet_obj > ListSet_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic __o_initialCapacity,::cpp::VirtualArray source) {
	ListSet_obj *__this = (ListSet_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ListSet_obj), true, "de.polygonal.ds.ListSet"));
	*(void **)__this = ListSet_obj::_hx_vtable;
	__this->__construct(__o_initialCapacity,source);
	return __this;
}

ListSet_obj::ListSet_obj()
{
}

void ListSet_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ListSet);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(capacity,"capacity");
	HX_MARK_MEMBER_NAME(growthRate,"growthRate");
	HX_MARK_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_MARK_MEMBER_NAME(mData,"mData");
	HX_MARK_MEMBER_NAME(mInitialCapacity,"mInitialCapacity");
	HX_MARK_MEMBER_NAME(mSize,"mSize");
	HX_MARK_MEMBER_NAME(mIterator,"mIterator");
	HX_MARK_END_CLASS();
}

void ListSet_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(capacity,"capacity");
	HX_VISIT_MEMBER_NAME(growthRate,"growthRate");
	HX_VISIT_MEMBER_NAME(reuseIterator,"reuseIterator");
	HX_VISIT_MEMBER_NAME(mData,"mData");
	HX_VISIT_MEMBER_NAME(mInitialCapacity,"mInitialCapacity");
	HX_VISIT_MEMBER_NAME(mSize,"mSize");
	HX_VISIT_MEMBER_NAME(mIterator,"mIterator");
}

hx::Val ListSet_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return hx::Val( key ); }
		if (HX_FIELD_EQ(inName,"has") ) { return hx::Val( has_dyn() ); }
		if (HX_FIELD_EQ(inName,"set") ) { return hx::Val( set_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"pack") ) { return hx::Val( pack_dyn() ); }
		if (HX_FIELD_EQ(inName,"iter") ) { return hx::Val( iter_dyn() ); }
		if (HX_FIELD_EQ(inName,"size") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_size() ); }
		if (HX_FIELD_EQ(inName,"free") ) { return hx::Val( free_dyn() ); }
		if (HX_FIELD_EQ(inName,"grow") ) { return hx::Val( grow_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mData") ) { return hx::Val( mData ); }
		if (HX_FIELD_EQ(inName,"mSize") ) { return hx::Val( mSize ); }
		if (HX_FIELD_EQ(inName,"unset") ) { return hx::Val( unset_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return hx::Val( merge_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"reserve") ) { return hx::Val( reserve_dyn() ); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return hx::Val( isEmpty_dyn() ); }
		if (HX_FIELD_EQ(inName,"toArray") ) { return hx::Val( toArray_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"capacity") ) { return hx::Val( capacity ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_size") ) { return hx::Val( get_size_dyn() ); }
		if (HX_FIELD_EQ(inName,"contains") ) { return hx::Val( contains_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mIterator") ) { return hx::Val( mIterator ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"growthRate") ) { return hx::Val( growthRate ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reuseIterator") ) { return hx::Val( reuseIterator ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"resizeContainer") ) { return hx::Val( resizeContainer_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mInitialCapacity") ) { return hx::Val( mInitialCapacity ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ListSet_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"mData") ) { mData=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"mSize") ) { mSize=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"capacity") ) { capacity=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mIterator") ) { mIterator=inValue.Cast<  ::de::polygonal::ds::ListSetIterator >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"growthRate") ) { growthRate=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"reuseIterator") ) { reuseIterator=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"mInitialCapacity") ) { mInitialCapacity=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ListSet_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("key","\x9f","\x89","\x51","\x00"));
	outFields->push(HX_HCSTRING("capacity","\x3a","\x01","\xbb","\xc3"));
	outFields->push(HX_HCSTRING("growthRate","\xc7","\x5a","\x60","\xe8"));
	outFields->push(HX_HCSTRING("reuseIterator","\x82","\x74","\xe3","\xed"));
	outFields->push(HX_HCSTRING("mData","\x37","\xbd","\xe9","\xef"));
	outFields->push(HX_HCSTRING("mInitialCapacity","\xf1","\x7b","\x23","\xab"));
	outFields->push(HX_HCSTRING("mSize","\xce","\x07","\xda","\xf9"));
	outFields->push(HX_HCSTRING("mIterator","\x7b","\xbb","\x15","\x3e"));
	outFields->push(HX_HCSTRING("size","\xc1","\xa0","\x53","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ListSet_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ListSet_obj,key),HX_HCSTRING("key","\x9f","\x89","\x51","\x00")},
	{hx::fsInt,(int)offsetof(ListSet_obj,capacity),HX_HCSTRING("capacity","\x3a","\x01","\xbb","\xc3")},
	{hx::fsInt,(int)offsetof(ListSet_obj,growthRate),HX_HCSTRING("growthRate","\xc7","\x5a","\x60","\xe8")},
	{hx::fsBool,(int)offsetof(ListSet_obj,reuseIterator),HX_HCSTRING("reuseIterator","\x82","\x74","\xe3","\xed")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ListSet_obj,mData),HX_HCSTRING("mData","\x37","\xbd","\xe9","\xef")},
	{hx::fsInt,(int)offsetof(ListSet_obj,mInitialCapacity),HX_HCSTRING("mInitialCapacity","\xf1","\x7b","\x23","\xab")},
	{hx::fsInt,(int)offsetof(ListSet_obj,mSize),HX_HCSTRING("mSize","\xce","\x07","\xda","\xf9")},
	{hx::fsObject /*::de::polygonal::ds::ListSetIterator*/ ,(int)offsetof(ListSet_obj,mIterator),HX_HCSTRING("mIterator","\x7b","\xbb","\x15","\x3e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ListSet_obj_sStaticStorageInfo = 0;
#endif

static ::String ListSet_obj_sMemberFields[] = {
	HX_HCSTRING("key","\x9f","\x89","\x51","\x00"),
	HX_HCSTRING("capacity","\x3a","\x01","\xbb","\xc3"),
	HX_HCSTRING("growthRate","\xc7","\x5a","\x60","\xe8"),
	HX_HCSTRING("reuseIterator","\x82","\x74","\xe3","\xed"),
	HX_HCSTRING("mData","\x37","\xbd","\xe9","\xef"),
	HX_HCSTRING("mInitialCapacity","\xf1","\x7b","\x23","\xab"),
	HX_HCSTRING("mSize","\xce","\x07","\xda","\xf9"),
	HX_HCSTRING("mIterator","\x7b","\xbb","\x15","\x3e"),
	HX_HCSTRING("reserve","\x3c","\x7e","\xc8","\x60"),
	HX_HCSTRING("pack","\xd9","\xd6","\x51","\x4a"),
	HX_HCSTRING("iter","\x18","\xc5","\xbf","\x45"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("has","\x5a","\x3f","\x4f","\x00"),
	HX_HCSTRING("set","\xa2","\x9b","\x57","\x00"),
	HX_HCSTRING("unset","\xe9","\xf2","\xee","\xa6"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("get_size","\x4a","\x5c","\x0e","\xcc"),
	HX_HCSTRING("free","\xac","\x9c","\xc2","\x43"),
	HX_HCSTRING("contains","\x1f","\x5a","\x7b","\x2c"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("iterator","\xee","\x49","\x9a","\x93"),
	HX_HCSTRING("isEmpty","\x43","\xde","\x5f","\x0c"),
	HX_HCSTRING("toArray","\x1e","\xba","\x13","\xf2"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("grow","\x13","\xdc","\x6b","\x44"),
	HX_HCSTRING("resizeContainer","\xad","\x1c","\x12","\x1c"),
	::String(null()) };

static void ListSet_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ListSet_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ListSet_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ListSet_obj::__mClass,"__mClass");
};

#endif

hx::Class ListSet_obj::__mClass;

void ListSet_obj::__register()
{
	hx::Object *dummy = new ListSet_obj;
	ListSet_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("de.polygonal.ds.ListSet","\xdb","\x27","\xb1","\x4c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ListSet_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ListSet_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ListSet_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ListSet_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ListSet_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ListSet_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace de
} // end namespace polygonal
} // end namespace ds
