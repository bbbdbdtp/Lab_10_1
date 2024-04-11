#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_10_1/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:
        TEST_METHOD(TesthasBasicCharacters) {

            ofstream tempFile("Text.txt");
            tempFile << "BIsiciscCISIC." << std::endl;
            tempFile.close();

            Assert::AreEqual(hasBasicCharacters("text.txt"), 7);

            remove("temp.txt");
        }
    };
}