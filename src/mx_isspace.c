#include "../inc/libmx.h" 
bool mx_isspace(int c)
{
    if (c == 32)
    {
        return true;
    }
    if (c == '\n')
    {
        return true;
    }
    if (c == '\t')
    {
        return true;
    }
    if (c == '\v')
    {
        return true;
    }
    if (c == '\f')
    {
        return true;
    }
    if (c == '\r')
    {
        return true;
    }
    else
    {
        return false;
    }
}
