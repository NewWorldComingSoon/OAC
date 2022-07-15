namespace OAC
{

class OACBuffer
{
public:
    virtual ~OACBuffer() = 0;

    bool Alloc(size_t bytesCount) = 0;

    bool GetSpace(size_t bytesCount) = 0;

    void Release() = 0;

    void *GetRawPtr(void) const = 0;

    void BeginAccess() = 0;

    void EndAccess() = 0;

    bool IsAccessable() const = 0;
};

}