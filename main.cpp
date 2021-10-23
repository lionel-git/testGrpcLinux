#include <iostream>

//extern "C" __declspec(dllimport) void do_work(int value);

extern "C"  void do_work(int value);

int main(int argc, char** argv)
{
	do_work(177);
	std::cout << "Prg end" << std::endl;
}
