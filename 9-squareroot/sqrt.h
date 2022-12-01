#include <iostream>
#include <cassert>
#include <math.h>
#include <cstring>
#include <cerrno>
using namespace std;

double squareRoot(double num){
    try {
        errno = 0;
        double result = sqrt(num);
        if(errno != 0){
            throw strerror(errno);
        }
        return result;
    }
    catch(char* e){
        cout << e << endl;
        exit(errno);
    }
}
