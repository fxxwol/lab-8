#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab-8.1iter/Lab-8.1iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81iter
{
	TEST_CLASS(UnitTest81iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[12] = "sh,k-'/,[-+";
			int t = Count(s);
			Assert::AreEqual(2, t);
		}
	};
}
