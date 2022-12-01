#include <iostream>
using namespace std;
#include "simpleInterestCalculator.h"
#include <cassert>

// Driver Code
int main(int argc, char* argv[])
{   
    assert(SICalculator(262000,6,5).calculateSimpleInterest()==78600);
    assert(SICalculator(51000,15,12).calculateSimpleInterest()==91800);
    cout << "All Test cases passed";
}
 