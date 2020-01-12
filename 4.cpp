//Напишите эффективную процедуру, выписывающую из массива длины n все элементы, у которых произведение ненулевых цифр больше k. В комментариях напишите, почему перебор - эффективный

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	long long n, k;
	cin >> n;
	vector <long long> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cin >> k;

	for (int i = 0; i < n; i++)
	{
		int t = arr[i];
		int h = 1;
		for (int j = 0; t; j++)
		{
			if (t % 10 != 0)
			{
				h *= t % 10;
			}
			t /= 10;
		}
		if (h > k)
		{
			if (arr[i] == 0 && arr[i] > k)
			{
				cout << arr[i] << " ";
			}
			else if (arr[i] != 0)
			{
				cout << arr[i] << " ";
			}
		}
	}
}
/*перебор эффективный, т.к. работает за O(n * log m),
 где m - средняя длина чисел*/
