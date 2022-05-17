#include "Driver.h"
#include "Utils.h"
#include "Menu.h"

void Driver::startdriver(bool anim)
{
	system("cls");
	Utils::anim("Starting driver", 40, anim);
	Utils::anim("...", 300, anim);
	//start the driver for now we'll just return to the menu

	Menu::DisplayMenu("1", true);
}