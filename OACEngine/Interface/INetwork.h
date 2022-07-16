#include <IBaseInterface.h>

namespace OAC
{

using fnOnConnectedCallback = void(*)(void *context);

using fnOnDisconnectedCallback = void(*)(QACString *reason, void *context);

using fnOnMessageCallback = void(*)(OACBuffer *buffer, void *context);

class INetwork : public IBaseInterface
{
public:
    void Initialize() = 0;

    //Block here until all sockets completely shutdown
    void Shutdown() = 0;

    /* Asynchronously connect to server */
    void Connect() = 0;

    /* Disconnect from server */
    void Disconnect() = 0;

    /* Call this every frame */
    void Poll() = 0;

    /* Send buffer bytes to server */
    void Send(OACBuffer *buffer, bool reilable) = 0;

    void RegisterOnConnectedCallback(const fnOnConnectedCallback &callback, void *context) = 0;

    void RegisterOnDisconnectedCallback(const fnOnDisconnectedCallback &callback, void *context) = 0;
    
    void RegisterOnMessageCallback(const fnOnMessageCallback &callback, void *context) = 0;
};

}