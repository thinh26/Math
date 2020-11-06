#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "*******************" << "\n";
    cout << "PHUONG TRINH BAC BA" << "\n";
    cout << "*******************" << "\n";
    long double a,b,c,d,denta,k,n1,n2,n3,n4,n5,n6;
    cout << "Nhap so a: ";
    cin >> a;
    cout << "Nhap so b: ";
    cin >> b;
    cout << "Nhap so c: ";
    cin >> c;
    cout << "Nhap so d: ";
    cin >> d;
    denta = b*b-3*a*c;
    k = (9*a*b*c-2*b*b*b-27*a*a*d)/(2*sqrt(abs(denta)*abs(denta)*abs(denta)));
    long double pi = 2 * acos(0.0), //pi
                c1 = pow(abs(k)+sqrt(k*k-1), (long double)1/3),
                c2 = pow(abs(k)-sqrt(k*k-1), (long double)1/3),
                c3 = pow(b*b*b-27*a*a*d, (long double)1/3),
                c4 = pow(k+sqrt(k*k+1), (long double)1/3),
                c5 = pow(k-sqrt(k*k+1), (float)1/3);
    n1 = ((2*sqrt(denta)*cos(acos(k)/3))-b)/(3*a);
    n2 = ((2*sqrt(denta)*cos((acos(k)/3)-((2*pi)/3)))-b)/(3*a);
    n3 = ((2*sqrt(denta)*cos((acos(k)/3)+((2*pi)/3)))-b)/(3*a);
    n4 = ((sqrt(denta)*abs(k))/(3*a*k))*(c1 + c2)-(b/(3*a));
    n5 = (-b + c3)/(3*a);
    n6 = (sqrt(abs(denta))/(3*a))*(c4 +c5)-(b/(3*a));
    if (denta >0 && abs(k)<=1) {
        cout << "Phuong trinh co 3 nghiem phan biet: " << "\n" << "x1= " << n1 << "\n" << "x2= " << n2 << "\n" << "x3= " << n3 << "\n";
        }
    if (denta>0 && abs(k)>1) {
        cout << "Phuong trinh co 1 nghiem duy nhat: x= " << n4 << "\n";
        }
    if (denta==0) {
        cout << "Phuong trinh co 1 nghiem boi: x= " << n5 << "\n";
        }
    if (denta<0) {
        cout << "Phuong trinh co 1 nghiem duy nhat: x= " << n6 << "\n";
        }
    return 0;
}