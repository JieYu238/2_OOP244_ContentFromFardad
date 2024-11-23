#include <iostream>
#include "Array.h"

using namespace std;



template<typename type>
void prnArray(Array<type> D) {
    size_t i;
    cout << "printing " << D.size() << " elements:\n";
    for (i = 0; i < D.size(); i++) {
        if (i) cout << ",";
        cout << D[i];
    }
    cout << endl;
}

int main() {
    Array<double> D(5);
    Array<int> I(10), J(100);
    for (size_t i = 0; i < 7; i++) {
        D[i] = 1.1 * (i + 10);
    }

    prnArray(D);

    for (size_t i = 0; i < 7; i++) {
        I[i] =  (static_cast<int>(i) + 10);//related
    }
    
    J = I;
    prnArray(J);
    cout << "The address of I is: " << &I << endl;
    cout << "The address of J is: " << &J << endl;

    cout << "The address of I is: " << reinterpret_cast<unsigned long long>(&I) << endl;
    cout << "The address of J is: " << reinterpret_cast<unsigned long long>(&J) << endl;
    return 0;
}