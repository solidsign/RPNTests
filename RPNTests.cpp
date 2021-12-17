#include "pch.h"
#include "CppUnitTest.h"
#include "RPN_calc.h"
#include "InfToRPN_Convert.h"

#include <iostream>
#include <string>

using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace RPNTests
{
	TEST_CLASS(RPNTests)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(ischar('g'));
		}
	};
}
