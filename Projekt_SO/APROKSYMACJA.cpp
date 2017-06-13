#include "watki.h"

void APROKSYMACJA()
{
	while (true)
	{
		// Czekaj na notify:
		std::mutex mx;
		{
			std::unique_lock<std::mutex> lock(mx);
			APROKSYMACJA_cv.wait(lock);
		}

		// Policz i zapisz aktualną wartość PI (4 <= pole kwadratu):
		PI = (double)LACZNIE_W_KOLE / (double)(LACZNIE_W_KOLE + LACZNIE_W_KWADRACIE) * 4.0;
	}
}
