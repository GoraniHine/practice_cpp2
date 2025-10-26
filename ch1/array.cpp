#include <iostream>

using namespace std;

int main(void)
{
	/*
	배열(array) : 같은 데이터형의 집합
	typeName arrayName[arraySize];
	*/

	short month[12] = { 1, 2, 3 }; // 배열 초기화

	cout << month[1] << endl;

	/*
	배열 원소에 대입할 값들을 콤마로 구분하여 중괄호로 묶어 선언한다.
	초기화를 선언 이후 나중에 할 수는 없다.

	배열을 다른 배열에 통째로 대입할 수는 없다.

	초기화 값의 개수를 배열 원소의 개수보다 모자라게 제공할 수 있다.
	배열을 부분적으로 초기화하면, 나머지 원소들은 모두 0으로 초기화된다.

	배열을 초기화할때 대괄호 속을 비워두면 컴파일러가 초기화 값의 개수를 헤아려 배열 원소 개수를 저장한다.
	*/

	return 0;
}