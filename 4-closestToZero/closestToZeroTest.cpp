#include <iostream>
using namespace std;
#include "closestToZero.h"
#include <cassert>

// Driver Code
int main(int argc, char* argv[])
{   
    int test1[] = {-2,4,-3,5};
    assert(closestToZero(test1,sizeof(test1)/sizeof(int))==-2);
    int test2[] = {-2,4,2,-3,5};
    assert(closestToZero(test2,sizeof(test2)/sizeof(int))==2);
    cout << "All test case passed!";
}
 