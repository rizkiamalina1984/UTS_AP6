/*  NOMOR 3 - PROGRAM PERULANGAN
    NAMA    :   RIZKI AMALINA TRIWAHYUNI NASUTION
    NIM     :   221401123
    KOM     :   C
*/

#include <iostream>
using namespace std;

int main() {

   int n;

   system("cls");
   cout << "Input angka : ";
   cin  >> n;
   cout << endl;

   {
      for (int i = 1; i <= n; i++) 
      {
         for (int j = 1; j <= n-i; j++) 
         {
            cout << " ";
         }
         for (int k = 1; k <= 2*i-1; k++) 
         {
            cout << i;
         }
         cout << endl;
      }
      for (int i = n-1; i >= 1; i--) {
         for (int j = 1; j <= n-i; j++) 
         {
            cout << " ";
         }
         for (int k = 1; k <= 2*i-1; k++) 
         {
            cout << i;
         }
         cout << endl;
      }
   }

   cout << endl;
return 0;
}