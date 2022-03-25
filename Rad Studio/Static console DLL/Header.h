#ifdef _WIN32
#include <tchar.h>
#endif
#pragma once
#include <string>
//Комментарий
extern "C" __declspec(dllexport) int printGroup();
extern "C" __declspec(dllexport) void printFIO();
