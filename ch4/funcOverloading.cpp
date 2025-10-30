#include <iostream>

using namespace std;

int sum(int, int); // 아래와 기능이 같은 함수
float sum(float, float);

int main()
{
	// 함수의 다형
	// 다형 : 다양한 형태를 지닌
	// 함수의 오버로딩
	// 여러개의 함수를 같은 이름으로 연결한다.

	/* 함수 오버로딩이 불가능한 경우
	1. 함수의 리턴형만 다를 경우
	2. 함수를 사용할 때, 두개 이상의 함수에 대응되는 경우 ex) template 변수
	*/

	cout << "두 정수를 입력하십시오. \n";
	int a, b;
	cin >> a >> b;
	cout << "두 정수의 합은 " << sum(a, b) << "입니다.\n"; // 파라미터로 int형 2개
	cout << "두 실수를 입력하십시오.\n";
	float c, d;
	cin >> c >> d;
	cout << "두 실수의 합은 " << sum(c, d) << "입니다.\n"; // 파라미터로 float형 2개

	return 0;
}

int sum(int a, int b)
{
	return a + b;
}

float sum(float a, float b)
{
	return a + b;
}