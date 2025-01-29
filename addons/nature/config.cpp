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

// Add version checks if CBA is loaded
class CfgSettings {
    class CBA {
        class Versioning {
            class ADDON {
                main_addon = QUOTE(ADDON);
            };
        };
    };
};

#include "CfgEditorCategories.hpp"
#include "CfgVehicles.hpp"
