class CfgVehicles {
    class NonStrategic;
    class GVAR(bush_base): NonStrategic {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 0;
        destrType = "DestructTent";
        icon = QPATHTOF(data\ui\mts_nature_ui_bush.paa);
        editorCategory = "EdCat_Environment";
        editorSubcategory = QGVAR(bush_faction);
    };

    class GVAR(plant_base): GVAR(bush_base) {
        icon = QPATHTOF(data\ui\mts_nature_ui_plant.paa);
        editorSubcategory = QGVAR(plant_faction);
    };

    class GVAR(tree_base): GVAR(bush_base) {
        destrType = "DestructTree";
        icon = QPATHTOF(data\ui\mts_nature_ui_tree.paa);
        editorSubcategory = QGVAR(tree_faction);
    };

    class GVAR(clutter_base): GVAR(bush_base) {
        icon = QPATHTOF(data\ui\mts_nature_ui_clutter.paa);
        editorSubcategory = QGVAR(clutter_faction);
    };

    class GVAR(grass_base): GVAR(bush_base) {
        icon = QPATHTOF(data\ui\mts_nature_ui_grass.paa);
        editorSubcategory = QGVAR(grass_faction);
    };

    // Only for BWC
    class Rocks_base_F;
    class GVAR(rock_base): Rocks_base_F {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 0;
        icon = QPATHTOF(data\ui\mts_nature_ui_rock.paa);
        accuracy = 1000;
    };

    #define BASE_ATTRIBUTES(NAME,MODELPATH) \
        scope = 2; \
        scopeCurator = 2; \
        model = MODELPATH##; \
        displayName = CSTRING(NAME); \
        editorPreview = QPATHTOF(data\editorpreview\NAME.jpg);

    #define BUSH(NAME,MODELPATH) \
    class NAME##: GVAR(bush_base) { \
        BASE_ATTRIBUTES(NAME,MODELPATH) \
    }

    #define PLANT(NAME,MODELPATH) \
    class NAME##: GVAR(plant_base) { \
        BASE_ATTRIBUTES(NAME,MODELPATH) \
    }

    #define TREE(NAME,MODELPATH) \
    class NAME##: GVAR(tree_base) { \
        BASE_ATTRIBUTES(NAME,MODELPATH) \
    }

    #define ROCK(NAME,MODELPATH) \
    class NAME##: GVAR(rock_base) { \
        scope = 2; \
        scopeCurator = 2; \
        model = MODELPATH##; \
        displayName = CSTRING(NAME); \
    }

    #define CLUTTER(NAME,MODELPATH) \
    class NAME##: GVAR(clutter_base) { \
        BASE_ATTRIBUTES(NAME,MODELPATH) \
    }

    #define GRASS(NAME,MODELPATH) \
    class NAME##: GVAR(grass_base) { \
        BASE_ATTRIBUTES(NAME,MODELPATH) \
    }

    #include "cfgvehicles\CfgVehicles_Bush.hpp"
    #include "cfgvehicles\CfgVehicles_Clutter.hpp"
    #include "cfgvehicles\CfgVehicles_Grass.hpp"
    #include "cfgvehicles\CfgVehicles_Plant.hpp"
    #include "cfgvehicles\CfgVehicles_Rock.hpp"
    #include "cfgvehicles\CfgVehicles_Tree.hpp"
};
