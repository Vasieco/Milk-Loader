#include "Serials.h"
#include <iostream>
#include <Windows.h>

void Serials::printserials()
{
	system("wmic path win32_physicalmedia get SerialNumber");
}
