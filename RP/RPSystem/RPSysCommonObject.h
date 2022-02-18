#ifndef RP_SYSTEM_COMMON_OBJECT_H
#define RP_SYSTEM_COMMON_OBJECT_H
#include "types_RP.h"

#include "IRPGrpDrawObject.h"

/**
 * Seems to provide common draw functionality to objects,
 * considering it has no additional functionality.
 * @wfuname
 */
class RPSysCommonObject : IRPGrpDrawObject
{
public:
    //! @address 80187dbc
    RPSysCommonObject();
    //! @address 80187f24
    virtual ~RPSysCommonObject();
    /**
     * Draws scene fader, pause mgr, etc.
     * @address 80187c10
     */
    virtual void UserDraw();
};

#endif