
//Напишите эффективную программу, находящую все числа длины n являющиеся палиндромами. В комментариях напишите, почему перебор - эффективный

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{

	long long left, right;
	cin >> left;
	//если чётная
	if (left % 2 == 0)
	{
		left = pow(10, left / 2 - 1);
        right = left * 10;


		for (long long i = left; i < right; i++)
		{
			cout << i;
			long long t = i;
			while (t)
			{
				cout << t % 10;
				t /= 10;
			}
			cout << "\n";
		}
	}
	//если нечетная
	else
	{
		left = pow(10, left / 2 - 1);
		right = left * 10;


		for (long long i = left; i < right; i++)
		{
			for (long long j = 0; j < 10; j++)
			{
				cout << i << j;

				long long t = i;
				while (t)
				{
					cout << t % 10;
					t /= 10;
				}
				cout << "\n";
			}
		}
	}
}

  //программа эффективная, т.к. не является перебором, а выводит только нужные числа

