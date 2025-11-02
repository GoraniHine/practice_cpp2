#include "Stock.h"
#include <iostream>

void Stock::acquire(string co, int n, float pr)
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

void Stock::buy(int n, float pr)
{
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr)
{
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr)
{
	share_val = pr;
	set_total();
}
void Stock::show()
{
	cout << "회사 명: " << name << endl;
	cout << "주식 수: " << shares << endl;
	cout << "주가: " << share_val << endl;
	cout << "주식 총 가치: " << total_val << endl;
	cout << "변경!" << endl;
}

Stock Stock::topval(Stock& s)
{
	if (s.share_val > share_val)
		return s;
	else
		return *this;
}

// 사용 범위 결정 연산자 ::
Stock::Stock(string co, int n, float pr) // 생성자
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() // 디폴트 -> 오버로딩
{
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock() // 파괴자
{

}

/*
Stock::Stock(string co, int n, float pr) // 생성자
{
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() // 디폴트 -> 오버로딩
{
	name = "";
	shares = 0;
	share_val = 0;
	set_total();
}

Stock::~Stock() // 파괴자 ~(틸데)
{
	// cout << name << "클래스가 소멸되었습니다.\n";
}
// 호출하진 않았지만 소멸될때 자동으로 파괴자 호출

->  초기화 2가지 방법
Stock temp = Stock("Panda", 100, 1000);
Stock temp2("Panda", 100, 1000);
*/