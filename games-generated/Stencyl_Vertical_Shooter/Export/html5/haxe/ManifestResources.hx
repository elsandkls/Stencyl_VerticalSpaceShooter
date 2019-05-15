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

		data = '{"name":null,"assets":"aoy4:pathy45:assets%2Fgraphics%2F1.5x%2Fbackground-0-0.pngy4:sizei1404077y4:typey5:IMAGEy2:idR1y7:preloadtgoR0y45:assets%2Fgraphics%2F1.5x%2Fbackground-1-0.pngR2i1540455R3R4R5R7R6tgoR0y45:assets%2Fgraphics%2F1.5x%2Fbackground-2-0.pngR2i129972R3R4R5R8R6tgoR0y46:assets%2Fgraphics%2F1.5x%2Fbackground-45-0.pngR2i1145436R3R4R5R9R6tgoR0y46:assets%2Fgraphics%2F1.5x%2Fbackground-46-0.pngR2i1289500R3R4R5R10R6tgoR0y46:assets%2Fgraphics%2F1.5x%2Fbackground-47-0.pngR2i1419729R3R4R5R11R6tgoR0y46:assets%2Fgraphics%2F1.5x%2Fbackground-48-0.pngR2i1732064R3R4R5R12R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-10-0.pngR2i16750R3R4R5R13R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-12-0.pngR2i91987R3R4R5R14R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-14-0.pngR2i1953R3R4R5R15R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-16-0.pngR2i1489R3R4R5R16R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-18-0.pngR2i1533R3R4R5R17R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-20-0.pngR2i73250R3R4R5R18R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-22-0.pngR2i73492R3R4R5R19R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-32-0.pngR2i3051R3R4R5R20R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-34-0.pngR2i2213R3R4R5R21R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-36-0.pngR2i1614R3R4R5R22R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-38-0.pngR2i1614R3R4R5R23R6tgoR0y41:assets%2Fgraphics%2F1.5x%2Fsprite-4-0.pngR2i55329R3R4R5R24R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-40-0.pngR2i3751R3R4R5R25R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-42-0.pngR2i1503R3R4R5R26R6tgoR0y42:assets%2Fgraphics%2F1.5x%2Fsprite-44-0.pngR2i1471R3R4R5R27R6tgoR0y41:assets%2Fgraphics%2F1.5x%2Fsprite-6-0.pngR2i11443R3R4R5R28R6tgoR0y41:assets%2Fgraphics%2F1.5x%2Fsprite-8-0.pngR2i4889R3R4R5R29R6tgoR0y43:assets%2Fgraphics%2F1x%2Fbackground-0-0.pngR2i500513R3R4R5R30R6tgoR0y43:assets%2Fgraphics%2F1x%2Fbackground-1-0.pngR2i544142R3R4R5R31R6tgoR0y43:assets%2Fgraphics%2F1x%2Fbackground-2-0.pngR2i46069R3R4R5R32R6tgoR0y44:assets%2Fgraphics%2F1x%2Fbackground-45-0.pngR2i408038R3R4R5R33R6tgoR0y44:assets%2Fgraphics%2F1x%2Fbackground-46-0.pngR2i465456R3R4R5R34R6tgoR0y44:assets%2Fgraphics%2F1x%2Fbackground-47-0.pngR2i508101R3R4R5R35R6tgoR0y44:assets%2Fgraphics%2F1x%2Fbackground-48-0.pngR2i584596R3R4R5R36R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-10-0.pngR2i7784R3R4R5R37R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-12-0.pngR2i41531R3R4R5R38R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-14-0.pngR2i953R3R4R5R39R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-16-0.pngR2i788R3R4R5R40R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-18-0.pngR2i802R3R4R5R41R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-20-0.pngR2i31406R3R4R5R42R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-22-0.pngR2i31497R3R4R5R43R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-32-0.pngR2i1446R3R4R5R44R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-34-0.pngR2i1007R3R4R5R45R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-36-0.pngR2i796R3R4R5R46R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-38-0.pngR2i796R3R4R5R47R6tgoR0y39:assets%2Fgraphics%2F1x%2Fsprite-4-0.pngR2i24101R3R4R5R48R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-40-0.pngR2i1718R3R4R5R49R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-42-0.pngR2i772R3R4R5R50R6tgoR0y40:assets%2Fgraphics%2F1x%2Fsprite-44-0.pngR2i762R3R4R5R51R6tgoR0y39:assets%2Fgraphics%2F1x%2Fsprite-6-0.pngR2i4412R3R4R5R52R6tgoR0y39:assets%2Fgraphics%2F1x%2Fsprite-8-0.pngR2i2262R3R4R5R53R6tgoR0y43:assets%2Fgraphics%2F2x%2Fbackground-0-0.pngR2i2350950R3R4R5R54R6tgoR0y43:assets%2Fgraphics%2F2x%2Fbackground-1-0.pngR2i2591286R3R4R5R55R6tgoR0y43:assets%2Fgraphics%2F2x%2Fbackground-2-0.pngR2i205253R3R4R5R56R6tgoR0y44:assets%2Fgraphics%2F2x%2Fbackground-45-0.pngR2i1902170R3R4R5R57R6tgoR0y44:assets%2Fgraphics%2F2x%2Fbackground-46-0.pngR2i2155428R3R4R5R58R6tgoR0y44:assets%2Fgraphics%2F2x%2Fbackground-47-0.pngR2i2377914R3R4R5R59R6tgoR0y44:assets%2Fgraphics%2F2x%2Fbackground-48-0.pngR2i2952613R3R4R5R60R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-10-0.pngR2i28348R3R4R5R61R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-12-0.pngR2i157383R3R4R5R62R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-14-0.pngR2i3363R3R4R5R63R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-16-0.pngR2i2564R3R4R5R64R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-18-0.pngR2i2619R3R4R5R65R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-20-0.pngR2i128596R3R4R5R66R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-22-0.pngR2i129029R3R4R5R67R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-32-0.pngR2i5294R3R4R5R68R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-34-0.pngR2i3739R3R4R5R69R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-36-0.pngR2i2698R3R4R5R70R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-38-0.pngR2i2698R3R4R5R71R6tgoR0y39:assets%2Fgraphics%2F2x%2Fsprite-4-0.pngR2i94970R3R4R5R72R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-40-0.pngR2i6470R3R4R5R73R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-42-0.pngR2i2616R3R4R5R74R6tgoR0y40:assets%2Fgraphics%2F2x%2Fsprite-44-0.pngR2i2555R3R4R5R75R6tgoR0y39:assets%2Fgraphics%2F2x%2Fsprite-6-0.pngR2i19115R3R4R5R76R6tgoR0y39:assets%2Fgraphics%2F2x%2Fsprite-8-0.pngR2i8367R3R4R5R77R6tgoR0y43:assets%2Fgraphics%2F3x%2Fbackground-0-0.pngR2i4610419R3R4R5R78R6tgoR0y43:assets%2Fgraphics%2F3x%2Fbackground-1-0.pngR2i5125179R3R4R5R79R6tgoR0y43:assets%2Fgraphics%2F3x%2Fbackground-2-0.pngR2i399205R3R4R5R80R6tgoR0y44:assets%2Fgraphics%2F3x%2Fbackground-45-0.pngR2i3695334R3R4R5R81R6tgoR0y44:assets%2Fgraphics%2F3x%2Fbackground-46-0.pngR2i4234922R3R4R5R82R6tgoR0y44:assets%2Fgraphics%2F3x%2Fbackground-47-0.pngR2i4665232R3R4R5R83R6tgoR0y44:assets%2Fgraphics%2F3x%2Fbackground-48-0.pngR2i5976445R3R4R5R84R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-10-0.pngR2i57825R3R4R5R85R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-12-0.pngR2i322817R3R4R5R86R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-14-0.pngR2i7129R3R4R5R87R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-16-0.pngR2i5049R3R4R5R88R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-18-0.pngR2i5150R3R4R5R89R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-20-0.pngR2i280658R3R4R5R90R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-22-0.pngR2i281850R3R4R5R91R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-32-0.pngR2i11491R3R4R5R92R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-34-0.pngR2i8446R3R4R5R93R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-36-0.pngR2i5575R3R4R5R94R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-38-0.pngR2i5575R3R4R5R95R6tgoR0y39:assets%2Fgraphics%2F3x%2Fsprite-4-0.pngR2i200152R3R4R5R96R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-40-0.pngR2i13585R3R4R5R97R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-42-0.pngR2i5209R3R4R5R98R6tgoR0y40:assets%2Fgraphics%2F3x%2Fsprite-44-0.pngR2i5084R3R4R5R99R6tgoR0y39:assets%2Fgraphics%2F3x%2Fsprite-6-0.pngR2i42462R3R4R5R100R6tgoR0y39:assets%2Fgraphics%2F3x%2Fsprite-8-0.pngR2i17264R3R4R5R101R6tgoR0y43:assets%2Fgraphics%2F4x%2Fbackground-0-0.pngR2i7616319R3R4R5R102R6tgoR0y43:assets%2Fgraphics%2F4x%2Fbackground-1-0.pngR2i8422131R3R4R5R103R6tgoR0y43:assets%2Fgraphics%2F4x%2Fbackground-2-0.pngR2i669512R3R4R5R104R6tgoR0y44:assets%2Fgraphics%2F4x%2Fbackground-45-0.pngR2i6003746R3R4R5R105R6tgoR0y44:assets%2Fgraphics%2F4x%2Fbackground-46-0.pngR2i6887723R3R4R5R106R6tgoR0y44:assets%2Fgraphics%2F4x%2Fbackground-47-0.pngR2i7712803R3R4R5R107R6tgoR0y44:assets%2Fgraphics%2F4x%2Fbackground-48-0.pngR2i10049338R3R4R5R108R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-10-0.pngR2i96542R3R4R5R109R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-12-0.pngR2i551344R3R4R5R110R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-14-0.pngR2i12297R3R4R5R111R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-16-0.pngR2i8106R3R4R5R112R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-18-0.pngR2i8368R3R4R5R113R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-20-0.pngR2i491132R3R4R5R114R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-22-0.pngR2i493440R3R4R5R115R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-32-0.pngR2i19855R3R4R5R116R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-34-0.pngR2i13865R3R4R5R117R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-36-0.pngR2i9334R3R4R5R118R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-38-0.pngR2i9334R3R4R5R119R6tgoR0y39:assets%2Fgraphics%2F4x%2Fsprite-4-0.pngR2i339009R3R4R5R120R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-40-0.pngR2i23095R3R4R5R121R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-42-0.pngR2i8493R3R4R5R122R6tgoR0y40:assets%2Fgraphics%2F4x%2Fsprite-44-0.pngR2i8222R3R4R5R123R6tgoR0y39:assets%2Fgraphics%2F4x%2Fsprite-6-0.pngR2i68598R3R4R5R124R6tgoR0y39:assets%2Fgraphics%2F4x%2Fsprite-8-0.pngR2i28903R3R4R5R125R6tgoR0y36:assets%2Fgraphics%2Fdefault-font.fntR2i10791R3y4:TEXTR5R126R6tgoR0y36:assets%2Fgraphics%2Fdefault-font.pngR2i1736R3R4R5R128R6tgoR2i48900R3y5:SOUNDR5y27:assets%2Fsfx%2Fsound-27.mp3y9:pathGroupaR130y27:assets%2Fsfx%2Fsound-27.ogghR6tgoR2i12537R3R129R5y27:assets%2Fsfx%2Fsound-28.mp3R131aR133y27:assets%2Fsfx%2Fsound-28.ogghR6tgoR2i13164R3R129R5y27:assets%2Fsfx%2Fsound-29.mp3R131aR135y27:assets%2Fsfx%2Fsound-29.ogghR6tgoR2i13448R3R129R5R132R131aR130R132hgoR2i8883R3R129R5R134R131aR133R134hgoR2i9516R3R129R5R136R131aR135R136hgoR0y29:assets%2Fdata%2Fbehaviors.mbsR2i11904R3y6:BINARYR5R137R6tgoR0y24:assets%2Fdata%2Fgame.mbsR2i1491R3R138R5R139R6tgoR0y34:assets%2Fdata%2Finner-joystick.pngR2i879R3R4R5R140R6tgoR0y41:assets%2Fdata%2Finner-joystick%401.5x.pngR2i1792R3R4R5R141R6tgoR0y39:assets%2Fdata%2Finner-joystick%402x.pngR2i1946R3R4R5R142R6tgoR0y39:assets%2Fdata%2Finner-joystick%403x.pngR2i3990R3R4R5R143R6tgoR0y39:assets%2Fdata%2Finner-joystick%404x.pngR2i4344R3R4R5R144R6tgoR0y34:assets%2Fdata%2Fouter-joystick.pngR2i1951R3R4R5R145R6tgoR0y41:assets%2Fdata%2Fouter-joystick%401.5x.pngR2i4023R3R4R5R146R6tgoR0y39:assets%2Fdata%2Fouter-joystick%402x.pngR2i4480R3R4R5R147R6tgoR0y39:assets%2Fdata%2Fouter-joystick%403x.pngR2i9183R3R4R5R148R6tgoR0y39:assets%2Fdata%2Fouter-joystick%404x.pngR2i9836R3R4R5R149R6tgoR0y29:assets%2Fdata%2Fresources.mbsR2i6347R3R138R5R150R6tgoR0y27:assets%2Fdata%2Fscene-0.mbsR2i2954R3R138R5R151R6tgoR0y27:assets%2Fdata%2Fscene-0.scnR2i13R3R138R5R152R6tgoR0y26:assets%2Fdata%2Fscenes.mbsR2i90R3R138R5R153R6tgoR0y25:config%2Fgame-config.jsonR2i1367R3R127R5R154R6tgoR0y28:config%2Fpreloader-badge.pngR2i2558R3R4R5R155R6tgoR0y28:config%2Fpreloader-badge.txtR2i3456R3R127R5R156R6tgoR0y25:config%2FpreloadPaths.txtR2i1078R3R127R5R157R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
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
@:keep @:bind #if display private #end class __ASSET__assets_graphics_default_font_fnt extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_graphics_default_font_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_27_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_28_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_29_mp3 extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_27_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_28_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_sfx_sound_29_ogg extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_behaviors_mbs extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_game_mbs extends null { }
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
@:keep @:bind #if display private #end class __ASSET__assets_data_resources_mbs extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_scene_0_mbs extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_scene_0_scn extends null { }
@:keep @:bind #if display private #end class __ASSET__assets_data_scenes_mbs extends null { }
@:keep @:bind #if display private #end class __ASSET__config_game_config_json extends null { }
@:keep @:bind #if display private #end class __ASSET__config_preloader_badge_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep @:bind #if display private #end class __ASSET__config_preloader_badge_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__config_preloadpaths_txt extends null { }
@:keep @:bind #if display private #end class __ASSET__manifest_default_json extends null { }


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
@:keep @:file("Assets/sfx/sound-27.ogg") #if display private #end class __ASSET__assets_sfx_sound_27_ogg extends haxe.io.Bytes {}
@:keep @:file("Assets/sfx/sound-28.ogg") #if display private #end class __ASSET__assets_sfx_sound_28_ogg extends haxe.io.Bytes {}
@:keep @:file("Assets/sfx/sound-29.ogg") #if display private #end class __ASSET__assets_sfx_sound_29_ogg extends haxe.io.Bytes {}
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