//------------------------------ gpMenuActionsExecutor.h ------------------------------

#ifndef __gpMenuActionsExecutor_H
#define __gpMenuActionsExecutor_H

// Infra:
#include <AMDTApplicationFramework/Include/afActionExecutorAbstract.h>


/// Enumeration for thread profile menu actions
enum gpMainMenuItemCommands
{
    ID_GP_START = 0,
    ID_GP_CAPTURE,
    ID_GP_STOP,
    ID_GP_REFRESH_FROM_SERVER,
    ID_GP_MODE,
    ID_GP_SETTINGS,
    gpAmountOfMainMenuCommands = ID_GP_SETTINGS
};

class gpExecutionMode;

// ----------------------------------------------------------------------------------
// Class Name:           AMDTGpuProfiling/ : public afActionExecutorAbstract
// General Description:  Use this class to add menu actions related to the thread profile
// ----------------------------------------------------------------------------------
class gpMenuActionsExecutor : public afActionExecutorAbstract
{
public:
    gpMenuActionsExecutor(void);
    ~gpMenuActionsExecutor(void);

    // Virtual functions that needs to be implemented:

    // Get the caption of the action item:
    virtual bool actionText(int actionIndex, gtString& caption, gtString& tooltip, gtString& keyboardShortcut);

    // Menu position.
    // Each hierarchy on the ,emu include name/priority.
    // If separator is needed after the item then 's' after the priority is needed
    // in case of a sub menu if one item is marked with an 's' it is enough to mark a separator after it:
    virtual gtString menuPosition(int actionIndex, afActionPositionData& positionData);

    // Toolbar position. separators are defined by "/":
    // Position is defined as in menus:
    virtual gtString toolbarPosition(int actionIndex);

    // Handle the action when it is triggered:
    virtual void handleTrigger(int actionIndex);

    // Handle UI update:
    virtual void handleUiUpdate(int actionIndex);

    // Get the group command ids for the action:
    virtual void groupAction(int actionIndex);

    // Utilities (override this function is one of the actions has an icon):
    virtual void initActionIcons();

protected:

    // Each derived class must populate the vector of supported command Ids
    virtual void populateSupportedCommandIds();

protected:

    /// A pointer to the mode manager
    gpExecutionMode* m_pModeManager;

};

#endif //__gpMenuActionsExecutor_H

