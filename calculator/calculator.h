#include <iostream>
using namespace std;
#include <stdlib.h>

string echoCommand(int argc, string argv) {   

    string output_string = "";
    for(int i = 1; i < argc; ++i)
    {
        output_string += argv[i];
        output_string += " ";
    }
    cout << output_string << endl;
    return output_string;
}

// Assignment 1