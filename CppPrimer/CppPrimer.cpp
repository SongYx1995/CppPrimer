// CppPrimer.cpp: 定义控制台应用程序的入口点。
//
#include<iostream>


int main(int argc,char* argv[])
{
	if (argc > 0)
		for (int i = 1; i <= argc; i++)
			std::cout << argv[i];
	else std::cout << "No parameters";
    return 0;
}

