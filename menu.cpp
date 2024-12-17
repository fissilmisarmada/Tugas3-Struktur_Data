#include <iostream>
#include <conio.h>
using namespace std;

int n; // Panjang array
void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble" << "\n";
    cout << "1. Masukkan data" << "\n";
    cout << "2. Tampilkan data" << "\n";
    cout << "3. Sorting Ascending" << "\n";
    cout << "4. Sorting Descending" << "\n";
    cout << "5. Exit" << "\n";
    cout << "Masukkan angka: ";
}

void tukar(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
void masukArray(int data[100]) {
    system("cls");
    cout << "Masukkan panjang data: ";
    cin >> n;
    for (int i = 0; i < n; i++) { 
        cout << "Masukkan data ke [" << i + 1 << "]: ";
        cin >> data[i];
    }
    getch();
}

void tampilArray(int data[100]) { 
    system("cls");
    cout << "Data yang telah dimasukkan: " << endl;
    for (int i = 0; i < n; i++) { 
        cout << "data[" << i + 1 << "] = " << data[i] << endl;
    }
    getch();
}

void bubbleSortAsc(int data[100]) {
    system("cls");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] > data[j + 1]) {
                tukar(&data[j], &data[j + 1]);
            }
        }
    }
    cout << "Data setelah diurutkan secara Ascending:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "data[" << i + 1 << "] = " << data[i] << endl;
    }
    getch();
}

void bubbleSortDsc(int data[100]) {
    system("cls");
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (data[j] < data[j + 1]) {
                tukar(&data[j], &data[j + 1]);
            }
        }
    }
    cout << "Data setelah diurutkan secara Descending:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "data[" << i + 1 << "] = " << data[i] << endl;
    }
    getch();
}

int main() {
    int data[100];
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                masukArray(data);
                break;
            case '2':
                tampilArray(data);
                break;
            case '3':
                bubbleSortAsc(data);
                break;
            case '4':
                bubbleSortDsc(data);
                break;
            case '5':
                cout << "Keluar dari program..." << endl;
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia!";
                getch();
                break;
        }
    } while (pl != '5');
    return 0;
}