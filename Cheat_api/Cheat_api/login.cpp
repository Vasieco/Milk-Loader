#include "login.h"



using namespace KeyAuth;

std::string name = "test";
std::string ownerid = "KXjUtOEZ4c";
std::string secret = "837b15570ab59a838332b4db3b52d65c58c52d6bf8229499587038779c30a312";
std::string version = "1.0";
std::string url = "https://keyauth.win/api/1.1/";
std::string sslPin = "ssl pin key (optional)";

api KeyAuthApp(name, ownerid, secret, version, url, sslPin);



void login::loginmenu(const char* Color, bool anim)
{
	
#pragma region ColorSet
	system("cls");
	std::string Default = "color ";
	Default.append(Color);
	char* V4 = const_cast<char*>(Default.c_str());
	system(V4);
#pragma endregion
	
#pragma region Title
	SetConsoleTitleA("Credits : Vasie");
#pragma endregion
	
#pragma region Login

	KeyAuthApp.init();
	

LABEL2:
	system("cls");
	Utils::anim("	[1] Login\n", 40, anim);
	Utils::anim("	[2] Register\n", 40, anim);
	Utils::anim("	[3] Exit\n\n", 40, anim);
	Utils::anim("	> ", 40, anim);

	int option;
	std::string username;
	std::string password;
	std::string key;

	std::cin >> option;
	switch (option)
	{
	case 1:
		system("cls");
		Utils::anim("	<Username>	: ", 40, anim);
		std::cin >> username;
		Utils::anim("\n\n	<Password>	: ", 40, anim);
		std::cin >> password;
		KeyAuthApp.login(username, password);
		break;
	case 2:
		system("cls");
		Utils::anim("	<Username>	: ", 40, anim);
		std::cin >> username;
		Utils::anim("\n\n	<Password>	: ", 40, anim);
		std::cin >> password;
		Utils::anim("\n\n	<License>	: ", 40, anim);
		std::cin >> key;
		KeyAuthApp.regstr(username, password, key);
		break;
	case 3:
		exit(2);

	default:
		goto LABEL2;
		Sleep(3000);
		exit(0);
	}

	if (!KeyAuthApp.data.success)
	{
		system("cls");
		Utils::anim("\n\n	<Error>", 40, anim);
		Sleep(1500);
		exit(0);
	}
	Menu::DisplayMenu("3", true);
#pragma endregion

}
