//
// Don't modify code in this file, with the exception
// of adding test cases.
//
#include <iostream>
#include <fstream>
#include "apex_code.h"

using namespace std;

#define TEST_FUNC_PTR void (*test_func)(stringstream&, stringstream&)
void test(TEST_FUNC_PTR, const string& input, const string& expected)
{
    stringstream in_stream(input);
    stringstream out_stream;
    test_func(in_stream, out_stream);

    if(expected == out_stream.str())
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "With input \"" << input << "\" expected output \"" << expected
             << "\", received \"" << out_stream.str() << "\"" << endl;
    }
}

int main()
{
    // To add a test case, duplicate one of the test lines below
    // modify input with the first string, and the expected output
    // in the second string.
    test(quiz, "1", "1,2,3,4,5,6,7,8,9 1,2,3,4,5,6,7,8,9 1,2,3,4,5,6,7,8,9 \n");
    test(quiz, "2", "1,2,3,4,5,6,7,8,9 1,2,3,4,5,6,7,8,9 1,2,3,4,5,6,7,8,9 \n2,4,6,8,10,12,14,16,18 2,4,6,8,10,12,14,16,18 2,4,6,8,10,12,14,16,18 \n");
    test(quiz, "4", "1,2,3,4,5,6,7,8,9 1,2,3,4,5,6,7,8,9 1,2,3,4,5,6,7,8,9 \n2,4,6,8,10,12,14,16,18 2,4,6,8,10,12,14,16,18 2,4,6,8,10,12,14,16,18 \n3,6,9,12,15,18,21,24,27 3,6,9,12,15,18,21,24,27 3,6,9,12,15,18,21,24,27 \n4,8,12,16,20,24,28,32,36 4,8,12,16,20,24,28,32,36 4,8,12,16,20,24,28,32,36 \n");


    return 0;
}