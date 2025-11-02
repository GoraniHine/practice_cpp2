#ifndef STOCK

#include <iostream>

using namespace std;

class Stock // Stock 이라는 이름의 데이터 형
{
private: // 클래스 멤버에 대한 접근을 제한
	// 값을 변경하려면 public의 함수를 통해서 변경 가능, 직접 접근 불가능 -> 정보 은닉
	string name; // 이름
	int shares; // 남은양
	float share_val; // 가격
	double total_val;
	void set_total() { total_val = shares * share_val; };

public:
	void acquire(string, int, float);
	void buy(int, float);
	void sell(int, float);
	void update(float);
	void show();
	Stock topval(Stock&);
	Stock();
	Stock(string, int, float);
	~Stock();
};

#endif