class CfgPatches 
{
    class MAD_Core
    {
        author = "Queen";
        requiredAddons[]=
        {
            "3AS_Characters",
        };
        weapons[]=
        {
            "Wulfsige_Katarn_Helmet_Sev",
            "Wulfsige_Katarn_Vest_Demo",
            "Wulfsige_Katarn_Vest_Sniper",
            "Wulfsige_Katarn_Vest_Tech",
            "Wulfsige_Katarn_Uniform_Sev",
            "LWSS_Katarn_Uniform",
            "LWSS_Katarn_Uniform_Fixer",
            "LWSS_Katarn_Uniform_Boss",
            "LWSS_Katarn_Uniform_Scorch",
            "LWSS_Katarn_Vest_Boss",
            "LWSS_Katarn_Helmet",
            "LWSS_Katarn_Helmet_Fixer",
            "LWSS_Katarn_Helmet_Boss",
            "LWSS_Katarn_Helmet_Scorch",
        };
        units[]=
        {
            "SWMADUnit_Wulfsige_Base",
            "SWMADUnit_LWSS_Base",
            "SWMADUnit_LWSS_Medic",
            "SWMADUnit_LWSS_NCO",
            "SWMADUnit_LWSS_Officer",
            "Wulfsige_Katarn_Backpack_Sev",
            "LWSS_Katarn_Backpack",
            "LWSS_Katarn_Backpack_Fixer",
            "LWSS_Katarn_Backpack_Boss",
            "LWSS_Katarn_Backpack_Scorch",
        };
    };
};

class cfgFactionClasses
{
    class SWMAD_CIS
    {
        displayName = "[SWMAD] CIS";
    };
};

class CfgEditorSubcategories
{
    class SWMAD_Subcategory_VIPs
    {
        displayName = "VIP's";
    }
    class SWMAD_Subcategory_LWSS
    {
        displayName = "Loth-Wolf Sec. Solutions";
    }
    class SWMAD_Subcategory_Walkers
    {
        displayName = "Walkers";
    };
    class SWMAD_Subcategory_Dropships
    {
        displayName = "Dropships";
    };
    class SWMAD_Subcategory_APCs
    {
        displayName = "APC's";
    };
};


class CfgWeapons
{                                   
    class 3AS_H_Katarn_Helmet_Sev;  // -- All pulled from 3AS_Characters\3AS_Characters_Commando
    class 3AS_V_Katarn_Vest_Demo;
    class 3AS_V_Katarn_Vest_Sniper;
    class 3AS_V_Katarn_Vest_Tech;    
    class 3AS_Katarn_Vest_Team_Leader_Boss;
    class 3AS_H_Katarn_Helmet;
    class 3AS_H_Katarn_Helmet_Boss;
    class 3AS_H_Katarn_Helmet_Fixer;
    class 3AS_H_Katarn_Helmet_Scorch; 
    class 3AS_U_Rep_Katarn_Armor;
    class 3AS_U_Rep_Katarn_Armor_Scorch;
    class 3AS_U_Rep_Katarn_Armor_Boss;
    class 3AS_U_Rep_Katarn_Armor_Fixer;
    class 3AS_U_Rep_Katarn_Armor_Sev; // --

    class uniformItem; //base arma class


