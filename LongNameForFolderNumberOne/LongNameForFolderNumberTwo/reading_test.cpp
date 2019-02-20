#include <gtest/gtest.h>
#include <fstream>

TEST(SimpleTest, ReadingTest)
{
    std::ifstream myfile ("./LongNameForFolderNumberOne/LongNameForFolderNumberTwo/example.txt");
    ASSERT_TRUE(myfile.is_open());
}
