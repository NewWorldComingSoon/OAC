namespace OAC
{

#define INTERFACE_PACKED_ID(name, index, ver) const int InterfaceID_##name = ((index << 3) | ver)

}