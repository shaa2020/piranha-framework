#include <gtest/gtest.h>
#include "../server-container/func.c"

char* comparableString = "hello";

TEST(funcTest) {
	ASSERT_EQ(comparableString,strupr("hello"));

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}