#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Home\source\repos\Lab_6_2(iter)\Lab_6_2(iter)\Lab_6_2(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62iter
{
	TEST_CLASS(UnitTest62iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 0;
			const int n = 1;
			int c[n];

			CreateArray(c, n, -17, -17, t);

			Assert::AreEqual(t, 0);
		}
	};
}
