#include <iostream>
#include <math.h>
using namespace std;

int main()
{
cout << "*********************************************" << "\n";
cout << "Chuong trinh tinh nghiem phuong trinh bac hai" << "\n";
cout << "*********************************************" << "\n";
float a,b,c,d,e,f,g,h,i; 
{
cout << "Nhap so hang dau: ";
cin >> a;
cout << "Nhap so hang thu hai: ";
cin >> b;
cout << "Nhap so hang thu ba: ";
cin >> c;
d = i =h = b*b-4*a*c;
e = ((-b-sqrt(d))/(2*a));
f = ((-b+sqrt(d))/(2*a));
g = -b/(2*a);
if (d > 0) {
cout << "Phuong trinh bac hai co 2 nghiem phan biet: " << "\n" << "x1= " << e << "\n" << "x2= " << f;
}
if (i = 0) {
cout << "Phuong trinh bac hai co nghiem kep: x1 = x2 = " << g;
}
if (h < 0) {
cout << "Phuong trinh vo nghiem !";
}
}
return 0;
}