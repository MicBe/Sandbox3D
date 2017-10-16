#include "StringHelper.h"

StringHelper::StringHelper(const std::string& str) :m_string(str.c_str())
{}

StringHelper::operator const char**()
{
    return &m_string;
}
