#include <IBaseInterface.h>

namespace OAC
{

class IDispatcher : public IBaseInterface
{
public:
    void Initialize(int numWorkers) = 0;

    /* Block here until all workers completely shutdown */
    void Shutdown() = 0;

    /* Dispatch a job to worker thread */
    void Dispatch(IDispatchable *job) = 0;
};

}