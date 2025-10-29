#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int[], int);
int sumArr2(int*, int);
int sumArr3(int*, int*);

int main(void)
{
	int arr[SIZE] = { 1, 2, 4, 8, 16, 32, 64, 128 };
	// arr == &arr[0]
	cout << "size of arr " << sizeof arr << endl; // 배열 전체의 크기

	int sum = sumArr(arr, SIZE);
	int sum2 = sumArr2(arr, SIZE);
	int sum3 = sumArr3(arr, arr + 3);

	cout << "함수의 총 합은 " << sum << " 입니다." << endl;
	cout << "함수의 총 합은 " << sum2 << " 입니다." << endl;
	cout << "함수의 총 합은 " << sum3 << " 입니다.";

	return 0;
}

int sumArr(int arr[], int n)
{
	cout << "size of arr " << sizeof arr << endl; // 배열 첫번째 원소의 크기, 전달 되어 받는것은 배열 전체가 아니라 첫번째 원소만
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}

	return total;
}

int sumArr2(int* arr, int n)
{
	cout << "size of arr " << sizeof arr << endl; // 배열 첫번째 원소의 크기
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}

	return total;
}

int sumArr3(int* begin, int * end)
{
	int total = 0;
	int* pt;

	for (pt = begin; pt!= end; pt++)
	{
		total += *pt;
	}

	return total;
}