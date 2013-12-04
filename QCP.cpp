#include <iostream>
#include <windows.h>

static __int64 zero = 0;

int setZeroTime(void)
{
    QueryPerformanceCounter((LARGE_INTEGER *)&zero);

	return 0;
}

double getCurTime(void)
{
    __int64 cur = 0, freq = 0;
	double dt;
    QueryPerformanceCounter((LARGE_INTEGER *)&cur);
    QueryPerformanceFrequency((LARGE_INTEGER *)&freq);
	dt =  (cur-zero)/(double)freq;

	return dt;
}

/*
int main(void)
{
    setZeroTime();
	Sleep(1000);
	double dt = getCurTime();
	std::cout << dt << std::endl;
	getchar();
    return 0;
}
*/
