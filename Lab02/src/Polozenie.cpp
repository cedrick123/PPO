#include <iostream>
#include "Czas.h"
#include "Polozenie.h"
#include "Predkosc.h"
#include "Przyspieszenie.h"
#include <math.h>

double PolozeniePoczatkowe(void){
	return 22;
}

double Polozenie(void){
	return Przyspieszenie() * pow(Czas(), 2) * 0.5 + PredkoscPoczatkowa()*Czas() + PolozeniePoczatkowe();  
}