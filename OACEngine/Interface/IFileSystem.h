#include <IBaseInterface.h>

namespace OAC
{

using fnReadFileCallback = void(*)(OACBuffer *output, uint64_t bytesRead, void *context);

using fnQueryFileSizeCallback = void(*)(uint64_t fileSize, void *context);

using OACFileHandle_t = void *;

class IFileSystem : public IBaseInterface
{
public:
    void Initialize() = 0;

    void Shutdown() = 0;

    //Synchronous API

    OACFileHandle_t Open(OACString_t *fileName) = 0;

    void Close(OACFileHandle_t handle) = 0;

    uint64_t Read(OACBuffer* output, uint64_t bytesToRead, OACFileHandle_t fileHandle) = 0;

    uint64_t QuerySize(OACFileHandle_t fileHandle) = 0;

    //Asynchronous API

    void AsyncRead(fnReadFileCallback callback, void *context, uint64_t bytesToRead, OACFileHandle_t fileHandle) = 0;

    void AsyncQuerySize(fnQueryFileSizeCallback callback, void *context, OACFileHandle_t fileHandle) = 0;
};

}