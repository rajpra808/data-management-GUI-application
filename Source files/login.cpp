/*
	*************************************************************************************
								Author : Rajendra Prajapat
								Aim : The main Function execution starts from here

	**************************************************************************************
*/

#include "login.h"
#include <Windows.h>
#include <iostream>
#include <string>
#include "oper.h"

using namespace manage; // This is your project name

void CreateFolder(std::basic_string<TCHAR> path)
{//const char
	if (!CreateDirectory(path.c_str(), NULL))
	{
		return;
	}

}

[STAThread]
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{

	std::basic_string<TCHAR> FilePath = TEXT("C:\\Manager\\");

	CreateFolder(FilePath);

	Operation::init();
	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew login());

	return 0;

}
