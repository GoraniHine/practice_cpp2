#include <iostream>

using namespace std;

// 일반화 프로그래밍에 객체지향 언어에 중요한 특징 중 하나 -> template
// class 혹은 typeName
template <class Any> // 템플릿
Any sum(Any, Any);
template <class Any> // 오버로딩
Any sum(int, Any);

int main()
{
	// 함수 템플릿
	// 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의

	int a = 3;
	int b = 4;
	// cout << sum(a, b) << endl; // 이번에는 오버로딩된 2개 이상의 함수에 대응 되기에 주석처리

	float c = 3.14;
	float d = 1.592;
	cout << sum(c, d) << endl; // -> float, float

	cout << sum(a, c) << endl; // -> int, float

	return 0;
}

template <class Any>
Any sum(Any a, Any b)
{
	return a + b;
}

template <class Any>
Any sum(int a, Any b)
{
	return a + b;
}

