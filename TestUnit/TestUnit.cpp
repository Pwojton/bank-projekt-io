#include "pch.h"
#include "CppUnitTest.h"
#include "../kontoFinansowe.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestUnit
{
	TEST_CLASS(KontoFinanosowe)
	{
	public:
		
		TEST_METHOD(wykonajPrzelew)
		{
			float saldoPierwsze = 1000;
			float saldoDrugie = 0;
			float kwota = 100;

			kontoFinansowe Obiekt(123412, saldoPierwsze);
			kontoFinansowe Obiekt2(331412, saldoDrugie);

			Obiekt.wykonajPrzelew(Obiekt2, kwota);
			
			float wynik = saldoPierwsze - kwota;

			Assert::AreEqual(kwota, Obiekt2.sprawdzSaldo());

 
		}
	};
}
