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
            "Wulfsige_Katarn_Backpack_Sev",
            "Wulfsige_Katarn_Helmet_Sev",
            "Wulfsige_Katarn_Vest_Demo",
            "Wulfsige_Katarn_Vest_Sniper",
            "Wulfsige_Katarn_Vest_Tech",
            "Wulfsige_Katarn_Uniform_Sev",
        };
        units[]=
        {
            "MADUnit_Base",
            "MadUnit_Wulfsige_Sev",
        };
    };
};


class CfgWeapons
{
    class 3AS_B_Katarn_Backpack_Sev; // -- All pulled from 3AS Characters
    class 3AS_H_Katarn_Helmet_Sev;
    class 3AS_V_Katarn_Vest_Demo;
    class 3AS_V_Katarn_Vest_Sniper;
    class 3AS_V_Katarn_Vest_Tech;    // --

    class Wulfsige_Katarn_Backpack_Sev: 3AS_B_Katarn_Backpack_Sev
    {
        author = "Queen";
        scope = 2;
        displayName = "[MAD] Katarn Backpack (TWSS)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\backpacks\Wulfsige_Katarn_Backpack_CO.paa"
        };
    };

    class Wulfsige_Katarn_Helmet_Sev: 3AS_H_Katarn_Helmet_Sev
    {
        author = "Queen";
        scope = 2;
        displayName = "[MAD] Katarn Helmet (TWSS)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\helmets\Wulfsige_Katarn_Helmet_Sev_CO.paa",
        };
    };

    class Wulfsige_Katarn_Vest_Demo: 3AS_V_Katarn_Vest_Demo
    {
        author = "Queen";
        scope = 2;
        displayName = "[MAD] Katarn Vest Demo (TWSS)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\Wulfsige_Katarn_Vest_Demo_CO.paa",
        };
    };

    class Wulfsige_Katarn_Vest_Sniper: 3AS_Katarn_Vest_Sniper
    {
        author = "Queen";
        scope = 2;
        displayName = "[MAD] Katarn Vest Sniper (TWSS)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\Wulfsige_Katarn_Vest_Sniper_CO.paa",
        };
    };
    
    class Wulfsige_Katarn_Vest_Tech: 3AS_V_Katarn_Vest_Tech
    {
        author = "Queen";
        scope = 2;
        displayName = "[MAD] Katarn Vest Tech (TWSS)";
        hiddenSelectionsTextures[]=
        {
            "MAD_Core\data\vests\Wulfsige_Katarn_Vest_Tech_CO.paa";
        };
    };
};
