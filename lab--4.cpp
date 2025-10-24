#include <iostream>
using namespace std;

int main() {
    // Пункт 1: Массив
    int mas[7];

    cout << "Введите 7 чисел: ";
    for (int i = 0; i < 7; i++) {
        cin >> mas[i];
    }

    // Проверка деления на 5
    bool ok = true;
    for (int i = 0; i < 7; i++) {
        if (mas[i] % 5 != 0) {
            ok = false;
            break;
        }
    }

    // Сортировка
    if (ok) { 
        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6 - i; j++) {
                if (mas[j] > mas[j + 1]) {
                    int tmp = mas[j];
                    mas[j] = mas[j + 1];
                    mas[j + 1] = tmp;
                }
            }
        }
        cout << "Отсортировано: ";
    }
    else {
        cout << "Без изменений: ";
    }

    for (int i = 0; i < 7; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;

    // Пункт 2: Матрица
    int tab[3][4];

    cout << "\nВведите 12 чисел для таблицы 3x4:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> tab[i][j];
        }
    }

    // Ищем столбец с минусами
    int best_col = 0;
    int best_cnt = 0;

    for (int j = 0; j < 4; j++) {
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            if (tab[i][j] < 0) cnt++;
        }
        if (cnt > best_cnt) {
            best_cnt = cnt;
            best_col = j;
        }
    }

    // Меняем столбец
    if (best_cnt > 0) {
        for (int i = 0; i < 3; i++) {
            tab[i][best_col] = -1;
        }
        cout << "Столбец " << best_col << " стал -1\n";
    }

    // Вывод
    cout << "Результат:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}