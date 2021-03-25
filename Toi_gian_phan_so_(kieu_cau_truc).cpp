#include <iostream>
using namespace std;
struct phanso
{
	int tuso;
	int mauso;
};
void ToiGian(phanso &a)
{
	int x= a.tuso;
	int y= a.mauso;
	while(x!=y)
	{
		if (x>y)
			x =	x-y;
		else
			y =	y-x;
	}
	a.tuso =	a.tuso/x;
	a.mauso =	a.mauso / x;
}   
int main()
{
	int n;
	int i;
	phanso a[100];
	cout <<	"Nhap n: ";
	cin >>	n;
	for (i=0;i<n;i++)
	{
		cout <<	"\nNhap vao phan so thu " <<	i+1 <<	": ";
		cout << "\nNhap tu so: ";
		cin >>	a[i].tuso;
		cout <<	"Nhap mau so: ";
		cin >> a[i].mauso;
	}
	for ( i=0;i<n;i++)
	{
		ToiGian(a[i]);
	}
	cout <<"\n";
	for ( i=0; i<n;i++)
	{
		cout <<	a[i].tuso <<	"/" <<	a[i].mauso <<" ";
	}
	cout << endl;
	for (i=0;i<n;i++)
	{
		cout <<	(double)a[i].tuso / a[i].mauso <<	" ";
	}
	return 0;
}