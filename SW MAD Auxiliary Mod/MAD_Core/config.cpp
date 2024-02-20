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
            "TWSS_Katarn_Uniform",
            "TWSS_Katarn_Helmet",
        };
        units[]=
        {
            "SWMADUnit_Wulfsige_Base",
            "SWMADUnit_CIS_Base",
            "SWMADUnit_TWSS_Base",
            "SWMADUnit_Empire_Base",
            "Wulfsige_Katarn_Backpack_Sev",
            "TWSS_Katarn_Backpack",
        };
    };
};


class CfgWeapons
{                                   
    class 3AS_H_Katarn_Helmet_Sev;  // -- All pulled from 3AS Characters
    class 3AS_V_Katarn_Vest_Demo;
    class 3AS_V_Katarn_Vest_Sniper;
    class 3AS_V_Katarn_Vest_Tech;    
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
        };
    };


    //Vests
    class Wulfsige_Katarn_Vest_Demo: 3AS_V_Katarn_Vest_Demo
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Vest Demo (Wulfsige)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\Wulfsige_Katarn_Vest_Demo_CO.paa",
        };
    };

    class Wulfsige_Katarn_Vest_Sniper: 3AS_Katarn_Vest_Sniper
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

    //Uniforms
    class Wulfsige_Katarn_Armor_Sev: 3AS_U_Rep_Katarn_Armor_Sev
    {
        author = "Queen";
        scope = 2;
        displayName "[SWMAD] Katarn Uniform (Wulfsige)";
        class ItemInfo: UniformItem
        {
            uniformClass = "SWMADUnit_Wulfsige_Base";
        };
    };
};

class CfgVehicles
{
    class 3AS_Rep_Commando_base_F; // 3AS_Characters
    class 3AS_B_Katarn_Backpack_Sev;

    //Backpacks
    class Wulfsige_Katarn_Backpack_Sev: 3AS_B_Katarn_Backpack_Sev
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Katarn Backpack (Wulfsige)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\backpacks\Wulfsige_Katarn_Backpack_CO.paa",
        };
    };
    
    //Units

    class SWMADUnit_Wulfsige_Base: 3AS_Rep_Commando_base_F
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] Wulfsige Base";
        uniformClass = "Wulfsige_Katarn_Uniform_Sev";
        backpack = "Wulfsige_Katarn_Backpack_Sev";
        hiddenSelectionsTextures[]=
        {
            "\MAD_Core\data\uniforms\Wulfsige_Uniform_Katarn_CO.paa",
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

    class SWMADUnit_TWSS_Base: 3AS_Rep_Commando_base_F
    {
        author = "Queen";
        scope = 2;
        displayName = "[SWMAD] TWSS Trooper";
        uniformClass = "TWSS_Katarn_Uniform";
        backpack = "TWSS_Katarn_Backpack";
        hiddenSelectionsTextures[] = 
        {
            "\MAD_Core\data\uniforms\TWSS_Katarn_Uniform_CO.paa",
        };
        linkedItems[] = 
        {
            "TWSS_Katarn_Helmet",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        };

        respawnLinkedItems[]=
		{
			"TWSS_Katarn_Helmet",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
    };
    class SWMADUnit_TWSS_NCO: SWMADUnit_TWSS_Base
    {
        displayName = "[SWMAD] TWSS NCO";
        uniformClass = "TWSS_Katarn_Uniform_Fixer";
        backpack = "TWSS_Katarn_Backpack_Fixer";
        hiddenSelectionsTextures[] = 
        {
            "\MAD_Core\data\uniforms\TWSS_Katarn_Uniform_Fixer_CO.paa",
        };
        linkedItems[] = 
        {
            "TWSS_Katarn_Helmet_Fixer",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        }
        respawnLinkedItems[] = 
        {
            "TWSS_Katarn_Helmet_Fixer",
            "ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
        }
    }
};