#include <iostream>
using namespace std;


int main (){
    //Tugas 2.
    // menukarkan variable dengan variable sementara
    int k = 18, n = 19, m;

    m = k;
    k = n;
    n = m;

    cout << "menukarkan Variable dengan variable sementara" << endl;
    cout << "K: " << k << endl << "N: " << n << endl;

    //menukarkan dua variable tanpa variable sementara
    int x = 10, y = 15;

    x = x+y; //25
    y = x-y; //10
    x = x-y; //15

    cout << "\nMenukarkan dua variable tanpa variable sementara" << endl;
    cout << "X: " << x << endl << "Y: " << y << endl;

    return 0;
}
