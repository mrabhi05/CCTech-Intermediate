#include <iostream>
using namespace std;
#include <stdlib.h>

int closestToZero(int list[],int length) {   

    int result=list[0];

    int diff=abs(list[0]);
    for(int i=1;i<length;i++)
    {
        if(abs(list[i]) < diff)
        {
            result=list[i];
            diff=abs(list[i]);
        }
        if(diff==abs(list[i]) && list[i]>result)
            result=list[i];
        }
        return result;
}
