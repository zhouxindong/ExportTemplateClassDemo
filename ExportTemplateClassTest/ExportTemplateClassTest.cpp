// ExportTemplateClassTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ExportTemplateClassDemo.h"
#include <iostream>
using namespace std;

int main()
{
	ClassA<int> cai;
	auto sum = cai.add(3, 4);
	cout << "ClassA::add(3, 4) = " << sum << endl;
	cout << nConsoleApplication6 << endl;
	cout << "fnConsoleApplication6() = " << fnConsoleApplication6() << endl;

	CConsoleApplication6 c6;
	cout << c6.showme() << endl;
	cin.get();
    return 0;
}

