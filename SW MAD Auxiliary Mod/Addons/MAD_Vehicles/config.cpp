class CfgPatches
{
    class MAD_Vehicles
    {
        author = "Queen";
        requiredAddons[] =
        {
            "3AS_ATAT",
            "3AS_ATTE",
            "MEOP_vehicles",
        };
        weapons[] = {};
        units[] = 
        {
            "SWMAD_CIS_ATAT",
            "SWMAD_LWSS_Kodiak",
            "SWMAD_Kodiak",
        };
    };
};

class CfgVehicles
{
    class 3AS_ATAT_Base; //Pulled from 3AS ATAT
    class MEOP_veh_kodiak_cerb; // MEOP_Vehicles --
    class MEOP_veh_kodiak_base;
    class mako1_base_F;
    class C_mako1_cerb_F; // -- 

    class SWMAD_CIS_ATAT: 3AS_ATAT_Base
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] CIS AT-AT";
        faction = "SWMAD_CIS";
        editorSubcategory = "SWMAD_Subcategory_Walkers";
        hiddenSelections[] = 
        {
            "camo1",
            "camo2",
            "camo3",
            "camo4",
            "camo5"
        };
        hiddenSelectionsTextures[] = 
        {
            "MAD_Vehicles\data\atat\CIS_ATAT_body_co.paa",
			"3as\3as_atat\data\atat_leg_co.paa",
			"MAD_Vehicles\data\atat\CIS_ATAT_head_co.paa",
			"3as\3as_atat\data\atat_int_co.paa",
			"3as\3as_atat\data\atat_cabin_co.paa"
        };
    };
    class SWMAD_Kodiak: MEOP_veh_kodiak_base
    {
        author = "Queen";
        scope = 0;
        displayName = "[SWMAD] LWSS Kodiak";
        side = 2;
        faction = "SWMAD_CIS";
        editorSubcategory = "SWMAD_Subcategory_Dropships";
        class TextureSources
        {
            class LWSS
            {
                displayName = "LWSS";
                author = "Wulfsige";
                textures[]=
                {
                    "MAD_Vehicles\data\kodiak\CIS_Kod_back_cer_co.paa",
			        "MAD_Vehicles\data\kodiak\CIS_Kod_front_cer_co.paa"
                };
            };
            factions[] = 
            {
                "SWMAD_CIS";
            };
        };
        textureList[] = 
        {
            "LWSS", 1,
        };
        
        
/*         hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"MAD_Vehicles\data\kodiak\CIS_Kod_back_cer_co.paa",
			"MAD_Vehicles\data\kodiak\CIS_Kod_front_cer_co.paa"
		}; */
    };

    class SWMAD_LWSS_Kodiak: SWMAD_Kodiak
    {
        author = "Queen";
        _generalMacro = "SWMAD_LWSS_Kodiak";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWMAD] LWSS UT-47 Kodiak";
        textureList[] = 
        {
            "LWSS", 1,
        };
        
    };

    class SWMAD_Mako: mako1_base_F
    {
        author = "Queen";
        scope = 0;
        side = 2;
        displayName = "[SWMAD]  Mako";
        faction = "SWMAD_CIS";
        editorSubcategory = "EdSubcat_APCs";
        class TextureSources
        {
            class LWSS 
            {
                displayName = "LWSS";
                author = "Wulfsige";
                textures[]=
                {
                    "\MAD_Vehicles\data\mako\CIS_bodyCerb_m35_co.paa",
			        "\MAD_Vehicles\data\mako\CIS_gun_co.paa"
                };
                factions[] = 
                {
                    "SWMAD_CIS"
                };
            };
        };
        textureList[] = 
        {
            "LWSS", 1,
        };
/*         hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MAD_Vehicles\data\mako\CIS_bodyCerb_m35_co.paa",
			"\MAD_Vehicles\data\mako\CIS_gun_co.paa"
		}; */
    };
    class SWMAD_LWSS_Mako: SWMAD_Mako
    {
        author = "Queen";
        scope = 2;
        scopeCurator = 2;
        displayName = "[SWMAD] LWSS Mako";
        textureList[] = 
        {
            "LWSS", 1,
        };
        hiddenSelectionsTextures[]=
		{
			"\MAD_Vehicles\data\mako\CIS_bodyCerb_m35_co.paa",
			"\MAD_Vehicles\data\mako\CIS_gun_co.paa"
		};
        
    };
/*     class SWMAD_CIS_ATTE: 3AS_ATTE_Base
    {
        author = "Queen";
        scope - 2;
        hiddenselections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4",
			"camo5",
			"camo11"
		};
		hiddenselectionstextures[]=
		{
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Shell_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Cockpit_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Detail_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Legs_co.paa",
			"3as\3AS_ATTE\data\Textures\3AS_ATTE_Glass_ca.paa",
			"3as\3as_atte\data\textures\3as_atte_armor_co.paa"
		};
    } */

};
