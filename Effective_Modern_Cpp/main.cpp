#include <iostream>
#include <string>
#include "item1_template.cpp"

using namespace std;

int x = 27;
const string str = "this is a string";
const string& rx = "this is alse a string";

int main()
{
	f(str);
	f(x);
	f(rx);

	system("pause");
	return 0;
}