#include <iostream>
using namespace std;

int main() {
    int length, width;

    cout << "Введіть довжину прямокутника: ";
    cin >> length;
    cout << "Введіть ширину прямокутника: ";
    cin >> width;

    // Обчислення площі та периметра
    int area = length * width;
    int perimeter = 2 * (length + width);

    // Приведення до дійсного числа
    double area_d = static_cast<double>(area);
    double perimeter_d = static_cast<double>(perimeter);

    // Операції з площою і периметром
    double sum = area_d + perimeter_d;
    double diff = area_d - perimeter_d;
    double prod = area_d * perimeter_d;
    double div = perimeter_d != 0 ? area_d / perimeter_d : 0;

    // Виведення результатів
    cout << "Площа: " << area_d << ", Периметр: " << perimeter_d << endl;
    cout << "Сума: " << sum << ", Різниця: " << diff << ", Добуток: " << prod 
         << ", Частка: " << (perimeter_d != 0 ? div : 0) << endl;

    // Адреси змінних
    cout << "Адреси змінних у пам'яті:" << endl;
    cout << "Довжина: " << &length << ", Ширина: " << &width 
         << ", Площа: " << &area << ", Периметр: " << &perimeter << endl;

    return 0;
}
