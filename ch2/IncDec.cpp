#include <iostream>

using namespace std;

int main(void)
{

	char a[10] = { 'a', 'b', 'c', 'd', 'e' };

	for (int i = 0; i < 5; i++)
	{
		cout << i << "번째입니다" << endl;
	}

	int b = 10;
	int c = 10;

	cout << "b는 " << b << ",c는 " << b << endl;
	cout << "b++는 " << b++ << endl;
	cout << "++c는 " << ++c << endl;
	cout << "b는 " << b << ",c는 " << b << endl;

	char d[10] = { 'a', 'b', 'c', 'd', 'e' };

	for (int i = 5; i > 0; i--)
	{
		cout << i << "번째입니다" << endl;
	}

	/* 관계 표현식
	< : 작다
	<= : 작거나 같다
	> : 크다
	>= : 크거나 같다
	== : 좌항과 우항이 같다
	!= : 같지 않다
	*/
	
	return 0;
}