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
    test(quiz, "1", "9,7,5,3,1\n7,5,3,1\n5,3,1\n3,1\n1\n3,1\n5,3,1\n7,5,3,1\n9,7,5,3,1\n");
    test(quiz, "2", "8,6,4,2\n6,4,2\n4,2\n2\n4,2\n6,4,2\n8,6,4,2\n");


    return 0;
}
