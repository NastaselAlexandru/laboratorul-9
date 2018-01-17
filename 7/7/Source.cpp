#include <iostream>

using namespace std;
int shell(int a[], int n)
{
	int g, i, t, j;
	for (g = n / 2; g > 0; g /= 2)
	{
		for (i = g; i < n; i++)
			t = a[i];
		for (j = i; j > g && a[j - g] > t; j -= g)
			a[j] = a[j - g];
		a[j] = t;
	}
	return 0;
}
int main()
{
	int a[100], i, n;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	shell(a, n);
	for (i = 1; i <= n; i++)
		cout << a << ' ';
}