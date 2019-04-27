// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the EXPORTTEMPLATECLASSDEMO_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// EXPORTTEMPLATECLASSDEMO_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef EXPORTTEMPLATECLASSDEMO_EXPORTS
#define EXPORTTEMPLATECLASSDEMO_API __declspec(dllexport)
#else
#define EXPORTTEMPLATECLASSDEMO_API __declspec(dllimport)
#endif

// This class is exported from the ExportTemplateClassDemo.dll
class EXPORTTEMPLATECLASSDEMO_API CExportTemplateClassDemo {
public:
	CExportTemplateClassDemo(void);
	// TODO: add your methods here.
};

extern EXPORTTEMPLATECLASSDEMO_API int nExportTemplateClassDemo;

EXPORTTEMPLATECLASSDEMO_API int fnExportTemplateClassDemo(void);
