#include <IBaseInterface.h>

namespace OAC
{

class IEngine : public IBaseInterface
{
public: 
    void Initialize() = 0;

    void Shutdown() = 0;

    /* Call this if load as a dedicated service */
    void RunService() = 0;

    /* Call this in main frame loop */
    void RunFrame() = 0;
};

}