#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest01
{
	TEST_CLASS(UnitTest01)
	{
	public:
		
		TEST_METHOD(TestPerimeter)
		{
			int x = 1;
			int y = 1;
			int expected_result = 3;
			int actual_result = getPerimeter(&x, &y);
			Assert::AreEqual(expected_result, actual_result);
		}

		TEST_METHOD(TestArea)
		{
			int x = 1;
			int y = 1;
			int expected_result = 2;
			int actual_result = getArea(&x, &y);
			Assert::AreEqual(expected_result, actual_result);
		}

		TEST_METHOD(TestMaxLengthLimit01)
		{
			int input = 101;
			int length = 1;
			setLength(input, &length);
			bool expected_result = false;
			bool actual_Result = (length == input);
			Assert::IsTrue(actual_Result == expected_result);
		}
		TEST_METHOD(TestMinLengthLimit02)
		{
			int input = 0;
			int length = 1;
			setLength(input, &length);
			bool expected_result = false;
			bool actual_Result = (length == input);
			Assert::IsTrue(actual_Result == expected_result);
		}

		TEST_METHOD(TestNormalLength03)
		{
			int input = 50;
			int length = 1;
			setLength(input, &length);
			bool expected_result = true;
			bool actual_Result = (length == input);
			Assert::IsTrue(actual_Result == expected_result);
		}

		TEST_METHOD(TestMaxWidthLimit01)
		{
			int input = 101;
			int length = 1;
			setWidth(input, &length);
			bool expected_result = false;
			bool actual_Result = (length == input);
			Assert::IsTrue(actual_Result == expected_result);
		}
		TEST_METHOD(TestMinWidthLimit02)
		{
			int input = 0;
			int length = 1;
			setWidth(input, &length);
			bool expected_result = false;
			bool actual_Result = (length == input);
			Assert::IsTrue(actual_Result == expected_result);
		}

		TEST_METHOD(TestNormalWidth03)
		{
			int input = 50;
			int length = 1;
			setWidth(input, &length);
			bool expected_result = true;
			bool actual_Result = (length == input);
			Assert::IsTrue(actual_Result == expected_result);
		}

	};
}