    //Helmets
    class Wulfsige_Katarn_Helmet_Sev: 3AS_H_Katarn_Helmet_Sev
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Helmet (Wulfsige)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\helmets\Wulfsige_Katarn_Helmet_Sev_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"
        };
    };
    class LWSS_Katarn_Helmet: 3AS_H_Katarn_Helmet
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Helmet (LWSS)";
        hiddenSelectionsTextures[]= 
        {
            "\MAD_Core\data\helmets\LWSS_Katarn_Helmet_Standard_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"
        };
    };
    class LWSS_Katarn_Helmet_Boss: 3AS_H_Katarn_Helmet_Boss
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Helmet Officer (LWSS)";
        hiddenSelectionsTextures[]= 
        {
            "\MAD_Core\data\helmets\LWSS_Katarn_Helmet_Boss_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"
        };
    };
    class LWSS_Katarn_Helmet_Fixer: 3AS_H_Katarn_Helmet_Fixer
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Helmet NCO (LWSS)";
        hiddenSelectionsTextures[]= 
        {
            "\MAD_Core\data\helmets\LWSS_Katarn_Helmet_Fixer_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"
        };
    };
    class LWSS_Katarn_Helmet_Scorch: 3AS_H_Katarn_Helmet_Scorch
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Helmet Medic (LWSS)";
        hiddenSelectionsTextures[]= 
        {
            "\MAD_Core\data\helmets\LWSS_Katarn_Helmet_Scorch_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Helmet_Standard_CO.paa"
        };
    };


    //Vests
    class Wulfsige_Katarn_Vest_Demo: 3AS_V_Katarn_Vest_Demo
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Vest Demo (Wulfsige)";
        hiddenSelections[]=
        {
            "camo",
        };
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\Wulfsige_Katarn_Vest_Demo_CO.paa",
        };
    };

    class Wulfsige_Katarn_Vest_Sniper: 3AS_V_Katarn_Vest_Sniper
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Vest Sniper (Wulfsige)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\Wulfsige_Katarn_Vest_Sniper_CO.paa",
        };
    };
    
    class Wulfsige_Katarn_Vest_Tech: 3AS_V_Katarn_Vest_Tech
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Vest Tech (Wulfsige)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\Wulfsige_Katarn_Vest_Tech_CO.paa",
        };
    };

    class LWSS_Katarn_Vest_Boss: 3AS_Katarn_Vest_Team_Leader_Boss
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Vest Officer";
        hiddenSelectionsTextures[]=
        {
            "\MAD_Core\data\vests\LWSS_Katarn_Vest_Team_Leader_Boss_CO";
        };
    };
    class LWSS_Katarn_Vest_Tech: 3AS_V_Katarn_Vest_Tech
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Vest Tech (LWSS)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\LWSS_Katarn_Vest_Tech_CO.paa",
        };
    };
    class LWSS_Katarn_Vest_Demo: 3AS_V_Katarn_Vest_Demo
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Vest Demo (LWSS)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\LWSS_Katarn_Vest_Demo_CO.paa",
        };
    };

    //Uniforms
    class Wulfsige_Katarn_Uniform_Sev: 3AS_U_Rep_Katarn_Armor_Sev
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Uniform (Wulfsige)";
        class ItemInfo: UniformItem
        {
            uniformClass = "SWMADUnit_Wulfsige_Base";
        };
    };
    class LWSS_Katarn_Uniform: 3AS_U_Rep_Katarn_Armor
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Uniform (LWSS)";
        class ItemInfo: UniformItem
        {
            uniformClass = "SWMADUnit_LWSS_Base";
        };   
    };
    class LWSS_Katarn_Uniform_Fixer: 3AS_U_Rep_Katarn_Armor_Fixer
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Uniform NCO (LWSS)";
        class ItemInfo: UniformItem
        {
            uniformClass = "SWMADUnit_LWSS_NCO";
        };   
    };
    class LWSS_Katarn_Uniform_Boss: 3AS_U_Rep_Katarn_Armor_Boss
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Uniform Officer (LWSS)";
        class ItemInfo: UniformItem
        {
            uniformClass = "SWMADUnit_LWSS_Officer";
        };   
    };
    class LWSS_Katarn_Uniform_Scorch: 3AS_U_Rep_Katarn_Armor_Scorch
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Uniform Medic (LWSS)";
        class ItemInfo: UniformItem
        {
            uniformClass = "SWMADUnit_LWSS_Medic";
        };   
    };
};

class CfgVehicles
{
    class 3AS_Rep_Commando_base_F; // 3AS_Characters\3AS_Characters_Commando 
    class 3AS_B_Katarn_Backpack_Sev;
    class 3AS_B_Katarn_Backpack;
    class 3AS_B_Katarn_Backpack_Boss;
    class 3AS_B_Katarn_Backpack_Fixer;
    class 3AS_B_Katarn_Backpack_Scorch;
    class 3AS_Rep_Commando_Sev;

