#include <IBaseInterface.h>

namespace OAC
{

class IBasePlugin : public IBaseInterface
{
public:
    /* Will be called on initialize */
    void Initialize() = 0;

    /* Will be called on shutdown */
    void Shutdown() = 0;

    void OnNetworkMessage() = 0;
};

}