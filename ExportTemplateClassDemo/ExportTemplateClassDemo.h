// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the EXPORTTEMPLATECLASSDEMO_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// EXPORTTEMPLATECLASSDEMO_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef EXPORTTEMPLATECLASSDEMO_EXPORTS
#define EXPORTTEMPLATECLASSDEMO_API __declspec(dllexport)
#define EXPIMP_TEMPLATE __declspec(dllexport)
#else
#define EXPORTTEMPLATECLASSDEMO_API __declspec(dllimport)
#define EXPIMP_TEMPLATE
#endif

#include <iostream>
#include <string>
using namespace std;

// This class is exported from the ConsoleApplication6.dll
class EXPORTTEMPLATECLASSDEMO_API CConsoleApplication6 {
public:
	CConsoleApplication6(void);
	string showme();
	// TODO: add your methods here.
};

extern EXPORTTEMPLATECLASSDEMO_API int nConsoleApplication6;

EXPORTTEMPLATECLASSDEMO_API int fnConsoleApplication6(void);


// This class is exported from the ExportTemplateClassDemo.dll
template <typename T>
class EXPIMP_TEMPLATE ClassA {
public:
	T add(T val1, T val2);
};

template <typename T>
T ClassA<T>::add(T val1, T val2) {
	return val1 + val2;
}

