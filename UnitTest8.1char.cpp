#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab-8.1char/Lab-8.1char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
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
