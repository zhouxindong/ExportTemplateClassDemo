#include "stdafx.h"
#include "ExportTemplateClassDemo.h"

// This is an example of an exported variable
EXPORTTEMPLATECLASSDEMO_API int nConsoleApplication6 = 0;

// This is an example of an exported function.
EXPORTTEMPLATECLASSDEMO_API int fnConsoleApplication6(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see ConsoleApplication6.h for the class definition
CConsoleApplication6::CConsoleApplication6()
{
	return;
}

string CConsoleApplication6::showme()
{
	return string("hello world");
}
