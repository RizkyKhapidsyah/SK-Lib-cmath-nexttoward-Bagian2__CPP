
#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
	Source by GeeksForGeeks
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	// using nexttoward
	printf("Angka floating point positif terkecil : %e\n", nexttoward(0.0, 1.0));
	printf("Angka floating point negatif terbesar : %e\n", nexttoward(0.0, -1.0));
	printf("Angka floating point positif terbesar lebih kecil dari 0,5 : %e\n", nexttoward(0.5, 0.0));

	_getch();
	return (0);
}
