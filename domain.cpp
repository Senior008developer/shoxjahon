#include <iostream>
#include <string>
using namespace std;

int main() {
    string domain;
    while (true) {
        cout << "Domain name: ";
        getline(cin, domain);

        if (domain.empty()) continue; 

        string command = "nslookup " + domain;
        system(command.c_str());

        system("pause");
        system("cls");
    }
    

    return 0;
}
