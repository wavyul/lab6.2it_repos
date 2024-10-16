#include "pch.h"
#include "CppUnitTest.h"
#include "../LB6.2it/main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 10;
            int arr[SIZE]{};
            int MIN = -10;
            int MAX = 10;
            create(arr, SIZE, MIN, MAX);
            Assert::AreEqual(6.2, FindingTheArithmetic(arr, SIZE), 0.001);
        }
    };
}
