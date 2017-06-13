#ifndef WATKI_H_
#define WATKI_H_

// Pliki nagłówkowe:
#include <ncurses.h>
#include <thread>
#include <atomic>
#include <random>
#include <queue>
#include <mutex>
#include <condition_variable>

// Zasoby extern:
extern std::queue<long long> LICZBY_LOSOWE;
extern long long SUMA_W_KWADRACIE1;
extern long long SUMA_W_KOLE1;
extern long long SUMA_W_KWADRACIE2;
extern long long SUMA_W_KOLE2;
extern long long LACZNIE_W_KWADRACIE;
extern long long LACZNIE_W_KOLE;
extern double PI;

// Stałe extern:
extern const long long promien;
extern const long long promien2;

// Mutexy:
extern std::mutex LICZBY_LOSOWE_mx;
extern std::condition_variable GENERATOR_cv;
extern std::condition_variable PRZETWARZACZ_cv;

// Wątki:
void GENERATOR();
void PRZETWARZACZ1();
void PRZETWARZACZ2();
void SUMATOR();
void APROKSYMACJA();
void NCURSES();


#endif /* WATKI_H_ */
