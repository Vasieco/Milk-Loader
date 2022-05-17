#include "Menu.h"
#include <sstream>
#include <string>
#include "Utils.h"
#include "Cheat.h"
#include "Driver.h"
#include <shellapi.h>

void Menu::DisplayMenu(const char* Color, bool anim)
{
LABEL1: // start of the menu 
//if error GOTO LABEL 1

#pragma region ColorSet
	system("cls");
	std::string Default = "color ";
	Default.append(Color);
	char* V4 = const_cast<char*>(Default.c_str());
	system(V4);
#pragma endregion
	
	
	Utils::anim("	[1] Start Cheat\n", 40, anim);
	Utils::anim("	[2] Start Driver\n", 40, anim);
	Utils::anim("	[3] Discord\n", 40, anim);
	Utils::anim("	[4] Credits\n", 40, anim);
	Utils::anim("	[5] Exit\n\n", 40, anim);
	Utils::anim("	> ", 40, anim);

	int choise1;
	std::cin >> choise1;
	switch (choise1)
	{
	case 1:
		Cheat::startcheat(true);

	case 2:
		Driver::startdriver(true);

	case 3:
		ShellExecute(0, 0, L""/*Your Discord*/, 0, 0, SW_SHOW);

	case 4:
		system("cls");
		Utils::anim("	Developer - Vasie (vasie#5664)\n", 40, anim);
		Sleep(3000);
		goto LABEL1;
	case 5:
		exit(1);


	default:
		Utils::anim("	[Error] Please enter a valid choise...\n", 40, anim);
		goto LABEL1;

	}


}