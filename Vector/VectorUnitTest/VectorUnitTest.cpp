#include "CppUnitTest.h"
#include "../Vector/Vector.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace VectorUnitTest
{		
	Vector s;
	std::vector<int> v{ 1,2,3,4,5};
	Vector s2;
	std::vector<int> v2;
	Vector s3;
	std::vector<int> v3{ 5 };


	TEST_CLASS(UnitTest1)
	{
		
	public:
		
		TEST_METHOD(SUM_VECTOR_WITH_SIZE_LARGER_THAN_ONE)
		{
			Assert::AreEqual(15,s.sum(v));
		}
		TEST_METHOD(MAX_VECTOR_WITH_SIZE_LARGER_THAN_ONE)
		{
			Assert::AreEqual(5, s.max(v));
		}
		TEST_METHOD(MIN_VECTOR_WITH_SIZE_LARGER_THAN_ONE)
		{
			Assert::AreEqual(1, s.min(v));
		}
		TEST_METHOD(AVERAGE_VECTOR_WITH_SIZE_LARGER_THAN_ONE)
		{
			Assert::AreEqual((double)3, s.average(v));
		}
		//-----------------------------------------------------------//
		TEST_METHOD(SUM_EMPTY_VECTOR)
		{
			Assert::AreEqual(-1, s2.sum(v2));
		}
		TEST_METHOD(MAX_EMPTY_VECTOR)
		{
			Assert::AreEqual(-1, s2.max(v2));
		}
		TEST_METHOD(MIN_EMPTY_VECTOR)
		{
			Assert::AreEqual(-1, s2.min(v2));
		}
		TEST_METHOD(AVERAGE_EMPTY_VECTOR)
		{
			Assert::AreEqual((double)-1, s2.average(v2));
		}

	};
}