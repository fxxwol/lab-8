#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab-8.1string/Lab-8.1string.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string s("sh,k-'/,[-+");
			int t = Count(s);
			Assert::AreEqual(2, t);
		}
	};
}
