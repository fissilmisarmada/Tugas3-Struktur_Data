#include <iostream>
#include <conio.h>
using namespace std;

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

void mMasukkanData(string pesan) {
    system("cls");
    cout << "hallo saya menu\n";
    getch();
}

void mTampilkanData() {
    system("cls");
    cout << "Menu Tampilkan Data\n";
    // Tambahkan logika untuk menampilkan data di sini
    getch();
}

void mSortingAsc() {
    system("cls");
    cout << "Menu Sorting Ascending\n";
    // Tambahkan logika sorting ascending di sini
    getch();
}

void mSortingDesc() {
    system("cls");
    cout << "Menu Sorting Descending\n";
    // Tambahkan logika sorting descending di sini
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
