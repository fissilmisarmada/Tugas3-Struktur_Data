#include <iostream>
#include <conio.h>
using namespace std;

int n;
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

void mPertama(string pesan) {
    system("cls");
    cout << "hallo saya menu\n";
    getch();
}

void tukar(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void tampilkan() {

}

int main() {
    char pl;
int data[100]; 
do {
    dMenu();
    pl = getch();
switch (pl) {
    case '1':
system("cls");
      cout<<"Masukan panjang data : ";
      cin>>n;
      for(int i = 1; i <= n; i++) {
        cout << "Masukan data ke ["<< i <<"] : ";
        cin >> data[i];
      }
      getch();
    break;
    case '2':
        
        system("cls"); 
      cout << "Data yang telah dimasukkan:" << endl;
      for (int i = 1; i <= n; i++) {
          cout << "data[" << i << "] = " << data[i] << endl;
      }
      getch(); 
    break;  
    case '3':
        mPertama("ke- tiga");
        /* code */
    break;  
    case '4':
        mPertama("ke- empat");
        /* code */
    break;  
    case '5':
        /* code */
    break;
    
    default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
    }
} while (pl!='5');
    return 0;
}
