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

			Assert::AreEqual(expected, actual, L"Function returned wring value.");
		}

		TEST_METHOD(TESTgetArea)
		{
			// define values
			int length = 9, width = 5;
			int expected = length * width;

			int actual = getArea(&length, &width);

			Assert::AreEqual(expected, actual);
		}
	};
}
