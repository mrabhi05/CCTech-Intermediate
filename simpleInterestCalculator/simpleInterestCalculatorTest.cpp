#include <iostream>
using namespace std;
#include "echo.h"
#include <cassert>

// Driver Code
int main(void)
{   
    assert(echoCommand(1,"")=='\n');
    assert(echoCommand(1,"foo")==true);
}
 