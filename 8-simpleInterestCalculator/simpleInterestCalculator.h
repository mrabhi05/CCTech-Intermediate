#include <iostream>
using namespace std;
#include <stdlib.h>

class SICalculator
{
public:
    SICalculator(const double& principleAmount, const double& rate,const double& duration);
    double calculateSimpleInterest();
private:
    double myPrinciple;
    double myRate;
    double mySimpleInterest;
    double myDuration;
};

SICalculator::SICalculator(const double& principleAmount = 0, const double& rate = 0,const double& duration = 0):
    myPrinciple(principleAmount),myRate(rate),myDuration(duration)
{
    if(myPrinciple < 0 || myRate < 0 || myDuration < 0) 
    {
        cerr << "Input can't be a negative value\n";
        exit(EINVAL);
    }
}
double SICalculator::calculateSimpleInterest()
{
    mySimpleInterest = (myPrinciple * myRate * myDuration)/100;
    return mySimpleInterest;
}
