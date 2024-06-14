#include <random>
#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	int x, y;
	x = rand() % 800;
	y = rand() % 450;
	while (true)
	{
		SetCursorPos(x, y);
		Sleep(4000);
	}
}