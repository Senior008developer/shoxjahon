#include <iostream>
using namespace std;
int min (int a, int b){
if (a < b)
    return a;
else 
    return b;
}
int max(int a, int b){
if (a > b)
    return a;
else 
    return b;
}
int main( ){
int n, m;
cout <<"n >>>"; cin >> n;
cout <<"m >>>"; cin >> m;

cout <<"MIN >>>" << min(n, m) <<endl;
cout <<"MAX >>>" << max(n, m) <<endl;
system("pause");
return 0;
}