#include <iostream>

using namespace std;

int main(void)
{
	// 분기 구문 : if 구문
	
	if (true)
	{
		cout << "조건이 ";
		cout << "참입니다." << endl;

	}

	if (false)
	{
		cout << "조건이 거짓입니다." << endl;
	}

	if (false)
	{
		cout << "#1" << endl;
	}
	else
	{
		if (true)
		{
			cout << "#2" << endl;;
		}
		else
		{
			cout << "#3" << endl;;
		}
	}

	if (false) // 위와 같다. c++에서는 else 안에 if가 있을때 중괄호를 스킵할수 있다
	{
		cout << "#1" << endl;
	}
	else if (true)
	{
		cout << "#2" << endl;;
	}
	else
	{
		cout << "#3" << endl;;
	}


	cout << "프로그램이 종료되었습니다.";

	return 0;
}