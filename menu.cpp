#include <iostream>
#include <conio.h>
using namespace std;

int n;
int arrayData[100];

void tukar(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void dMenu() {
    system("cls");
    cout << "Aplikasi Sorting Bubble\n";
    cout << "1. Masukkan Data\n";
    cout << "2. Tampilkan Data\n";
    cout << "3. Sorting Ascending\n";
    cout << "4. Sorting Descending\n";
    cout << "5. Exit\n";
    cout << "Masukkan angka : ";
}


void mMasukkanData() {
    system("cls");
    cout << "Menu Masukkan Data\n";
    cout << "Masukkan jumlah data: ";
    cin >> n;
    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << i + 1 << ": ";
        cin >> arrayData[i];
    }
    getch();
}


void mTampilkanData() {
    system("cls");
    cout << "Menu Tampilkan Data\n";
    if (n == 0) {
        cout << "Data kosong.\n";
    } else {
        cout << "Data saat ini:\n";
        for (int i = 0; i < n; i++) {
            cout << arrayData[i] << " ";
        }
        cout << "\n";
    }
    getch();
}


void mSortingAsc() {
    system("cls");
    cout << "Menu Sorting Ascending\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrayData[j] > arrayData[j + 1]) {
                tukar(&arrayData[j], &arrayData[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan secara ascending.\n";
    getch();
}


void mSortingDesc() {
    system("cls");
    cout << "Menu Sorting Descending\n";
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arrayData[j] < arrayData[j + 1]) {
                tukar(&arrayData[j], &arrayData[j + 1]);
            }
        }
    }
    cout << "Data berhasil diurutkan secara descending.\n";
    getch();
}

int main() {
    char pl;
    do {
        dMenu();
        pl = getch();
        switch (pl) {
            case '1':
                mMasukkanData();
                break;
            case '2':
                mTampilkanData();
                break;
            case '3':
                mSortingAsc();
                break;
            case '4':
                mSortingDesc();
                break;
            case '5':
                system("cls");
                cout << "Keluar dari program.\n";
                getch();
                break;
            default:
                system("cls");
                cout << "Pilihan Tidak Tersedia\n";
                getch();
                break;
        }
    } while (pl != '5');
    return 0;
}
