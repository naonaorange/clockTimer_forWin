#include <iostream>
#include "QPC.h"

int main(void)
{
    setZeroTime();
	Sleep(1000);
	double dt = getCurTime();
	std::cout << "dt = " << dt << " [s]" << std::endl;
	getchar();
    return 0;
}
