#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        #include "CfgPatchesUnits.hpp"
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3_Data_F_Enoch_Loadorder", "A3_Data_F_Mod_Loadorder"};
        author = CSTRING(authors);
        url = CSTRING(URL);
        VERSION_CONFIG;
    };
};

class CfgSettings {
    class CBA {
        class Versioning {
            class ADDON {
                main_addon = QUOTE(ADDON);
                class dependencies {
                    CBA[] = {"cba_main", REQUIRED_CBA_VERSION, "true"};
                };
            };
        };
    };
};

#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
