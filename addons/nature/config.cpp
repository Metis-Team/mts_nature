#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        #include "CfgPatchesUnits.hpp"
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_Enoch_Loadorder", "A3_Data_F_Mod_Loadorder"};
        author = "";
        authors[] = {"Timi007"};
        VERSION_CONFIG;
    };
};

#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
