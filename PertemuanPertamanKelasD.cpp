#include <iostream>
using namespace std;
int main()
{
    //begin
    //numeric : nAlas, nTingg, nLuas
    int nAlas, nTinggi;
    double nLuas;
    //display "Masukkan alasnya"
    cout << "Masukkan alasnya : ";
    //accept nAlas
    cin >> nAlas;
    //display "Masukkan tingginya"
    cout << "Masukkan tingginya : ";
    //accept nTinggi
    cin >> nTinggi;
    //compute nLuas = o.5 * nAlas * nTinggi
    nLuas = 0.5 * nAlas * nTinggi;
    //display nLuas
    cout << "Luasnya adalah :" << nLuas << endl;
}