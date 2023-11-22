#include "pch.h"
#include "CppUnitTest.h"
#include "../PR-13.1/var.cpp"
#include "../PR-13.1/dod.cpp"


using namespace nsDod;
using namespace nsVar;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest131
{
	TEST_CLASS(UnitTest131)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			x = 2;
			n = 1;
			a = 1.0;

			dod();

			Assert::AreEqual(a, 4, 0.1);
		}
	};
}
