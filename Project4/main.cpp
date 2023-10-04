#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main() {

    object_a a;
    object_b b(a);

    cout << b.b << endl;

    system("pause");

    return 0;
}