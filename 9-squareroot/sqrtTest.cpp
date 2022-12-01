#include <cassert>
#include "sqrt.h"

int main(){
    assert(abs(squareRoot(9) - 3) < 1e-9);
    assert(abs(squareRoot(-1) == 1));
    assert(abs(squareRoot(2) - 1.41421356237) < 1e-9);
    assert(abs(squareRoot(0) - 0) < 1e-9);
}
