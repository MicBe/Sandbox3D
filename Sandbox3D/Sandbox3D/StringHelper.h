#pragma once

#include <string>

class StringHelper
{
public:
    StringHelper(const std::string& str);
    operator const char**();

private:
    const char* m_string;
};

