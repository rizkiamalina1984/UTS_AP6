/*  NOMOR 4 - PERBAIKAN PROGRAM
    NAMA    :   RIZKI AMALINA TRIWAHYUNI NASUTION
    NIM     :   221401123
    KOM     :   C
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    
    string angka;
    int jumlah;
    double total = 0, rata;
    
    system("cls");
    cout << "Mencari Rata-rata" << endl;
    cout << endl;
    cout << "Input jumlah angka : ";
    cin  >> jumlah;
    cout << endl;
    
    for (int i = 1; i <= jumlah; i++) {
        cout << "Input angka " << i << " : ";
        cin >> angka;
        total += stoi(angka);
    } 
    
    cout << endl;
    cout << "Total      : " << total << endl;
    rata = total / jumlah;
    cout << "Rata-rata  : " << rata << endl;
    cout << endl;
    
return 0;
}