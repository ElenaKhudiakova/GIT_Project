#ifdef _WIN32
#include <tchar.h>
#endif
#include <string>
//Заголовочный файл DLL
extern "C" __declspec(dllexport) int libmain();
extern "C" __declspec(dllexport) wchar_t* printFIO();
