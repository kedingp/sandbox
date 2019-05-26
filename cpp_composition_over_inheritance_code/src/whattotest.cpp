// whattotest.cpp
#include <math.h>
#include <cpp_composition_over_inheritance_code/whattotest.h>
 
double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}
