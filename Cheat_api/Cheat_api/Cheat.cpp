#include "Cheat.h"
#include "Utils.h"
#include "Menu.h"

void Cheat::startcheat(bool anim)
{
	system("cls");
	Utils::anim("Starting cheat", 40, anim);
	Utils::anim("...", 300, anim);
	//start the cheat for now we'll just return to the menu

	Menu::DisplayMenu("1", true);
}
