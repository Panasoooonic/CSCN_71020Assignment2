#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
//extern "C" int getArea(int length, int width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PerimeterTest
{
	TEST_CLASS(PerimeterTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int x = 1;
			int y = 1;
			int expected_result = 3;
			int actual_result = getPerimeter(&x, &y);
			Assert::AreEqual(expected_result, actual_result);
		}
	};
}
