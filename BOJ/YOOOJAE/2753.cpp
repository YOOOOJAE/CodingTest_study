#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int Year = 0;
	cout << "연도를 입력하시오 : ";
	cin >> Year;

	if (0<Year && 4001>Year)
	{
		if (Year % 100 != 0 || Year % 400 == 0)
		{
			if (Year % 4 == 0)
			{
				cout << 1;
			}
			else
			{
				cout << 0;
			}
		}
		else
		{
			cout << 0;
		}
	}
	else
	{
		cout << "연도의 범위는 1~4000까지 입니다.";
	}
}