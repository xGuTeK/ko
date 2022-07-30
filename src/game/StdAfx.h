// StdAfx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#pragma warning(disable:4786)

#pragma once


#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers
#include <Windows.h>

#include <string>
#include <sstream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <functional>
#include <io.h>

#include "N3Base/My_3DStruct.h"

#if defined(_DEBUG)
#define TRACE(fmt, ...) printf(fmt, __VA_ARGS__)
#else
#define TRACE(fmt, ...) (void)fmt
#endif

