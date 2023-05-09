/*  NOMOR 2 - PROGRAM CASHIER YANG MENGGUNAKAN LOOPING DAN KONDISI
    NAMA    :   RIZKI AMALINA TRIWAHYUNI NASUTION
    NIM     :   221401123
    KOM     :   C
*/

#include <iostream>
using namespace std;

int main() {

    int item_count; 
    double item_price, subtotal = 0, tax, total; 

    system ("cls");
    cout << "Jumlah item yang akan dibeli : ";
    cin >> item_count;
    cout << endl;

    for (int i = 1; i <= item_count; i++) {
        cout << "Input harga item ke-" << i << " : Rp. ";
        cin >> item_price;
        subtotal += item_price; 
    }
    cout << endl;
    tax = subtotal * 0.1; 
    total = subtotal + tax; 

    cout << "Subtotal : Rp. " << subtotal << endl;
    cout << "Pajak    : Rp. " << tax << endl;
    cout << "Total    : Rp. " << total << endl;

    if (total >= 50000) {
        double discount = total * 0.1;
        double discount_total = total - discount;
        cout << endl;
        cout << "Diskon 10% diberikan!" << endl;
        cout << "Total setelah diskon : Rp. " << discount_total << endl;
    }

    cout << endl;
    return 0;
}