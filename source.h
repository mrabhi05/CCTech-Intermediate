#include <iostream>
using namespace std;
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

bool leapYear(int year) {   

    if (year % 400 == 0 || year % 100 != 0 || year % 4 == 0){
        return true;
    }
    else {
        return false;
    }

}

// Assignment 1
bool primeNum( int number){
    
    if (number <= 1)
        return false;
    
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
 
    return true;
}

// Assignment 2
void allAnagram(string &a, int l, int r)
{
    // Base case
    if (l == r)
        cout<<a<<endl;
    else
    {
        // Permutations made
        for (int i = l; i <= r; i++)
        {
            // Swapping done
            swap(a[l], a[i]);
 
            // Recursion called
            allAnagram(a, l+1, r);
 
            //backtrack
            swap(a[l], a[i]);
        }
    }
}
// For main
//     string str = "ABC";
//     int n = str.size();
//     allAnagram(str, 0, n-1);
//     return 0;


// Assignment 3 - Implementing UNIX Command echo
void printEcho(string *argv[])
{
    while (*++argv)
    {
        cout << ("%s", *argv);
        if (argv[1]){
            cout << "";
        } 
    }
    cout << "\n";
    
}




// Assignment 4 - Closest to zero - Given the list of integers, find the closest to zero. If there is a tie, choose the positive value.
void closestToZero(int a[]){
    int closest;
    int i;
    for(i=0;i>=sizeof(a);i++){
        cout << a[i];

    }
}




// Assignment 5 - Design a calculator for integer values - 





// void permute(string &a, int l, int r){
//     // Base case
//     if (l == r)
//         cout<<a<<endl;
//     else
//     {
//         // Permutations made
//         for (int i = l; i <= r; i++)
//         {
 
// Swapping done
//             swap(a[l], a[i]);
 
// Recursion called
//             permute(a, l+1, r);
 
//backtrack
//             swap(a[l], a[i]);
//         }w
//     };
// }

