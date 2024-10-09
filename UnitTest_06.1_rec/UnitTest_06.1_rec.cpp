#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_06.1_rec/lab_06.1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest061rec
{
	TEST_CLASS(UnitTest061rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int size = 9;
			int arr[] = { -5, -2, -3, -1, 0, 1, 3, 2, 5 };
			Assert::AreEqual(sum(arr, size, 0), -2);
		}
	};
}
