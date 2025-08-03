# include <iostream>
using namespace std;

int main(){
// !, !=, ==, >=, <=, >, < &&, || 
bool m, n;

    m = 6 < 7;
    n = 8 <= 7.3;
    
    cout << (true && true) << endl;
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl;

    cout << (true || true) << endl;
    cout << (true || false) << endl;
    cout << (false|| true) << endl;
    cout << (false|| false) << endl;
   
system ("pause");
return 0;

}


// ! = inkor yani false qiymat beradi.
// && = va degan qiymat beradi
// || = yoki degan qiymatni beradi 