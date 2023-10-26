#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.5/Lab 5.5.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			t = bp(3, 3, 2);
			Assert::AreEqual(t, 25);
		}
	};
}
