#include <iostream>
#include <string>
#include <algorithm>
#include <cassert>
#include <fstream>

using namespace std;

string removePath(const string file_path)    // remove file path i.e. directory
{
    size_t position = file_path.find_last_of("/\\");
    return file_path.substr(position+1);
}

string removeExtension(const string file_name)   // remove extension from filename
{
    size_t position = file_name.find_last_of('.');
    return file_name.substr(0,position);
}

string removeSeparators(string file_name) // removing separatoes e.g, _ - .
{
    char characters_to_be_removed[] = {'_','-','.'};
    for(char character:characters_to_be_removed)
    {
    auto t = remove(file_name.begin(),file_name.end(),character);
    file_name.erase(t,file_name.end());
    }
    return file_name;
}



string removeWords(string file_name)  // exclude words
{
    string skipWords[] = {"tests","test","Tests","Test","spec","Spec","steps","step"};
    for(string skipWord : skipWords)
    {
        size_t position = file_name.find(skipWord,0);
        if(position != string::npos)
            file_name.erase(position,skipWord.length());
    }
    return file_name;
}

string getIndex(const string file_path, const string file_name)    // get selected index
{
    int indexArray[2];
    size_t pos = file_path.find(file_name,0);
    indexArray[0]=pos;
    indexArray[1]=pos+file_name.length();
    return "[" + to_string(indexArray[0]) + "," + to_string(indexArray[1]) + "]";
}

string Filename(string file_path)   // caller function 
{
    string str = removeWords(removeSeparators(removeExtension(removePath(file_path))));
    return getIndex(file_path,str);
}
