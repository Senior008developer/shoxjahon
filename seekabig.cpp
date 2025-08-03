# include <iostream>
using namespace std;
int main ()
{
    int a,b,c;
    cout << "a ="; cin >> a;
    cout << "b ="; cin >> b;
    cout << "c ="; cin >> c;
if (a > b && a > c)
    cout << a << "eng katta son"<<endl;
else
if (b > a && b > c)
    cout << b << "eng katta son"<<endl;
else 
cout << c << "eng katta son"<<endl;

0system ("pause");
 return 0;  
}