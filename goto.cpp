#include<iostream>
using namespace std;
int main ()
{
    int n, m;
target:
cout << "musbat son kiriting. n = "; cin >> n;
cout << "musbat son kiriting. m = "; cin >> m;
if (m != 0)
cout << n / m <<endl;
else {
cout << "bo'luvchi 0 ga teng bo'lishi mumkin emas"<<endl;
goto target;
}


system ("pause");
return 0;
}