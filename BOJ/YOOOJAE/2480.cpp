#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	int bd = 0;
	int money = 0;
	int dice[3];

	for (int i = 0; i < 3; i++)
	{
		dice[i] = rand() % 6 + 1;
		cout << i+1 << "번째 주사위 : " << dice[i] << endl;
	}

	if (dice[0] == dice[1] && dice[0] == dice[2] && dice[1] == dice[2])

	{
		money = 10000 + (dice[0]) * 1000;
		cout << money;
	}
	else if (dice[0] == dice[1] || dice[1] == dice[2] || dice[0] == dice[2])
	{
		money = 1000 + (dice[0] * 100);
		cout << money;
	}
	else if (dice[0] != dice[1] && dice[0] != dice[2] && dice[1] != dice[2])
	{
		for (int i = 0; i < 3; i++)
		{
			if ( bd < dice[i])
			{
				bd = dice[i];
			}

		}
		money = bd * 100;
		cout << money;
	}
}
