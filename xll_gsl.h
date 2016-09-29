#pragma once
#include "../xll12/xll/xll.h"

#ifdef _T
#undef _T
#endif

#define _T(x) L##x

#ifndef CATEGORY
#define CATEGORY L"GSL"
#endif