#include <iostream>

using namespace std;

int main(void)
{
	// char : 작은 문자형

	int a = 77;
	char b = a;

	cout << b << endl;

	char c = 'a';
	// null 문자 '\0'
	// "" >> 명시적으로 null문자가 포함 -> string
	// "a" -> a\0

	cout << c << endl;

	char d[] = { 'a', 'b', 'c' };

	cout << d << endl; // null 문자 없어서 이상한값 나옴

	// bool : 0(false) 혹은 1(true)
	bool e = 0;
	bool f = 1;
	bool g = 10; // 0 이외의 모든 값은 1로

	cout << e << " " << f << " " << g << endl;
 
	return 0;
}