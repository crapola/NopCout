/*
	Including this file turns cout into no-op.
*/
#pragma once
#include <iostream>

namespace std
{
struct NopCout
{
	NopCout& operator<<(const char*)
	{
		return *this;
	}
	NopCout& operator<<(std::ostream&(*)(std::ostream&))
	{
		return *this;
	}
	template<class T>
	NopCout& operator<<(T)
	{
		return *this;
	}
} nopcout;
}

#define cout nopcout
