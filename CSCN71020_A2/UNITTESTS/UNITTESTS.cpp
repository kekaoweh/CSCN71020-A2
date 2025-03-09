#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "../BCSRec/main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UNITTESTS
{
	TEST_CLASS(UNITTESTS)
	{
	public:
		
		TEST_METHOD(TESTgetPerimeter)
		{
			// define values
			int length = 1, width = 1;
			int expected = 2 * (length + width);

			int actual = getPerimeter(&length, &width);

			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TESTgetArea)
		{
			// define values
			int length = 9, width = 5;
			int expected = length * width;

			int actual = getArea(&length, &width);

			Assert::AreEqual(expected, actual);
		}

		// unique test cases for set length
		TEST_METHOD(TESTsetLength_NORMALCASE)
		{
			// define values
			int length = 4, input = 40;
			
			setLength(input, &length);

			Assert::AreEqual(40, length);
		}

		TEST_METHOD(TESTsetLength_ABNORMALCASE_BELOWZERO)
		{
			// define values
			int length = 6, input = -6;

			setLength(input, &length); 

			Assert::AreEqual(6, length);
		}

		TEST_METHOD(TESTsetLength_ABNORMALCASE_ABOVE99) 
		{
			// define values
			int length = 8, input = 180;

			setLength(input, &length);

			Assert::AreEqual(8, length);
		}

		// unique test cases for set width
		TEST_METHOD(TESTsetWidth_NORMALCASE)
		{
			// define values
			int width = 3, input = 30; 

			setWidth(input, &width);  

			Assert::AreEqual(30, width); 
		}

		TEST_METHOD(TESTsetWidth_ABNORMALCASE_ZERO)
		{
			// define values
			int width = 8, input = 0;

			setWidth(input, &width); 

			Assert::AreEqual(8, width);
		}

		TEST_METHOD(TESTsetWidth_SAMEVALUES)
		{
			// define values
			int width = 40, input = 40; 

			setWidth(input, &width); 

			Assert::AreEqual(40, width);
		}
	};
}
