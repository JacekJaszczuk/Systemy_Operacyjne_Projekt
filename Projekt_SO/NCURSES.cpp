#include "watki.h"

void NCURSES()
{
	initscr(); // Zainicjuj ekran ncurses.

	while (true)
	{
		// Wypisz dane na temat zasobów:
		printw("LICZBY_LOSOWE(size):\t\t%lld\n", LICZBY_LOSOWE.size());
		printw("SUMA_W_KWADRACIE1:\t\t%lld\n", SUMA_W_KWADRACIE1.load());
		printw("SUMA_W_KOLE1:\t\t%lld\n", SUMA_W_KOLE1.load());
		printw("SUMA_W_KWADRACIE2:\t\t%lld\n", SUMA_W_KWADRACIE2.load());
		printw("SUMA_W_KOLE2:\t\t%lld\n", SUMA_W_KOLE2.load());
		printw("LACZNIE_W_KWADRACIE:\t\t%lld\n", LACZNIE_W_KWADRACIE.load());
		printw("LACZNIE_W_KOLE:\t\t%lld\n", LACZNIE_W_KOLE.load());
		printw("PI:\t\t%lf2.9\n", PI.load());

		// Czekaj sekundę:
		std::this_thread::sleep_for(std::chrono::seconds(1));

		// Czyść ekran:
		clear();
	}

	endwin(); // Zakończ zarzadzanie ekranem.
}
