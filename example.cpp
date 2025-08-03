#include <iostream>
using namespace std;

int main() {
    int n;
    
target:
    cout << "1-5 gacha bo'lgan musbat son kiriting. n = ";
    cin >> n;

    if (n < 1 || n > 5) {
        cout << "Iltimos! 1-5 gacha bo'lgan musbat son kiriting.";
        goto target;
    } else {
        cout << "Siz kiritgan son " << n << endl;
    }

    system("pause");
    return 0;
}
