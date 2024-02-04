// SRegister.cpp : main project file.

#include "stdafx.h"
#include "student.h"
#include "StudentData.h"
#include "Form1View.h"
#include "additem.h"
#include "display.h"
#include "help.h"
#include "Find.h"

#include "XmlData.h"
//#include "DbnClient.h"
#include "Caccdb.h"
#include "Form1.h"
#include "MainForm.h"

using namespace SRegister;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew MainForm());

	return 0;
}
