#include "watki.h"
#include "zasoby.h"

int main()
{
	std::thread GENERATOR_t(GENERATOR);
	std::thread PRZETWARZACZ1_t(PRZETWARZACZ1);
	std::thread PRZETWARZACZ2_t(PRZETWARZACZ2);
	std::thread SUMATOR_t(SUMATOR);
	std::thread APROKSYMACJA_t(APROKSYMACJA);
	std::thread NCURSES_t(NCURSES);

	GENERATOR_t.join();
	PRZETWARZACZ1_t.join();
	PRZETWARZACZ2_t.join();
	SUMATOR_t.join();
	APROKSYMACJA_t.join();
	NCURSES_t.join();

	return 0;
}
