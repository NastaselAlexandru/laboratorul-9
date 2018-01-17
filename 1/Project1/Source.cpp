#include <iostream>

using namespace std;

struct nod
{
	int inf;
	nod *adr;
}*prim;
void create(nod *prim)
{
	nod *a;
	a = new nod;
	cin >> a->inf;
	a->adr = a;
	prim=a;
}
void ADD(nod *&prim)
{
	nod *a;
	nod *b;
	b = new nod;
	cin >> b->inf;
	a->adr = b;
	b->adr = NULL;
	a = b;
}

void listare(nod* prim)
{
	nod *a = prim;
	do
	{
		cout << a->inf << ' ';
		a = a->adr;
	} while (a != NULL);
}

void insertionsort(nod *prim)
{
	nod *a=prim;
	nod *b=prim;
	int aux;
	while (b != NULL)
	{
		a = b;
		while(a->adr!=NULL)
			if (a->inf > a->adr->inf)
			{
				aux = a->inf;
				a->inf = a->adr->inf;
				a->adr->inf = aux;
				a = a->adr;
			}
		if (b->inf < b->adr->inf)
			b = b->adr;
	}
}

int main()
{
	int i;
	int n;
	nod *p;
	p = new nod;
	cin >> n;
	create(p);
	for(i=2;i<=n;i++)
		ADD(p);
	insertionsort(p);
	listare(p);
}