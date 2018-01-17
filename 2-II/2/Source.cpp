#include <iostream>

using namespace std;

int main()
{
	int n, i, a[100],j,ok=0,aux;
	cin >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	;
	while (ok == 0)
	{	i = 1;
	j = n;
		while(i<j)
		{
			if (a[i] > a[j])
			{
				aux = a[i];
				a[i] = a[j];
				a[j] = aux;
				i++;
				j--;
			}
			else
				i++;
		}
		for (i = 1; i < n; i++)
			if (a[i] < a[i + 1])
				ok = 1;
	}
}