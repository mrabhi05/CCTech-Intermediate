#include <iostream>
using namespace std;
#include "assignment1.h"
#include <cassert>

// g++ -o <name-you-want-to-give> source.cpp


// Driver Code
int main()
{   
    assert(Filename("src/Hiker_spec.re")=="[4,9]");
    assert(Filename("test/hiker_test.exs")=="[5,10]");
    assert(Filename("wibble/test/hiker_spec.rb")=="[12,17]");
    assert(Filename("hiker_steps.rb")=="[0,5]");
    assert(Filename("hiker_spec.rb")=="[0,5]");
    assert(Filename("test_hiker.rb")=="[5,10]");
    assert(Filename("test_hiker.py")=="[5,10]");
    assert(Filename("test_hiker.sh")=="[5,10]");
    assert(Filename("tests_hiker.sh")=="[6,11]");
    assert(Filename("test_hiker.coffee")=="[5,10]");
    assert(Filename("hiker_spec.coffee")=="[0,5]");
    assert(Filename("hikerTest.chpl")=="[0,5]");
    assert(Filename("hiker.tests.c")=="[0,5]");
    assert(Filename("hiker_tests.c")=="[0,5]");
    assert(Filename("hiker_test.c")=="[0,5]");
    assert(Filename("hiker_Test.c")=="[0,5]");
    assert(Filename("HikerTests.cpp")=="[0,5]");
    assert(Filename("hikerTests.cpp")=="[0,5]");
    assert(Filename("HikerTest.cs")=="[0,5]");
    assert(Filename("HikerTest.java")=="[0,5]");
    assert(Filename("DiamondTest.kt")=="[0,7]");
    assert(Filename("HikerTest.php")=="[0,5]");
    assert(Filename("hikerTest.js")=="[0,5]");
    assert(Filename("hiker-test.js")=="[0,5]");
    assert(Filename("hiker-spec.js")=="[0,5]");
    assert(Filename("hiker.test.js")=="[0,5]");
    assert(Filename("hiker.tests.ts")=="[0,5]");
    assert(Filename("hiker_tests.erl")=="[0,5]");
    assert(Filename("hiker_test.clj")=="[0,5]");
    assert(Filename("fizzBuzz_test.d")=="[0,8]");
    assert(Filename("hiker_test.go")=="[0,5]");
    assert(Filename("hiker.tests.R")=="[0,5]");
    assert(Filename("hikertests.swift")=="[0,5]");
    assert(Filename("HikerSpec.groovy")=="[0,5]");
    assert(Filename("hikerSpec.feature")=="[0,5]");
    assert(Filename("hiker.feature")=="[0,5]");
    assert(Filename("hiker.fun")=="[0,5]");
    assert(Filename("hiker.t")=="[0,5]");
    assert(Filename("hiker.plt")=="[0,5]");
    assert(Filename("hiker")=="[0,5]");
    cout << "All test Cases Passed" << endl;
}
 