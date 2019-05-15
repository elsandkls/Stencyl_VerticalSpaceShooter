package;


import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#elseif (sys && windows && !cs)
			rootPath = FileSystem.absolutePath (haxe.io.Path.directory (#if (haxe_ver >= 3.3) Sys.programPath () #else Sys.executablePath () #end)) + "/";
			#else
			rootPath = "";
			#end

		}

		Assets.defaultRootPath = rootPath;

		#if (openfl && !flash && !display)
		
		#end

		var data, manifest, library;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:sizei1404077y4:typey5:IMAGEy9:classNamey48:__ASSET__assets_graphics_1_5x_background_0_0_pngy2:idy45:assets%2Fgraphics%2F1.5x%2Fbackground-0-0.pnggoR0i1540455R1R2R3y48:__ASSET__assets_graphics_1_5x_background_1_0_pngR5y45:assets%2Fgraphics%2F1.5x%2Fbackground-1-0.pnggoR0i129972R1R2R3y48:__ASSET__assets_graphics_1_5x_background_2_0_pngR5y45:assets%2Fgraphics%2F1.5x%2Fbackground-2-0.pnggoR0i1145436R1R2R3y49:__ASSET__assets_graphics_1_5x_background_45_0_pngR5y46:assets%2Fgraphics%2F1.5x%2Fbackground-45-0.pnggoR0i1289500R1R2R3y49:__ASSET__assets_graphics_1_5x_background_46_0_pngR5y46:assets%2Fgraphics%2F1.5x%2Fbackground-46-0.pnggoR0i1419729R1R2R3y49:__ASSET__assets_graphics_1_5x_background_47_0_pngR5y46:assets%2Fgraphics%2F1.5x%2Fbackground-47-0.pnggoR0i1732064R1R2R3y49:__ASSET__assets_graphics_1_5x_background_48_0_pngR5y46:assets%2Fgraphics%2F1.5x%2Fbackground-48-0.pnggoR0i16750R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_10_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-10-0.pnggoR0i91987R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_12_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-12-0.pnggoR0i1953R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_14_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-14-0.pnggoR0i1489R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_16_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-16-0.pnggoR0i1533R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_18_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-18-0.pnggoR0i73250R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_20_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-20-0.pnggoR0i73492R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_22_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-22-0.pnggoR0i3051R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_32_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-32-0.pnggoR0i2213R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_34_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-34-0.pnggoR0i1614R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_36_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-36-0.pnggoR0i1614R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_38_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-38-0.pnggoR0i55329R1R2R3y44:__ASSET__assets_graphics_1_5x_sprite_4_0_pngR5y41:assets%2Fgraphics%2F1.5x%2Fsprite-4-0.pnggoR0i3751R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_40_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-40-0.pnggoR0i1503R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_42_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-42-0.pnggoR0i1471R1R2R3y45:__ASSET__assets_graphics_1_5x_sprite_44_0_pngR5y42:assets%2Fgraphics%2F1.5x%2Fsprite-44-0.pnggoR0i11443R1R2R3y44:__ASSET__assets_graphics_1_5x_sprite_6_0_pngR5y41:assets%2Fgraphics%2F1.5x%2Fsprite-6-0.pnggoR0i4889R1R2R3y44:__ASSET__assets_graphics_1_5x_sprite_8_0_pngR5y41:assets%2Fgraphics%2F1.5x%2Fsprite-8-0.pnggoR0i500513R1R2R3y46:__ASSET__assets_graphics_1x_background_0_0_pngR5y43:assets%2Fgraphics%2F1x%2Fbackground-0-0.pnggoR0i544142R1R2R3y46:__ASSET__assets_graphics_1x_background_1_0_pngR5y43:assets%2Fgraphics%2F1x%2Fbackground-1-0.pnggoR0i46069R1R2R3y46:__ASSET__assets_graphics_1x_background_2_0_pngR5y43:assets%2Fgraphics%2F1x%2Fbackground-2-0.pnggoR0i408038R1R2R3y47:__ASSET__assets_graphics_1x_background_45_0_pngR5y44:assets%2Fgraphics%2F1x%2Fbackground-45-0.pnggoR0i465456R1R2R3y47:__ASSET__assets_graphics_1x_background_46_0_pngR5y44:assets%2Fgraphics%2F1x%2Fbackground-46-0.pnggoR0i508101R1R2R3y47:__ASSET__assets_graphics_1x_background_47_0_pngR5y44:assets%2Fgraphics%2F1x%2Fbackground-47-0.pnggoR0i584596R1R2R3y47:__ASSET__assets_graphics_1x_background_48_0_pngR5y44:assets%2Fgraphics%2F1x%2Fbackground-48-0.pnggoR0i7784R1R2R3y43:__ASSET__assets_graphics_1x_sprite_10_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-10-0.pnggoR0i41531R1R2R3y43:__ASSET__assets_graphics_1x_sprite_12_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-12-0.pnggoR0i953R1R2R3y43:__ASSET__assets_graphics_1x_sprite_14_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-14-0.pnggoR0i788R1R2R3y43:__ASSET__assets_graphics_1x_sprite_16_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-16-0.pnggoR0i802R1R2R3y43:__ASSET__assets_graphics_1x_sprite_18_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-18-0.pnggoR0i31406R1R2R3y43:__ASSET__assets_graphics_1x_sprite_20_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-20-0.pnggoR0i31497R1R2R3y43:__ASSET__assets_graphics_1x_sprite_22_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-22-0.pnggoR0i1446R1R2R3y43:__ASSET__assets_graphics_1x_sprite_32_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-32-0.pnggoR0i1007R1R2R3y43:__ASSET__assets_graphics_1x_sprite_34_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-34-0.pnggoR0i796R1R2R3y43:__ASSET__assets_graphics_1x_sprite_36_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-36-0.pnggoR0i796R1R2R3y43:__ASSET__assets_graphics_1x_sprite_38_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-38-0.pnggoR0i24101R1R2R3y42:__ASSET__assets_graphics_1x_sprite_4_0_pngR5y39:assets%2Fgraphics%2F1x%2Fsprite-4-0.pnggoR0i1718R1R2R3y43:__ASSET__assets_graphics_1x_sprite_40_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-40-0.pnggoR0i772R1R2R3y43:__ASSET__assets_graphics_1x_sprite_42_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-42-0.pnggoR0i762R1R2R3y43:__ASSET__assets_graphics_1x_sprite_44_0_pngR5y40:assets%2Fgraphics%2F1x%2Fsprite-44-0.pnggoR0i4412R1R2R3y42:__ASSET__assets_graphics_1x_sprite_6_0_pngR5y39:assets%2Fgraphics%2F1x%2Fsprite-6-0.pnggoR0i2262R1R2R3y42:__ASSET__assets_graphics_1x_sprite_8_0_pngR5y39:assets%2Fgraphics%2F1x%2Fsprite-8-0.pnggoR0i2350950R1R2R3y46:__ASSET__assets_graphics_2x_background_0_0_pngR5y43:assets%2Fgraphics%2F2x%2Fbackground-0-0.pnggoR0i2591286R1R2R3y46:__ASSET__assets_graphics_2x_background_1_0_pngR5y43:assets%2Fgraphics%2F2x%2Fbackground-1-0.pnggoR0i205253R1R2R3y46:__ASSET__assets_graphics_2x_background_2_0_pngR5y43:assets%2Fgraphics%2F2x%2Fbackground-2-0.pnggoR0i1902170R1R2R3y47:__ASSET__assets_graphics_2x_background_45_0_pngR5y44:assets%2Fgraphics%2F2x%2Fbackground-45-0.pnggoR0i2155428R1R2R3y47:__ASSET__assets_graphics_2x_background_46_0_pngR5y44:assets%2Fgraphics%2F2x%2Fbackground-46-0.pnggoR0i2377914R1R2R3y47:__ASSET__assets_graphics_2x_background_47_0_pngR5y44:assets%2Fgraphics%2F2x%2Fbackground-47-0.pnggoR0i2952613R1R2R3y47:__ASSET__assets_graphics_2x_background_48_0_pngR5y44:assets%2Fgraphics%2F2x%2Fbackground-48-0.pnggoR0i28348R1R2R3y43:__ASSET__assets_graphics_2x_sprite_10_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-10-0.pnggoR0i157383R1R2R3y43:__ASSET__assets_graphics_2x_sprite_12_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-12-0.pnggoR0i3363R1R2R3y43:__ASSET__assets_graphics_2x_sprite_14_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-14-0.pnggoR0i2564R1R2R3y43:__ASSET__assets_graphics_2x_sprite_16_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-16-0.pnggoR0i2619R1R2R3y43:__ASSET__assets_graphics_2x_sprite_18_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-18-0.pnggoR0i128596R1R2R3y43:__ASSET__assets_graphics_2x_sprite_20_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-20-0.pnggoR0i129029R1R2R3y43:__ASSET__assets_graphics_2x_sprite_22_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-22-0.pnggoR0i5294R1R2R3y43:__ASSET__assets_graphics_2x_sprite_32_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-32-0.pnggoR0i3739R1R2R3y43:__ASSET__assets_graphics_2x_sprite_34_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-34-0.pnggoR0i2698R1R2R3y43:__ASSET__assets_graphics_2x_sprite_36_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-36-0.pnggoR0i2698R1R2R3y43:__ASSET__assets_graphics_2x_sprite_38_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-38-0.pnggoR0i94970R1R2R3y42:__ASSET__assets_graphics_2x_sprite_4_0_pngR5y39:assets%2Fgraphics%2F2x%2Fsprite-4-0.pnggoR0i6470R1R2R3y43:__ASSET__assets_graphics_2x_sprite_40_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-40-0.pnggoR0i2616R1R2R3y43:__ASSET__assets_graphics_2x_sprite_42_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-42-0.pnggoR0i2555R1R2R3y43:__ASSET__assets_graphics_2x_sprite_44_0_pngR5y40:assets%2Fgraphics%2F2x%2Fsprite-44-0.pnggoR0i19115R1R2R3y42:__ASSET__assets_graphics_2x_sprite_6_0_pngR5y39:assets%2Fgraphics%2F2x%2Fsprite-6-0.pnggoR0i8367R1R2R3y42:__ASSET__assets_graphics_2x_sprite_8_0_pngR5y39:assets%2Fgraphics%2F2x%2Fsprite-8-0.pnggoR0i4610419R1R2R3y46:__ASSET__assets_graphics_3x_background_0_0_pngR5y43:assets%2Fgraphics%2F3x%2Fbackground-0-0.pnggoR0i5125179R1R2R3y46:__ASSET__assets_graphics_3x_background_1_0_pngR5y43:assets%2Fgraphics%2F3x%2Fbackground-1-0.pnggoR0i399205R1R2R3y46:__ASSET__assets_graphics_3x_background_2_0_pngR5y43:assets%2Fgraphics%2F3x%2Fbackground-2-0.pnggoR0i3695334R1R2R3y47:__ASSET__assets_graphics_3x_background_45_0_pngR5y44:assets%2Fgraphics%2F3x%2Fbackground-45-0.pnggoR0i4234922R1R2R3y47:__ASSET__assets_graphics_3x_background_46_0_pngR5y44:assets%2Fgraphics%2F3x%2Fbackground-46-0.pnggoR0i4665232R1R2R3y47:__ASSET__assets_graphics_3x_background_47_0_pngR5y44:assets%2Fgraphics%2F3x%2Fbackground-47-0.pnggoR0i5976445R1R2R3y47:__ASSET__assets_graphics_3x_background_48_0_pngR5y44:assets%2Fgraphics%2F3x%2Fbackground-48-0.pnggoR0i57825R1R2R3y43:__ASSET__assets_graphics_3x_sprite_10_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-10-0.pnggoR0i322817R1R2R3y43:__ASSET__assets_graphics_3x_sprite_12_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-12-0.pnggoR0i7129R1R2R3y43:__ASSET__assets_graphics_3x_sprite_14_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-14-0.pnggoR0i5049R1R2R3y43:__ASSET__assets_graphics_3x_sprite_16_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-16-0.pnggoR0i5150R1R2R3y43:__ASSET__assets_graphics_3x_sprite_18_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-18-0.pnggoR0i280658R1R2R3y43:__ASSET__assets_graphics_3x_sprite_20_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-20-0.pnggoR0i281850R1R2R3y43:__ASSET__assets_graphics_3x_sprite_22_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-22-0.pnggoR0i11491R1R2R3y43:__ASSET__assets_graphics_3x_sprite_32_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-32-0.pnggoR0i8446R1R2R3y43:__ASSET__assets_graphics_3x_sprite_34_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-34-0.pnggoR0i5575R1R2R3y43:__ASSET__assets_graphics_3x_sprite_36_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-36-0.pnggoR0i5575R1R2R3y43:__ASSET__assets_graphics_3x_sprite_38_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-38-0.pnggoR0i200152R1R2R3y42:__ASSET__assets_graphics_3x_sprite_4_0_pngR5y39:assets%2Fgraphics%2F3x%2Fsprite-4-0.pnggoR0i13585R1R2R3y43:__ASSET__assets_graphics_3x_sprite_40_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-40-0.pnggoR0i5209R1R2R3y43:__ASSET__assets_graphics_3x_sprite_42_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-42-0.pnggoR0i5084R1R2R3y43:__ASSET__assets_graphics_3x_sprite_44_0_pngR5y40:assets%2Fgraphics%2F3x%2Fsprite-44-0.pnggoR0i42462R1R2R3y42:__ASSET__assets_graphics_3x_sprite_6_0_pngR5y39:assets%2Fgraphics%2F3x%2Fsprite-6-0.pnggoR0i17264R1R2R3y42:__ASSET__assets_graphics_3x_sprite_8_0_pngR5y39:assets%2Fgraphics%2F3x%2Fsprite-8-0.pnggoR0i7616319R1R2R3y46:__ASSET__assets_graphics_4x_background_0_0_pngR5y43:assets%2Fgraphics%2F4x%2Fbackground-0-0.pnggoR0i8422131R1R2R3y46:__ASSET__assets_graphics_4x_background_1_0_pngR5y43:assets%2Fgraphics%2F4x%2Fbackground-1-0.pnggoR0i669512R1R2R3y46:__ASSET__assets_graphics_4x_background_2_0_pngR5y43:assets%2Fgraphics%2F4x%2Fbackground-2-0.pnggoR0i6003746R1R2R3y47:__ASSET__assets_graphics_4x_background_45_0_pngR5y44:assets%2Fgraphics%2F4x%2Fbackground-45-0.pnggoR0i6887723R1R2R3y47:__ASSET__assets_graphics_4x_background_46_0_pngR5y44:assets%2Fgraphics%2F4x%2Fbackground-46-0.pnggoR0i7712803R1R2R3y47:__ASSET__assets_graphics_4x_background_47_0_pngR5y44:assets%2Fgraphics%2F4x%2Fbackground-47-0.pnggoR0i10049338R1R2R3y47:__ASSET__assets_graphics_4x_background_48_0_pngR5y44:assets%2Fgraphics%2F4x%2Fbackground-48-0.pnggoR0i96542R1R2R3y43:__ASSET__assets_graphics_4x_sprite_10_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-10-0.pnggoR0i551344R1R2R3y43:__ASSET__assets_graphics_4x_sprite_12_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-12-0.pnggoR0i12297R1R2R3y43:__ASSET__assets_graphics_4x_sprite_14_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-14-0.pnggoR0i8106R1R2R3y43:__ASSET__assets_graphics_4x_sprite_16_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-16-0.pnggoR0i8368R1R2R3y43:__ASSET__assets_graphics_4x_sprite_18_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-18-0.pnggoR0i491132R1R2R3y43:__ASSET__assets_graphics_4x_sprite_20_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-20-0.pnggoR0i493440R1R2R3y43:__ASSET__assets_graphics_4x_sprite_22_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-22-0.pnggoR0i19855R1R2R3y43:__ASSET__assets_graphics_4x_sprite_32_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-32-0.pnggoR0i13865R1R2R3y43:__ASSET__assets_graphics_4x_sprite_34_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-34-0.pnggoR0i9334R1R2R3y43:__ASSET__assets_graphics_4x_sprite_36_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-36-0.pnggoR0i9334R1R2R3y43:__ASSET__assets_graphics_4x_sprite_38_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-38-0.pnggoR0i339009R1R2R3y42:__ASSET__assets_graphics_4x_sprite_4_0_pngR5y39:assets%2Fgraphics%2F4x%2Fsprite-4-0.pnggoR0i23095R1R2R3y43:__ASSET__assets_graphics_4x_sprite_40_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-40-0.pnggoR0i8493R1R2R3y43:__ASSET__assets_graphics_4x_sprite_42_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-42-0.pnggoR0i8222R1R2R3y43:__ASSET__assets_graphics_4x_sprite_44_0_pngR5y40:assets%2Fgraphics%2F4x%2Fsprite-44-0.pnggoR0i68598R1R2R3y42:__ASSET__assets_graphics_4x_sprite_6_0_pngR5y39:assets%2Fgraphics%2F4x%2Fsprite-6-0.pnggoR0i28903R1R2R3y42:__ASSET__assets_graphics_4x_sprite_8_0_pngR5y39:assets%2Fgraphics%2F4x%2Fsprite-8-0.pnggoR0i10791R1y4:TEXTR3y41:__ASSET__assets_graphics_default_font_fntR5y36:assets%2Fgraphics%2Fdefault-font.fntgoR0i1736R1R2R3y41:__ASSET__assets_graphics_default_font_pngR5y36:assets%2Fgraphics%2Fdefault-font.pnggoR0i48900R1y5:SOUNDR3y32:__ASSET__assets_sfx_sound_27_mp3R5y27:assets%2Fsfx%2Fsound-27.mp3goR0i12537R1R250R3y32:__ASSET__assets_sfx_sound_28_mp3R5y27:assets%2Fsfx%2Fsound-28.mp3goR0i13164R1R250R3y32:__ASSET__assets_sfx_sound_29_mp3R5y27:assets%2Fsfx%2Fsound-29.mp3goR0i11904R1y6:BINARYR3y34:__ASSET__assets_data_behaviors_mbsR5y29:assets%2Fdata%2Fbehaviors.mbsgoR0i1491R1R257R3y29:__ASSET__assets_data_game_mbsR5y24:assets%2Fdata%2Fgame.mbsgoR0i879R1R2R3y39:__ASSET__assets_data_inner_joystick_pngR5y34:assets%2Fdata%2Finner-joystick.pnggoR0i1792R1R2R3y44:__ASSET__assets_data_inner_joystick_1_5x_pngR5y41:assets%2Fdata%2Finner-joystick%401.5x.pnggoR0i1946R1R2R3y42:__ASSET__assets_data_inner_joystick_2x_pngR5y39:assets%2Fdata%2Finner-joystick%402x.pnggoR0i3990R1R2R3y42:__ASSET__assets_data_inner_joystick_3x_pngR5y39:assets%2Fdata%2Finner-joystick%403x.pnggoR0i4344R1R2R3y42:__ASSET__assets_data_inner_joystick_4x_pngR5y39:assets%2Fdata%2Finner-joystick%404x.pnggoR0i1951R1R2R3y39:__ASSET__assets_data_outer_joystick_pngR5y34:assets%2Fdata%2Fouter-joystick.pnggoR0i4023R1R2R3y44:__ASSET__assets_data_outer_joystick_1_5x_pngR5y41:assets%2Fdata%2Fouter-joystick%401.5x.pnggoR0i4480R1R2R3y42:__ASSET__assets_data_outer_joystick_2x_pngR5y39:assets%2Fdata%2Fouter-joystick%402x.pnggoR0i9183R1R2R3y42:__ASSET__assets_data_outer_joystick_3x_pngR5y39:assets%2Fdata%2Fouter-joystick%403x.pnggoR0i9836R1R2R3y42:__ASSET__assets_data_outer_joystick_4x_pngR5y39:assets%2Fdata%2Fouter-joystick%404x.pnggoR0i6347R1R257R3y34:__ASSET__assets_data_resources_mbsR5y29:assets%2Fdata%2Fresources.mbsgoR0i2954R1R257R3y32:__ASSET__assets_data_scene_0_mbsR5y27:assets%2Fdata%2Fscene-0.mbsgoR0i13R1R257R3y32:__ASSET__assets_data_scene_0_scnR5y27:assets%2Fdata%2Fscene-0.scngoR0i90R1R257R3y31:__ASSET__assets_data_scenes_mbsR5y26:assets%2Fdata%2Fscenes.mbsgoR0i1367R1R245R3y32:__ASSET__config_game_config_jsonR5y25:config%2Fgame-config.jsongoR0i2558R1R2R3y35:__ASSET__config_preloader_badge_pngR5y28:config%2Fpreloader-badge.pnggoR0i3456R1R245R3y35:__ASSET__config_preloader_badge_txtR5y28:config%2Fpreloader-badge.txtgoR0i1078R1R245R3y32:__ASSET__config_preloadpaths_txtR5y25:config%2FpreloadPaths.txtgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_background_0_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_background_1_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_background_2_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_background_45_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_background_46_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_background_47_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_background_48_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_10_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_12_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_14_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_16_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_18_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_20_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_22_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_32_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_34_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_36_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_38_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_4_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_40_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_42_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_44_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_6_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1_5x_sprite_8_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_background_0_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_background_1_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_background_2_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_background_45_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_background_46_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_background_47_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_background_48_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_10_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_12_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_14_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_16_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_18_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_20_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_22_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_32_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_34_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_36_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_38_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_4_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_40_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_42_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_44_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_6_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_1x_sprite_8_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_background_0_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_background_1_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_background_2_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_background_45_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_background_46_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_background_47_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_background_48_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_10_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_12_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_14_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_16_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_18_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_20_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_22_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_32_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_34_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_36_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_38_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_4_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_40_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_42_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_44_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_6_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_2x_sprite_8_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_background_0_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_background_1_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_background_2_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_background_45_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_background_46_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_background_47_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_background_48_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_10_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_12_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_14_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_16_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_18_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_20_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_22_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_32_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_34_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_36_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_38_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_4_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_40_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_42_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_44_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_6_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_3x_sprite_8_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_background_0_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_background_1_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_background_2_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_background_45_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_background_46_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_background_47_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_background_48_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_10_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_12_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_14_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_16_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_18_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_20_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_22_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_32_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_34_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_36_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_38_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_4_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_40_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_42_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_44_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_6_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_4x_sprite_8_0_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_default_font_fnt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_default_font_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_27_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_28_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_29_mp3 extends flash.media.Sound { }
@:keep @:bind #if display private #end class __ASSET__assets_data_behaviors_mbs extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_game_mbs extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_inner_joystick_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_inner_joystick_1_5x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_inner_joystick_2x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_inner_joystick_3x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_inner_joystick_4x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_outer_joystick_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_outer_joystick_1_5x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_outer_joystick_2x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_outer_joystick_3x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_outer_joystick_4x_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_data_resources_mbs extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_scene_0_mbs extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_scene_0_scn extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__assets_data_scenes_mbs extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__config_game_config_json extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__config_preloader_badge_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__config_preloader_badge_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__config_preloadpaths_txt extends flash.utils.ByteArray { }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends flash.utils.ByteArray { }


#elseif (desktop || cpp)

@:keep @:image("Assets/graphics/1.5x/background-0-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_background_0_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/background-1-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_background_1_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/background-2-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_background_2_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/background-45-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_background_45_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/background-46-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_background_46_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/background-47-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_background_47_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/background-48-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_background_48_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-10-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_10_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-12-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_12_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-14-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_14_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-16-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_16_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-18-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_18_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-20-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_20_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-22-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_22_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-32-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_32_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-34-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_34_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-36-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_36_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-38-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_38_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-4-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_4_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-40-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_40_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-42-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_42_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-44-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_44_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-6-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_6_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1.5x/sprite-8-0.png") #if display private #end class __ASSET__assets_graphics_1_5x_sprite_8_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/background-0-0.png") #if display private #end class __ASSET__assets_graphics_1x_background_0_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/background-1-0.png") #if display private #end class __ASSET__assets_graphics_1x_background_1_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/background-2-0.png") #if display private #end class __ASSET__assets_graphics_1x_background_2_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/background-45-0.png") #if display private #end class __ASSET__assets_graphics_1x_background_45_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/background-46-0.png") #if display private #end class __ASSET__assets_graphics_1x_background_46_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/background-47-0.png") #if display private #end class __ASSET__assets_graphics_1x_background_47_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/background-48-0.png") #if display private #end class __ASSET__assets_graphics_1x_background_48_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-10-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_10_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-12-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_12_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-14-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_14_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-16-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_16_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-18-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_18_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-20-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_20_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-22-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_22_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-32-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_32_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-34-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_34_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-36-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_36_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-38-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_38_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-4-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_4_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-40-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_40_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-42-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_42_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-44-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_44_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-6-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_6_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/1x/sprite-8-0.png") #if display private #end class __ASSET__assets_graphics_1x_sprite_8_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/background-0-0.png") #if display private #end class __ASSET__assets_graphics_2x_background_0_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/background-1-0.png") #if display private #end class __ASSET__assets_graphics_2x_background_1_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/background-2-0.png") #if display private #end class __ASSET__assets_graphics_2x_background_2_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/background-45-0.png") #if display private #end class __ASSET__assets_graphics_2x_background_45_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/background-46-0.png") #if display private #end class __ASSET__assets_graphics_2x_background_46_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/background-47-0.png") #if display private #end class __ASSET__assets_graphics_2x_background_47_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/background-48-0.png") #if display private #end class __ASSET__assets_graphics_2x_background_48_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-10-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_10_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-12-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_12_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-14-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_14_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-16-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_16_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-18-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_18_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-20-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_20_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-22-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_22_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-32-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_32_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-34-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_34_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-36-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_36_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-38-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_38_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-4-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_4_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-40-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_40_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-42-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_42_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-44-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_44_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-6-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_6_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/2x/sprite-8-0.png") #if display private #end class __ASSET__assets_graphics_2x_sprite_8_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/background-0-0.png") #if display private #end class __ASSET__assets_graphics_3x_background_0_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/background-1-0.png") #if display private #end class __ASSET__assets_graphics_3x_background_1_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/background-2-0.png") #if display private #end class __ASSET__assets_graphics_3x_background_2_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/background-45-0.png") #if display private #end class __ASSET__assets_graphics_3x_background_45_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/background-46-0.png") #if display private #end class __ASSET__assets_graphics_3x_background_46_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/background-47-0.png") #if display private #end class __ASSET__assets_graphics_3x_background_47_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/background-48-0.png") #if display private #end class __ASSET__assets_graphics_3x_background_48_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-10-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_10_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-12-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_12_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-14-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_14_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-16-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_16_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-18-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_18_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-20-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_20_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-22-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_22_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-32-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_32_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-34-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_34_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-36-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_36_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-38-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_38_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-4-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_4_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-40-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_40_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-42-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_42_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-44-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_44_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-6-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_6_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/3x/sprite-8-0.png") #if display private #end class __ASSET__assets_graphics_3x_sprite_8_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/background-0-0.png") #if display private #end class __ASSET__assets_graphics_4x_background_0_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/background-1-0.png") #if display private #end class __ASSET__assets_graphics_4x_background_1_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/background-2-0.png") #if display private #end class __ASSET__assets_graphics_4x_background_2_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/background-45-0.png") #if display private #end class __ASSET__assets_graphics_4x_background_45_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/background-46-0.png") #if display private #end class __ASSET__assets_graphics_4x_background_46_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/background-47-0.png") #if display private #end class __ASSET__assets_graphics_4x_background_47_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/background-48-0.png") #if display private #end class __ASSET__assets_graphics_4x_background_48_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-10-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_10_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-12-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_12_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-14-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_14_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-16-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_16_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-18-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_18_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-20-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_20_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-22-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_22_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-32-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_32_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-34-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_34_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-36-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_36_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-38-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_38_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-4-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_4_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-40-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_40_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-42-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_42_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-44-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_44_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-6-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_6_0_png extends lime.graphics.Image {}
@:keep @:image("Assets/graphics/4x/sprite-8-0.png") #if display private #end class __ASSET__assets_graphics_4x_sprite_8_0_png extends lime.graphics.Image {}
@:keep @:file("Assets/graphics/default-font.fnt") #if display private #end class __ASSET__assets_graphics_default_font_fnt extends haxe.io.Bytes {}
@:keep @:image("Assets/graphics/default-font.png") #if display private #end class __ASSET__assets_graphics_default_font_png extends lime.graphics.Image {}
@:keep @:file("Assets/sfx/sound-27.mp3") #if display private #end class __ASSET__assets_sfx_sound_27_mp3 extends haxe.io.Bytes {}
@:keep @:file("Assets/sfx/sound-28.mp3") #if display private #end class __ASSET__assets_sfx_sound_28_mp3 extends haxe.io.Bytes {}
@:keep @:file("Assets/sfx/sound-29.mp3") #if display private #end class __ASSET__assets_sfx_sound_29_mp3 extends haxe.io.Bytes {}
@:keep @:file("Assets/data/behaviors.mbs") #if display private #end class __ASSET__assets_data_behaviors_mbs extends haxe.io.Bytes {}
@:keep @:file("Assets/data/game.mbs") #if display private #end class __ASSET__assets_data_game_mbs extends haxe.io.Bytes {}
@:keep @:image("Assets/data/inner-joystick.png") #if display private #end class __ASSET__assets_data_inner_joystick_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/inner-joystick@1.5x.png") #if display private #end class __ASSET__assets_data_inner_joystick_1_5x_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/inner-joystick@2x.png") #if display private #end class __ASSET__assets_data_inner_joystick_2x_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/inner-joystick@3x.png") #if display private #end class __ASSET__assets_data_inner_joystick_3x_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/inner-joystick@4x.png") #if display private #end class __ASSET__assets_data_inner_joystick_4x_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/outer-joystick.png") #if display private #end class __ASSET__assets_data_outer_joystick_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/outer-joystick@1.5x.png") #if display private #end class __ASSET__assets_data_outer_joystick_1_5x_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/outer-joystick@2x.png") #if display private #end class __ASSET__assets_data_outer_joystick_2x_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/outer-joystick@3x.png") #if display private #end class __ASSET__assets_data_outer_joystick_3x_png extends lime.graphics.Image {}
@:keep @:image("Assets/data/outer-joystick@4x.png") #if display private #end class __ASSET__assets_data_outer_joystick_4x_png extends lime.graphics.Image {}
@:keep @:file("Assets/data/resources.mbs") #if display private #end class __ASSET__assets_data_resources_mbs extends haxe.io.Bytes {}
@:keep @:file("Assets/data/scene-0.mbs") #if display private #end class __ASSET__assets_data_scene_0_mbs extends haxe.io.Bytes {}
@:keep @:file("Assets/data/scene-0.scn") #if display private #end class __ASSET__assets_data_scene_0_scn extends haxe.io.Bytes {}
@:keep @:file("Assets/data/scenes.mbs") #if display private #end class __ASSET__assets_data_scenes_mbs extends haxe.io.Bytes {}
@:keep @:file("Config/game-config.json") #if display private #end class __ASSET__config_game_config_json extends haxe.io.Bytes {}
@:keep @:image("Config/preloader-badge.png") #if display private #end class __ASSET__config_preloader_badge_png extends lime.graphics.Image {}
@:keep @:file("Config/preloader-badge.txt") #if display private #end class __ASSET__config_preloader_badge_txt extends haxe.io.Bytes {}
@:keep @:file("Config/preloadPaths.txt") #if display private #end class __ASSET__config_preloadpaths_txt extends haxe.io.Bytes {}
@:keep @:file("") #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)

#if html5

#else

#end

#end
#end

#end
