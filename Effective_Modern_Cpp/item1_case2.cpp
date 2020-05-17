#include "item1_case2.h"
#include <iostream>

using namespace std;

Item1_case2::Item1_case2(){}

template<typename T>
void Item1_case2::fcase2(T& param)
{
	cout << param << endl;
}
