#ifndef B_H
#define B_H

#include "a.h"
#include <Eigen/Dense>
using namespace Eigen;

class object_b {
    private:
        Matrix2i A;
    public:
        int b;
        void Print_test();
        object_b(object_a&);
};

#endif