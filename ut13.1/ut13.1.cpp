#include "pch.h"
#include "CppUnitTest.h"


#include "../ап13.1/dod.cpp"   
#include "../ап13.1/dod.h"     
#include "../ап13.1/sum.h"     
#include "../ап13.1/var.h"     
#include "../ап13.1/sum.cpp"
#include "../ап13.1/var.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

namespace UnitTest35
{
	TEST_CLASS(UnitTest35)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			eps = 0.0001;
			x = 3;
			n = 0;
			double r = 0.;
			nsDod::dod();
			Assert::AreEqual(r, a, 0.1);
		}
	};
}

