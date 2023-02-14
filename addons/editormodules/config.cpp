#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QGVAR(moduleAddSignalSource)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"crowsEW_main"};
        author = "Crowdedlight";
        VERSION_CONFIG;
    };
};

#include "CfgEventhandlers.hpp"
#include "CfgFactionClasses.hpp"
#include "CfgVehicles.hpp"
