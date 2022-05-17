#include "Utils.h"

void Utils::anim(std::string Text, int Time, bool anim)
{
	if (anim)
	{
		int V6 = 0;
		while (Text[V6] != '\0')
		{
			std::cout << Text[V6];
			Sleep(Time);
			V6++;
		};
	}
	else
	{
		std::cout << Text;
	}
	
}

