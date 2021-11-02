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
			const int n = 1;
			int c[n];
			c[0] = 1;

			double t = ArithmeticMean(c, n);

			Assert::AreEqual(t, 1.);
		}
	};
}
