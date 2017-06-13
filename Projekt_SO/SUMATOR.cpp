#include "watki.h"

void SUMATOR()
{
	while (true)
	{
		// Czekaj na notify:
		std::mutex mx;
		{
			std::unique_lock<std::mutex> lock(mx);
			SUMATOR_cv.wait(lock);
		}

		// Dodaj sumy częściowe i zapisz je do zmiennych LACZNIE:
		LACZNIE_W_KWADRACIE = SUMA_W_KWADRACIE1 + SUMA_W_KWADRACIE2;
		LACZNIE_W_KOLE = SUMA_W_KOLE1 + SUMA_W_KOLE2;

		// Wyślij notify, że zmodyfikowano sumę całkowitą:
		APROKSYMACJA_cv.notify_one();
	}
}
