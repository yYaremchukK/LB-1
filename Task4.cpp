#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    double salary;

    cout << "Введіть ваш вік: ";
    cin >> age;
    cout << "Введіть вашу зарплату: ";
    cin >> salary;

    if (age > 20 && salary > 400 && salary < 1000) {
        cout << "We will consider your position" << endl;

        string name, surname, position;
        cout << "Введіть ваше ім'я: ";
        cin >> name;
        cout << "Введіть ваше прізвище: ";
        cin >> surname;
        cout << "Введіть бажану посаду: ";
        cin >> position;

        cout << "Ваші дані:" << endl;
        cout << "Ім'я: " << name << ", Прізвище: " << surname 
             << ", Вік: " << age << ", Зарплата: " << salary 
             << ", Посада: " << position << endl;
    } else {
        cout << "You are not suitable" << endl;
    }

    return 0;
}
