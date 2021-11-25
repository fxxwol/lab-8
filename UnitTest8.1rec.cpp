#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../Lab-8.1rec/Lab-8.1rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81rec
{
	TEST_CLASS(UnitTest81rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char s[12] = "sh,k-'/,[-+";
			int t = Count(s, 1);
			Assert::AreEqual(2, t);

		}
	};
}
