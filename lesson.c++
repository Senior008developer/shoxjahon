#include <iostream>
using namespace std;

int main() {
    int son;
    cin >> son;
    
    int son1 = son % 10;      
    int son2 = son / 10 * 10; 

    
    switch (son2) {
        case 10: cout << "o'n "; break;
        case 20: cout << "yigirma "; break;
        case 30: cout << "o'ttiz "; break;
        case 40: cout << "qirq "; break;
        case 50: cout << "ellik "; break;
        case 60: cout << "oltmish "; break;
        case 70: cout << "yetmish "; break;
        case 80: cout << "sakson "; break;
        case 90: cout << "to'qson "; break;
    }

    switch (son1) {
        case 1: cout << "bir"; break;
        case 2: cout << "ikki"; break;
        case 3: cout << "uch"; break;
        case 4: cout << "to'rt"; break;
        case 5: cout << "besh"; break;
        case 6: cout << "olti"; break;
        case 7: cout << "yetti"; break;
        case 8: cout << "sakkiz"; break;
        case 9: cout << "to'qqiz"; break;
    }   

    cout << endl;
    system("pause");
    return 0;
}
