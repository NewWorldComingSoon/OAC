#include <IBaseInterface.h>
#include <OACMessage.h>

namespace OAC
{

const int AlertLevel_Log = 1;
const int AlertLevel_Info = 2;
const int AlertLevel_Warning = 3;
const int AlertLevel_Error = 4;

using fnOnAlertCallback = void(*)(int level, int code, const char *msg, const char **argv, int argc, void *context);

class IAlerter : public IBaseInterface
{
public:
    void Alert(int level, int code, const char *msg, const char **argv, int argc) = 0;

    void RegisterOnAlertCallback(const fnOnAlertCallback &callback, void *context) = 0;
};

}