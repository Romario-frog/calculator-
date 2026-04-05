#include <iostream>
#include <cmath>
using namespace std;

void menu() {
    cout << "\n=============================\n";
    cout << "      КАЛЬКУЛЯТОР v1.0\n";
    cout << "=============================\n";
    cout << "1. Сложение (+)\n";
    cout << "2. Вычитание (-)\n";
    cout << "3. Умножение (*)\n";
    cout << "4. Деление (/)\n";
    cout << "5. Степень (x^y)\n";
    cout << "6. Корень (√x)\n";
    cout << "0. Выход\n";
    cout << "=============================\n";
    cout << "Выбор: ";
}

int main() {
    setlocale(0, "");
    int choice;
    double a, b;

    do {
        menu();
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Введите два числа: ";
            cin >> a >> b;
            cout << "Результат: " << a + b << endl;
            break;

        case 2:
            cout << "Введите два числа: ";
            cin >> a >> b;
            cout << "Результат: " << a - b << endl;
            break;

        case 3:
            cout << "Введите два числа: ";
            cin >> a >> b;
            cout << "Результат: " << a * b << endl;
            break;

        case 4:
            cout << "Введите два числа: ";
            cin >> a >> b;
            if (b == 0)
                cout << "Ошибка: деление на 0!\n";
            else
                cout << "Результат: " << a / b << endl;
            break;

        case 5:
            cout << "Введите число и степень: ";
            cin >> a >> b;
            cout << "Результат: " << pow(a, b) << endl;
            break;

        case 6:
            cout << "Введите число: ";
            cin >> a;
            if (a < 0)
                cout << "Ошибка: корень из отрицательного числа!\n";
            else
                cout << "Результат: " << sqrt(a) << endl;
            break;

        case 0:
            cout << "Выход...\n";
            break;

        default:
            cout << "Неверный выбор!\n";
        }

    } while (choice != 0);

    return 0;
}