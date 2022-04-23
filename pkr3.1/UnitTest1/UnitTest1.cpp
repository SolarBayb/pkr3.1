#include "pch.h"
#include "CppUnitTest.h"
#include "../pkr3.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int N = 1;
			Student* s = new Student[N];
			s[0].kurs = 2;
			s[0].specialty = ²Ò;
			s[0].physic = 5;
			s[0].math = 5;
			s[0].inform = 5;
			Assert::AreEqual((int)s[0].math, (int)s[0].inform);
		}
	};
}
