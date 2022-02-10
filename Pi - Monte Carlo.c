#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


double drand48(void);

bool circulo () {
	double x = drand48();
	double y = drand48();
	float x_quadrado = pow(x, 2);
	if (y <= sqrt(1 - x_quadrado)) {
		return true;
	} else {
		return false;
	}
}


int main(void) {
	double npac, ntp = 0;
	double quociente = 0;
	double diferenca;
	bool menor_diferenca = false;
	
	do {
		if (circulo()) {
			npac++;
		}
		ntp++;
		quociente = npac/ntp;
		diferenca = 4*quociente - M_PI;
		if (diferenca < 0) {
		    diferenca = diferenca*(-1);
		}
        if (diferenca < 0.0001) {
            menor_diferenca = true;
        }
	} while (!menor_diferenca);
	
	printf("%f", ntp);
}
