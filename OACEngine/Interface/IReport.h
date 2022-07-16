#include <IBaseInterface.h>
#include <OACMessage.h>

namespace OAC
{

/* return false to block the data from report */
using fnOnBeforeReportCallback = bool(*)(OACReportMessage *data, void *context);

using fnOnAfterReportCallback = void(*)(OACReportMessage *data, void *context);

class IReport : public IBaseInterface
{
public:
    void Report(OACReportMessage *data) = 0;

    void RegisterOnBeforeReportCallback(const fnOnBeforeReportCallback &callback, void *context) = 0;

    void RegisterOnAfterReportCallback(const fnOnAfterReportCallback &callback, void *context) = 0;
};

}