#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int num1, num2, suma, minus, del, umn;
    string znak;
    cout << ("");
    cin >> num1;
    cout << ("");
    cin >> num2;
    cout << ("") << endl;
    cin >> znak;
    if (znak == "") {
        suma = num1 + num2;
        cout << "" << suma << endl;
    }
    else if (znak == "") {
        minus = num1 - num2;
        cout << "" << minus << endl;
    }
    else if (znak == "") {
        umn = num1 * num2;
        cout << " " << umn << endl;
    }
    else if (znak == "") {
        del = num1 / num2;
        cout << " " << del << endl;
    }
}
