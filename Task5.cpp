#include <iostream>
using namespace std;

int main() {
    int grade;

    cout << "Введіть оцінку студента (0-100): ";
    cin >> grade;

    if (grade >= 90) {
        cout << "Відмінно" << endl;
    } else if (grade >= 75) {
        cout << "Добре" << endl;
    } else if (grade >= 50) {
        cout << "Задовільно" << endl;
    } else {
        cout << "Незадовільно" << endl;
    }

    return 0;
}
