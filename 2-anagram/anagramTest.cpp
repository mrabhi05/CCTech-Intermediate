#include <iostream>
#include <cassert>
#include <string>
#include <algorithm>
#include "anagram.h"
// #include <cassert>
using namespace std;

int main(int argc, char* argv[])
{   
    string inputstr;
    cin >> inputstr;
    cout << anagram(inputstr) << endl;
}