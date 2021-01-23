#include "nrandom.h"
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <time.h>

nrandom::nrandom() {
	numeroaleatorio = 0;
}

int nrandom::crearnrandom() {
	srand(time(NULL));
	numeroaleatorio = 1 + rand() % (11 - 1);
	return numeroaleatorio;
}