#include "Threads.h"
#include <thread>



void Threads::SpawnThread(void wfunction, char wname)
{
	std::thread wname(wfunction);
}