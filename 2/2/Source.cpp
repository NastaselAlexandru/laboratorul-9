#include <iostream>

using namespace std;

int sort(int a[], int x, int n, int i)
{
	if (n >= i)
	{
		int mid = (n - i) / 2 + i;
		if (x == a[mid])
			return mid;
		else
			if (x > a[mid])
				return sort(a, x, n,mid+1);
			else
				return sort(a, x,mid-1, 1);
	}
	return -1;
}

int main()
{
	int a[100], i, n, k;
	cin >> n >> k;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	k = sort(a, k, n, 1);
	if (k == -1)
		cout << "ERROR 404 NUMBER NOT FOUND";
	else
		cout << "NUMBER WAS FOUND AT POSITION:" << k;

}