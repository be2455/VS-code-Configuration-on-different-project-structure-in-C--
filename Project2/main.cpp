#include <iostream>
#include <Eigen/Dense>

using namespace std;
using namespace Eigen;


int main() {

    Matrix2d A;

    A << 1, 1, 1, 1;

    cout << A << endl;

    return 0;
}