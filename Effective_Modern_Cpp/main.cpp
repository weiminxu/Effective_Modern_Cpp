#include <iostream>
#include <string>
#include "Item1_case1.h"
#include "Item1_case1.cpp"
#include "item1_case2.h"

using namespace std;

int main()
{
	//item1 case1
	int x = 27;
	const string str = "this is a string";
	const string& rx = "this is alse a string";
	//Item1_case1<int> *ic11=new Item1_case1<int>();
	//ic11->fcase1(x);
	Item1_case1<string> ic11;
	ic11.fcase1(str);
	//ic11.fcase1(rx);

	//item1 case2
	//int x = 27;
	//item1_case2 ic12;
	//ic12.fcase2(x);
	/*ic12.fcase2(str);
	ic12.fcase2(rx);*/

	system("pause");
	return 0;
}