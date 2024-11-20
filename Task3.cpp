#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Введіть ціле число: ";
    cin >> num;

    cout << "До інкрементації: " << num << endl;
    cout << "Після префіксної інкрементації: " << ++num << endl;
    cout << "Після постфіксної інкрементації: " << num++ << " (наступне значення: " << num << ")" << endl;

    cout << "Після префіксної декрементації: " << --num << endl;
    cout << "Після постфіксної декрементації: " << num-- << " (наступне значення: " << num << ")" << endl;

    return 0;
}
