#include <iostream>
using namespace std;

int main() {
    
    int mas[7];

    cout << "Enter 7 numbers: ";
    for (int i = 0; i < 7; i++) {
        cin >> mas[i];
    }

    
    bool ok = true;
    for (int i = 0; i < 7; i++) {
        if (mas[i] % 5 != 0) {
            ok = false;
            break;
        }
    }

   
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
        cout << "Sorted: ";
    }
    else {
        cout << "No changes: ";
    }

    for (int i = 0; i < 7; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;

    
    int tab[3][4];

    cout << "\nEnter 12 numbers for 3x4 table:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> tab[i][j];
        }
    }

    
    int best_col = -1; // Инициализируем как -1 (недопустимый индекс)
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

    
    // Проверяем, что найден допустимый индекс столбца
    if (best_col >= 0 && best_col < 4 && best_cnt > 0) {
        for (int i = 0; i < 3; i++) {
            tab[i][best_col] = -1;
        }
        cout << "Column " << best_col << " changed to -1\n";
    }
    else {
        cout << "No column with negative numbers found or invalid column index\n";
    }

   
    cout << "Result:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << tab[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
