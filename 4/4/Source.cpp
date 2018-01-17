#include <iostream>

using namespace std;

int main()
{
	int n, i, ok, a[100];
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	do
	{
		ok = 1;
		for(i=1;i<n;i++)
			if (a[i] > a[i + 1])
			{
				ok = 0;
				int aux = a[i];
				a[i] = a[i + 1];
				a[i + 1] = aux;
			}
	} while (!(ok));
	for (i = 1; i <= n; i++)
		cout << a[i] << ' ';
}