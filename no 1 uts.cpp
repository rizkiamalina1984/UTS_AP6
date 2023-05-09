/*  NOMOR 1 - INTEGER TO STRING
    NAMA    :   RIZKI AMALINA TRIWAHYUNI NASUTION
    NIM     :   221401123
    KOM     :   C
*/

#include <iostream> 
#include <sstream>  // header untuk stringstream
using namespace std;

int main() {

    int num = 899;    // variabel number dengan nilai 899
    stringstream ss;   // membuat objek untuk stringstream

    system ("cls");
    ss << num; 
    string str_num = ss.str();  // mengonversi stringstream menjadi string dan disimpan dalam variabel str_num

    cout << "Integer : " << num << endl;   
    cout << "String  : " << str_num << endl; 
    cout << endl;
    
    return 0;
}