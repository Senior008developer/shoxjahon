# include <iostream>
using namespace std;
int main ()
{
    int n;
    cout << "K =" ; cin >> n;

    if (n > 0) 
{   cout <<"siz kiritgan son musbat" << endl;
    cout <<"siz" << n << "sonini kiritdingiz"<< endl;
}
else 
if(n == 0)
    {cout << " 0 soni musbat ham emas manfiy ham emas"<<endl;}
else 
{
    cout << "siz kiritgan son manfiy" << endl;
    cout << "siz" << n << "sonini kiritdingiz"<<endl;
}

 system("pause");
 return 0;  
}