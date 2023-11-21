#include <iostream>
#include <stdlib.h>
using namespace std;
// 별 찍기 
//예제
// *****
//  ***
//   *

int main() {
	int star = 0;
	cout << "숫자를 입력하세요 : ";
	cin >> star;
	
	for (int i = star; i > 0; i--)
	{
		for (int k = star-i; k > 0; k--)
		{
			cout << " ";
		}
		for (int j = i * 2 - 1; j > 0; j--)
		{
			cout << "*";
		}
		cout << endl; 
	}
}
