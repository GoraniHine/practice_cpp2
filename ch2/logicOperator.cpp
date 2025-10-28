#include <iostream>

using namespace std;

int main(void)
{
	// 논리 표현식
	// 논리합, 논리곱, 논리부정 연산자

	// 논리합 || -> OR
	// 논리곱 && -> AND
	// 논리부정 ! -> NOT

	cout << "당신의 나이를 입력하십시오." << endl;
	int age;
	cin >> age;

	if (age < 0 || age > 100)
	{
		cout << "거짓말 하시면 안됩니다!\n";
	}
	else if (20 <= age && age <= 29)
	{
		cout << "당신은 20대 이시군요?\n";
	}
	else
	{
		cout << "당신의 나이를 잘 모르겠습니다.\n";
	}

	return 0;
}