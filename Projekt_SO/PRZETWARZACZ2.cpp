#include "watki.h"

void PRZETWARZACZ2()
{
	// Reprezentacja współrzędnych:
	long long x;
	long long y;

	// Obliczenia na podstawie Twierdzenia Pitagorasa:
	long long obliczenia;

	while (true)
	{
		// Utwórz locka; pobierz wartość x, jak na kolejce jest chociaż jedna liczba losowa; wyślij notify, że liczba została pobrana:
		{
			std::unique_lock<std::mutex> lock(LICZBY_LOSOWE_mx);
			PRZETWARZACZ_cv.wait(lock, []{ return LICZBY_LOSOWE.size() > 0; });
			x = LICZBY_LOSOWE.front();
			LICZBY_LOSOWE.pop();
			GENERATOR_cv.notify_one();
		}

		// Utwórz locka; pobierz wartość y, jak na kolejce jest chociaż jedna liczba losowa; wyślij notify, że liczba została pobrana:
		{
			std::unique_lock<std::mutex> lock(LICZBY_LOSOWE_mx);
			PRZETWARZACZ_cv.wait(lock, []{ return LICZBY_LOSOWE.size() > 0; });
			y = LICZBY_LOSOWE.front();
			LICZBY_LOSOWE.pop();
			GENERATOR_cv.notify_one();
		}

		// Dokonaj obliczeń:
		obliczenia = x*x + y*y;

		// Porównaj obliczenia i promień i zwiększ odpowiedni licznik:
		if(obliczenia < promien2) // Jeżeli punkt w kole to:
		{
			SUMA_W_KOLE2++;
		}
		else
		{
			SUMA_W_KWADRACIE2++;
		}

		// Wyślij notify, że liczniki zostały zmienione:
		SUMATOR_cv.notify_one();
	}
}
