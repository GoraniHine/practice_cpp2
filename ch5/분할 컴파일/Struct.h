#ifndef STRUCT // STRUCT가 정의 되있으면 무시

#include <iostream>

using namespace std;

struct MyStruct
{
	string name;
	int age;
};

void display(MyStruct&);

#endif // !STRUCT