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
	cout << "size of arr " << sizeof arr << endl; // �迭 ��ü�� ũ��

	int sum = sumArr(arr, SIZE);
	int sum2 = sumArr2(arr, SIZE);
	int sum3 = sumArr3(arr, arr + 3);

	cout << "�Լ��� �� ���� " << sum << " �Դϴ�." << endl;
	cout << "�Լ��� �� ���� " << sum2 << " �Դϴ�." << endl;
	cout << "�Լ��� �� ���� " << sum3 << " �Դϴ�.";

	return 0;
}

int sumArr(int arr[], int n)
{
	cout << "size of arr " << sizeof arr << endl; // �迭 ù��° ������ ũ��, ���� �Ǿ� �޴°��� �迭 ��ü�� �ƴ϶� ù��° ���Ҹ�
	int total = 0;

	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}

	return total;
}

int sumArr2(int* arr, int n)
{
	cout << "size of arr " << sizeof arr << endl; // �迭 ù��° ������ ũ��
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