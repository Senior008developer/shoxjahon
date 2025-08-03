#include <iostream>
using namespace std;

int main() {
    int son;

    do {
        cout << "1 va 10 orasida bir son kiriting: ";
        cin >> son;
    } while (son < 1 || son > 10);

    cout << "Rahmat! Siz " << son << " ni kiritdingiz." << endl;

    return 0;
}
