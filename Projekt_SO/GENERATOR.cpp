#include "watki.h"

void GENERATOR()
{
	// Inicjalizacja random:
	std::random_device urandom("/dev/urandom");                                    // Silnik generowania wartości losowych. Silnik /dev/urandom.
	std::uniform_int_distribution<long long> distribution(-1LL*promien, promien);  // Dystrybucja wartości losowych. Dystrybucja równomierna.

	while (true)
	{
		// Utwórz locka, dodawaj liczby do kolejki tylko wtedy kiedy jest ich mniej niż 200:
		std::unique_lock<std::mutex> lock(LICZBY_LOSOWE_mx);
		GENERATOR_cv.wait(lock, []{ return LICZBY_LOSOWE.size() < 200; });
		LICZBY_LOSOWE.push(distribution(urandom));
		PRZETWARZACZ_cv.notify_one();
	}
}
