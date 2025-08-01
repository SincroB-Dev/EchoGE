#include "serializable.h"

const std::vector<FieldDescriptor> &Serializable::GetFields() const
{
    return _fields;
}

void Serializable::AddField(void *ptr, const char *name, const std::type_info &type, size_t size)
{
    _fields.emplace_back(name, ptr, type, size);
}