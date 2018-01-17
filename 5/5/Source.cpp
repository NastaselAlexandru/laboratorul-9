#include <iostream>

using namespace std;

struct nod
{
	int inf;
	nod *adr;
}*prim;
void create(nod *&prim)
{
	nod *a;
	a = new nod;
	cin >> a->inf;
	a->adr = a;
	prim = a;
}
void ADD(nod *&prim)
{
	nod *a;
	nod *b;
	a = prim;
	b = new nod;
	cin >> b->inf;
	a->adr = b;
	b->adr = prim;
	a = b;
}

void listare(nod* prim)
{
	nod *a = prim;
	do
	{
		cout << a->inf << ' ';
		a = a->adr;
	} while (a != prim);
}

void bubble(nod *prim)
{
	nod *a=prim;
	nod *b=prim;
	int ok=0;
	while (ok == 0)
	{
		b = prim;
		a = prim;
		while (a->adr != prim)
		{
			if (a->inf > a->adr->inf)
			{
				int aux = a->inf;
				a->inf = a->adr->inf;
				a->adr->inf = aux;
			}
			a = a->adr;
		}
		while (b->adr != prim)
		{
			if (b->inf < b->adr->inf)
				ok = 1;
			else
				ok = 0;
		}
	}
}

int main()
{
	int n, i;
	nod *p;
	create(p);
	cin >> n;
	for (i = 2; i <= n; i++)
		ADD(p);
	bubble(p);
	listare(p);
}