// ExportTemplateClassDemo.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "ExportTemplateClassDemo.h"


// This is an example of an exported variable
EXPORTTEMPLATECLASSDEMO_API int nExportTemplateClassDemo=0;

// This is an example of an exported function.
EXPORTTEMPLATECLASSDEMO_API int fnExportTemplateClassDemo(void)
{
    return 42;
}

// This is the constructor of a class that has been exported.
// see ExportTemplateClassDemo.h for the class definition
CExportTemplateClassDemo::CExportTemplateClassDemo()
{
    return;
}
