#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Введіть число N: ";
    cin >> N;

    int evenSum = 0, oddSum = 0, totalSum = 0;

    cout << "Парні числа: ";
    for (int i = 1; i <= N; ++i) {
        totalSum += i;
        if (i % 2 == 0) {
            cout << i << " ";
            evenSum += i;
        } else {
            oddSum += i;
        }
    }
    cout << endl;

    double result = static_cast<double>(evenSum + oddSum + totalSum) / 2;

    cout << "Сума парних чисел: " << evenSum << endl;
    cout << "Сума непарних чисел: " << oddSum << endl;
    cout << "Загальна сума: " << totalSum << endl;
    cout << "Результат (сума всіх поділена на 2): " << result << endl;

    return 0;
}
