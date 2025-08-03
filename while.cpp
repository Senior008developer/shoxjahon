#include<iostream>
#include<stdlib.h> //rand()
#include<ctime>

using namespace std;

int main(){
srand(time(0)); 
int i = 1, x, a = -1;
x = rand() % 1000 + 1;


    while (a != x){
        
        cout << "o'ylangan sonni kiriting"; cin >> a;
        
        if(a > x)
        cout <<"siz o'ylangan sondan katta son kiritdingiz" <<endl;
        else
        if(a < x)
            cout<< "siz o'ylangan sondan kichik son kiritdingiz" <<endl;
        else
        {
            cout<< "winner winner chicken dinner siz o'ylangan sonni topdingiz" <<endl;
            break;
            }
}



system("pause");
return 0;
}