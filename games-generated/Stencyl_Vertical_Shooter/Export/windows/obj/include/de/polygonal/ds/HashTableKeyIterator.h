// Generated by Haxe 3.4.7
#ifndef INCLUDED_de_polygonal_ds_HashTableKeyIterator
#define INCLUDED_de_polygonal_ds_HashTableKeyIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_de_polygonal_ds_Itr
#include <de/polygonal/ds/Itr.h>
#endif
HX_DECLARE_CLASS3(de,polygonal,ds,Collection)
HX_DECLARE_CLASS3(de,polygonal,ds,HashTable)
HX_DECLARE_CLASS3(de,polygonal,ds,HashTableKeyIterator)
HX_DECLARE_CLASS3(de,polygonal,ds,Hashable)
HX_DECLARE_CLASS3(de,polygonal,ds,Itr)
HX_DECLARE_CLASS3(de,polygonal,ds,Map)

namespace de{
namespace polygonal{
namespace ds{


class HXCPP_CLASS_ATTRIBUTES HashTableKeyIterator_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef HashTableKeyIterator_obj OBJ_;
		HashTableKeyIterator_obj();

	public:
		enum { _hx_ClassId = 0x197087fc };

		void __construct( ::de::polygonal::ds::HashTable x);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="de.polygonal.ds.HashTableKeyIterator")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"de.polygonal.ds.HashTableKeyIterator"); }
		static hx::ObjectPtr< HashTableKeyIterator_obj > __new( ::de::polygonal::ds::HashTable x);
		static hx::ObjectPtr< HashTableKeyIterator_obj > __alloc(hx::Ctx *_hx_ctx, ::de::polygonal::ds::HashTable x);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~HashTableKeyIterator_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("HashTableKeyIterator","\x4d","\x19","\x60","\x9f"); }

		 ::de::polygonal::ds::HashTable mObject;
		::cpp::VirtualArray mKeys;
		int mI;
		int mS;
		void free();
		::Dynamic free_dyn();

		::Dynamic reset();
		::Dynamic reset_dyn();

		bool hasNext();
		::Dynamic hasNext_dyn();

		 ::Dynamic next();
		::Dynamic next_dyn();

		void remove();
		::Dynamic remove_dyn();

};

} // end namespace de
} // end namespace polygonal
} // end namespace ds

#endif /* INCLUDED_de_polygonal_ds_HashTableKeyIterator */ 
