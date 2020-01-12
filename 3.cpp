/*Напишите программу находящую первые n составных чисел.
Программа должна работать не более чем за O(n*log log n) шагов.*/
#include <iostream>
#include <vector>

using namespace std;

void Sostav(long long n, vector <bool>& isPrime)
{
	long long d = 2;
	while (d * d <= n)
	{
		if (isPrime[d])
		{
			for (int i = d * d; i <= n; i += d)
			{
				isPrime[i] = false;
			}
		}
		++d;
	}

}

int main()
{
	long long n;
	cin >> n;
	vector <bool> isPrime(n + 1, true);
	isPrime[0] = false;
	isPrime[1] = false;

	Sostav(n, isPrime);

	for (int i = 4; i <= n; ++i)
	{
		if (isPrime[i]==false)
		{
			cout << i << '\n';
		}
	}
}
