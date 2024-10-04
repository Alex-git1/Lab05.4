#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab05.4/Lab05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethodP0)
		{
			Assert::AreEqual(P0(1,2), 18.735, 0.1);
		}
	};
}
