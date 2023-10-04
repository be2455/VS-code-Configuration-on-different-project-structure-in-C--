#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main() {

    object_a a;
    object_b b(a);

    cout << b.b << endl;
    b.Print_test();
    system("pause");

    return 0;
}