    //Backpacks
    class Wulfsige_Katarn_Backpack_Sev: 3AS_B_Katarn_Backpack_Sev
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Backpack (Wulfsige)";
        hiddenSelectionsTextures[]=
        {
            "\MAD_Core\data\backpacks\Wulfsige_Katarn_Backpack_Sev_CO.paa",
        };
    };
    class LWSS_Katarn_Backpack: 3AS_B_Katarn_Backpack
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Backpack (LWSS)";
        hiddenSelectionsTextures[]=
        {
            "\MAD_Core\data\backpacks\LWSS_Katarn_Backpack_Standard_CO.paa",
        };
    };
    class LWSS_Katarn_Backpack_Boss: 3AS_B_Katarn_Backpack_Boss
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Backpack Officer (LWSS)";
        hiddenSelectionsTextures[] = 
        {
            "\MAD_Core\data\backpacks\LWSS_Katarn_Backpack_Boss_CO.paa",
        };
    };
    class LWSS_Katarn_Backpack_Fixer: 3AS_B_Katarn_Backpack_Fixer
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Backpack NCO (LWSS)";
        hiddenSelectionsTextures[] = 
        {
            "\MAD_Core\data\backpacks\LWSS_Katarn_Backpack_Fixer_CO.paa";
        };

    };
    class LWSS_Katarn_Backpack_Scorch: 3AS_B_Katarn_Backpack_Scorch
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Backpack Medic (LWSS)";
        hiddenSelectionsTextures[] =
        {
            "\MAD_Core\data\backpacks\LWSS_Katarn_Backpack_Scorch_CO.paa",
        };
    };
    // Base Units 

    class SWMADUnit_Wulfsige_Base: 3AS_Rep_Commando_Sev
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Wulfsige";
        uniformClass = "Wulfsige_Katarn_Uniform_Sev";
        backpack = "Wulfsige_Katarn_Backpack_Sev";
        faction = "SWMAD_CIS";
        side = 2;
        editorSubcategory = "SWMAD_Subcategory_VIPs";
        hiddenSelectionsTextures[]=
        {
            "\MAD_Core\data\uniforms\Wulfsige_Katarn_Uniform_Sev_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
        };
        linkedItems[]=
        {
            "Wulfsige_Katarn_Helmet_Sev",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio",
        };

    };

    class SWMADUnit_LWSS_Base: 3AS_Rep_Commando_base_F
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] LWSS Commando";
        uniformClass = "LWSS_Katarn_Uniform";
        backpack = "LWSS_Katarn_Backpack";
        faction = "SWMAD_CIS";
        editorSubcategory = "SWMAD_Subcategory_LWSS";
        side = 2;
        hiddenSelectionsTextures[] = 
        {
            "\MAD_Core\data\uniforms\LWSS_Katarn_Uniform_Standard_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
        };
        linkedItems[] = 
        {
            "LWSS_Katarn_Helmet",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        };

        respawnLinkedItems[]=
		{
			"LWSS_Katarn_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
    };
    //LWSS units
    
    class SWMADUnit_LWSS_NCO: SWMADUnit_LWSS_Base
    {
        displayName = "[SWMAD] LWSS Commando NCO";
        uniformClass = "LWSS_Katarn_Uniform_Fixer";
        backpack = "LWSS_Katarn_Backpack_Fixer";
        hiddenSelectionsTextures[] = 
        {
            "\MAD_Core\data\uniforms\LWSS_Katarn_Uniform_Fixer_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
        };
        linkedItems[] = 
        {
            "LWSS_Katarn_Helmet_Fixer",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        };
        respawnLinkedItems[] = 
        {
            "LWSS_Katarn_Helmet_Fixer",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        };
    };
    class SWMADUnit_LWSS_Officer: SWMADUnit_LWSS_Base
    {
        displayName = "[SWMAD] LWSS Commando Officer";
        uniformClass = "LWSS_Katarn_Uniform_Boss";
        backpack = "LWSS_Katarn_Backpack_Boss";
        hiddenSelectionsTextures[]=
        {
            "\MAD_Core\data\uniforms\LWSS_Katarn_Uniform_Boss_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
        };
        linkedItems[]=
        {
            "LWSS_Katarn_Helmet_Boss",
            "LWSS_Katarn_Vest_Boss",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "LWSS_Katarn_Helmet_Boss",
            "LWSS_Katarn_Vest_Boss",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        };
    };
    class SWMADUnit_LWSS_Medic: SWMADUnit_LWSS_Base
    {
        displayName = "[SWMAD] LWSS Commando Medic";
        uniformClass = "LWSS_Katarn_Uniform_Scorch";
        backpack = "LWSSS_Katarn_Backpack_Scorch";
        hiddenSelectionsTextures[]=
        {
            "\MAD_Core\data\uniforms\LWSS_Katarn_Uniform_Scorch_CO.paa",
            "\3AS\3AS_Characters\Commando\data\Katarn_Undersuit_CO.paa"
        };
        linkedItems[] = 
        {
            "LWSS_Katarn_Helmet_Scorch",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        };
        respawnLinkedItems[] = 
        {
            "LWSS_Katarn_Helmet_Scorch",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        };
    };
    
};