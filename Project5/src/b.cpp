#include "b.h"
#include <iostream>
using namespace std;

object_b::object_b(object_a& a) {
    b = a.a;
}

void object_b::Print_test() {
    A << 1, 1, 1, 1;
    cout << A << endl;
}