#include "watki.h"

void NCURSES()
{
	initscr(); // Zainicjuj ekran ncurses.

	while (true)
	{
		// Wypisz dane na temat zasobów:
		printw("LICZBY_LOSOWE(size):   %12lld\n", LICZBY_LOSOWE.size());
		printw("SUMA_W_KWADRACIE1:     %12lld\n", SUMA_W_KWADRACIE1.load());
		printw("SUMA_W_KOLE1:          %12lld\n", SUMA_W_KOLE1.load());
		printw("SUMA_W_KWADRACIE2:     %12lld\n", SUMA_W_KWADRACIE2.load());
		printw("SUMA_W_KOLE2:          %12lld\n", SUMA_W_KOLE2.load());
		printw("LACZNIE_W_KWADRACIE:   %12lld\n", LACZNIE_W_KWADRACIE.load());
		printw("LACZNIE_W_KOLE:        %12lld\n", LACZNIE_W_KOLE.load());
		printw("PI:                    %12.9lf\n", PI.load());

		// Przerysuj ekran i czekaj sekundę:
		refresh();
		std::this_thread::sleep_for(std::chrono::seconds(1));

		// Czyść ekran:
		clear();
	}

	endwin(); // Zakończ zarzadzanie ekranem.
}
