#ifndef ZASOBY_H_
#define ZASOBY_H_

// Zasoby:
std::queue<long long> LICZBY_LOSOWE;
long long SUMA_W_KWADRACIE1;
long long SUMA_W_KOLE1;
long long SUMA_W_KWADRACIE2;
long long SUMA_W_KOLE2;
long long LACZNIE_W_KWADRACIE;
long long LACZNIE_W_KOLE;
double PI;

// Stałe:
const long long promien = 1000000LL;
const long long promien2 = promien*promien;

// Mutexy:
std::mutex LICZBY_LOSOWE_mx;
std::condition_variable GENERATOR_cv;
std::condition_variable PRZETWARZACZ_cv;

#endif /* ZASOBY_H_ */
