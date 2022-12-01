#include <iostream>
using namespace std;
#include <stdlib.h>

string anagram(string inputString)
{
    sort(inputString.begin(),inputString.end());
    string result=""; 
    do
    {
        result += inputString+" ";
    } while (next_permutation(inputString.begin(),inputString.end()));
    
    return result;
}
