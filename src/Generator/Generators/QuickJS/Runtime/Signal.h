// ----------------------------------------------------------------------------
// <auto-generated>
// This is autogenerated code by CppSharp.
// Do not edit this file or all your changes will be lost after re-generation.
// </auto-generated>
// ----------------------------------------------------------------------------
#pragma once

#include <quickjs.h>

class Signal
{
public:

    Signal();

    ~Signal();

    int connect(void (*function)());

    bool disconnect(int slot);

    bool isEmpty();
};
