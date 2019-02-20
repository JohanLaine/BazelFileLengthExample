
#include <gtest/gtest.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void foo() {
    string line;
    ifstream myfile ("./LongNameForFolderNumberOne/LongNameForFolderNumberTwo/example.txt");
    cout << "Hello there" << endl;
    ASSERT_TRUE(myfile.is_open());
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }
}


TEST(SimpleTest, ReadingTest)
{
    foo();
}
