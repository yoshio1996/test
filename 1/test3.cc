#include <iostream>
#include <complex>
using namespace std;
int main(){
    const double d1 {2.3};
    double d2{2.3};
    const complex<double> z1 {d1, d2};
    complex<double> z2(1,2);
    complex<double> y;
    y=z1*z2;
    cout << y <<"\n";
    return 0;
}
