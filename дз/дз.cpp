#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int num1, num2, suma, minus, del, umn;
    string znak;
    cout << ("Введите первое число: ");
    cin >> num1;
    cout << ("Введите второе число: ");
    cin >> num2;
    cout << ("Выберите операцию\n +, -, *, / ") << endl;
    cin >> znak;
    if (znak == "+") {
        suma = num1 + num2;
        cout << "Результат суммы:\n" << suma << endl;
    }
    else if (znak == "-") {
        minus = num1 - num2;
        cout << "Результат вычитания:\n" << minus << endl;
    }
    else if (znak == "*") {
        umn = num1 * num2;
        cout << "Результат умножения:\n" << umn << endl;
    }
    else if (znak == "/") {
        del = num1 / num2;
        cout << "Результат деления:\n" << del << endl;
    }

}
