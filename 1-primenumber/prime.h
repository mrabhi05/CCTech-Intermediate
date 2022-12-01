#include <iostream>
using namespace std;
#include <stdlib.h>

bool primeNum( int number){
    
    if (number <= 1)
        return false;
    
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
 
    return true;
}


// Assignment 1