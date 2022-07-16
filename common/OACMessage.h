#include <OACBuffer.h>

namespace OAC
{

class OACMessage
{
public:
    virtual ~OACMessage() = 0;

    virtual void Release() = 0;

    virtual void Parse(OACBuffer *buffer) = 0;

    virtual void Serialize(OACBuffer *buffer) = 0;

    virtual int GetProtocolId() const = 0;

    virtual bool IsReportMessage() const = 0;
};

class OACReportMessage : public OACMessage
{
public:
    const int Qos_Unreliable = 0;
    const int Qos_Reliable = 1;
    const int Qos_Reliable_Once = 2;

    int GetQosLevel() const = 0;

    void Serialize(OACBuffer *buffer) = 0;

    virtual bool IsReportMessage() const
    {
        return true;
    }
};

}