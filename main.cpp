#include <iostream>

#ifdef NDEBUG
#include "nopcout.h"
#endif

int main()
{
	std::cout<<"Hello!"<<std::endl;
	using namespace std;
	cout<<"Nummber is "<<12.345<<endl;
	return 0;
}
