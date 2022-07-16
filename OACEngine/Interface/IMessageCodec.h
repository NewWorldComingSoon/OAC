#include <IBaseInterface.h>
#include <OACMessage.h>

namespace OAC
{
 
class IMessageEncodec : public IBaseInterface
{
public:
    void Initialize() = 0;

    void Shutdown() = 0;

    OACMessage* Parse(OACBuffer *buffer) = 0;

    void Serialize(OACMessage *message, OACBuffer *buffer) = 0;
};

}