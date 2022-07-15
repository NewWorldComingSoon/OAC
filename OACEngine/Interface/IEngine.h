#include <IBaseInterface.h>

namespace OAC
{

class IEngine : public IBaseInterface
{
public:
    /* Call this if load as a dedicated service */
    void RunService(void) = 0;

    /* Call this in main frame loop */
    void RunFrame(void) = 0;
};

}