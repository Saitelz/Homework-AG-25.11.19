//�������� ����������� �������, ������������ �� ������� ����� n ��� ��������, � ������� ���������� ����� � �������� ������ ������ k. ������� ������ ���������� ����� ���������� ����� � �������� ������ ���� ����� �������. � ������������ ��������, ������ ������� - �����������


#include <iostream>
#include <vector>

using namespace std;

long long find(long long k, vector <long long>& arr)
{
	size_t arrSize = arr.size();
	long long c = 0;
	for (size_t i = 0; i < arrSize; i++)
	{
		long long t = arr[i];
		long  h = 0;
		for (int j = 0; t; ++j)
		{
			if (t % 3 == 2)
			{
				++c;
				++h;
			}
			t /= 3;
		}
		if (h < k)
		{
			cout << arr[i] << " ";
		}
	}

	return c;
}

int main()
{
	long long n, k;
	cin >> n >> k;
	vector <long long> arr(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	find(k, arr);
}

//������� �����������, �.�. �������� �� O(n * log m), ��� m - ������� ����� �����

