#ifndef ZASOBY_H_
#define ZASOBY_H_

// Pliki nagłówkowe:
#include <ncurses.h>
#include <thread>
#include <random>
#include <queue>

// Zasoby:
std::queue<long long> LICZBY_LOSOWE;
long long SUMA_W_KWADRACIE1;
long long SUMA_W_KOLE1;
long long SUMA_W_KWADRACIE2;
long long SUMA_W_KOLE2;
long long LACZNIE_W_KWADRACIE;
long long LACZNIE_W_KOLE;
double PI;

// Wątki:
#include "watki.h"

#endif /* ZASOBY_H_ */
