#include <iostream>
using namespace std;
int main(){
    const int i=5;
    static_assert(8<=i, "i is too small\n");    //asserts_error
    return 0;
}
