#include <iostream>
#include <stdlib.h>
using namespace std;
// �� ��� 
//����
// *****
//  ***
//   *

int main() {
	int star = 0;
	cout << "���ڸ� �Է��ϼ��� : ";
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
