#pragma once
#include <iostream>
#include <string.h>
using namespace std;

void secventaVector(int v[], int dim, int smax, int dmax) {

	for (int i = 0; i < dim; i++) {
		if ((v[i]) % 2 == 1) {
			int j = i;
			while (j + 1 < dim && v[j + 1] % 2 == 1) {
				j++;
			}
			if (j - 1 + 1 > dmax - smax) {
				smax = i;
				dmax = j;
			}
			i = j;
		}
	}
}

void secventaVectorNenule(int v[], int dim) {
	int smax = 0,dmax = 0;
	for (int i = 0; i < dim; i++) {
		if ((v[i]) == 0) {
			int j = i;
			while (j + 1 < dim && v[j + 1] == 0) {
				j++;
			}
			if (j - i > dmax - smax) {
				smax = i;
				dmax = j;
			}
			i = j;
		}
	}
	cout << "Cea mai lunga secventa de elemente nule incepe de la pozitia " << smax << " si sa termina la pozitia " << dmax << endl;
}

void secventaVectorEgale(int v[], int dim) {

	int smax = 0;
	int dmax = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] == v[i + 1]) {
			int j = i;
			while (j + 1 < dim && v[j] == v[j + 1]) {
				j++;
			}
			if (j - i > dmax - smax) {
				smax = i;
				dmax = j;
			}
			i = j;

		}
	}
	cout << "Cea mai lunga secventa de elemente egale incepe de la pozitia " << smax << " si sa termina la pozitia " << dmax << endl;
}

int pozPrimElemImp(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 != 0) {
			return i;
		}
	}
}

int pozUltimElemImp(int v[], int dim) {

	for (int i = dim; i >=0; i--) {
		if (v[i] % 2 != 0) {
			return i;
		}
	}
}

void secventaVectorImparSuma(int v[], int dim) {

	int primulElem = pozPrimElemImp(v, dim);
	int ultimulElem = pozUltimElemImp(v, dim);
	int suma = 0;

	for (int i = primulElem; i <= ultimulElem; i++) {
		suma += v[i];
	}

	cout << "Suma elementelor din secventa determinata de primul si ultimul element impar este: " << suma << endl;
}

bool secventa1(int v1[], int dim1, int v2[], int dim2) {

	int smax = 0;
	int dmax = 0;

	for (int i = 0; i < dim1; i++) {
		
		if (v1[i] == v2[0]) {

			int j = i;

			while (v1[i] == v2[j]&&j<dim2) {

				j++;
			}

			if (j == dim2) {
				return true;
			}

		}
	}


	return false;
}



int secventa2(int v1[], int dim1, int v2[], int dim2) {

	int smax = 0;
	int dmax = 0;
	int ct = 0;

	for (int i = 0; i < dim1; i++) {
		bool contine = true;
		for (int j = 0; j < dim2; j++) {
			if (v1[i + j] != v2[j]) {

				contine = false;
			}
		}

		if (contine==true) {
			ct++;
		}

	}
	return ct;
}

bool nrPrim(int numar) {

	if (numar <= 1) {
		return false;
	}

	for (int i = 2; i * i <= numar; i++) {
		if (numar % i == 0) {
			return false;
		}
	}
	return true;
}


int pozPrimElemPrim(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (nrPrim(v[i])) {
			return i;
		}
	}
}


int pozUltimElemPrim(int v[], int dim) {

	for (int i = dim; i >= 0; i--) {
		if (nrPrim(v[i])) {
			return i;
		}
	}
}

void secventaVectorSumaPrim(int v[], int dim) {

	int primulElem = pozPrimElemPrim(v, dim);
	int ultimulElem = pozUltimElemPrim(v, dim);
	int suma = 0;

	for (int i = primulElem; i <= ultimulElem; i++) {
		suma += v[i];
	}

	cout << "Suma elementelor din secventa determinata de primul si ultimul element impar este: " << suma << endl;
}

void sumaSecvS(int v[], int dim, int S) {

	for (int i = 0; i < dim; i++) {
		int sum = 0;
		for (int j = i; j < dim; j++) {
			sum += v[j];
			if (sum == S) {
				for (int k = i; k <= j; k++) {
					cout << v[k] << " ";
				}
			}
		}
	}
}

void secvCresc(int v[], int dim) {

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		int j =i;
		while (j < dim - 1 && v[j] <= v[j + 1]) {
			j++;
		}
		ct++;
		i = j + 1;
	}
	cout << "Numarul de secvente maximale crescatoare este: " << ct << endl;

}

bool kSecventa(int v[], int dim,int k) {


	if (dim % k != 0) {
		return false;
	}

}


void kSecventa1(int v[], int dim, int k) {

	int ct = 0;

	for (int i = 0; i < dim - k; i++) {

		for (int j = i + 1; j < dim - k; j++) {

			if (v[i] == v[j]);

		}

	}
}


void nrSecvente(int v[], int dim, int t, int k) {

	int smax = 0;
	int dmax = 0;

	int ct = 0;

	for (int i = 0; i < dim - t; i++) {

		for (int j = i; j < dim; j++) {

			if (v[j] <= t) {

				if (j - i > dmax - smax) {
					smax = i;
					dmax = j;
					ct++;
				}
			}
		}
	}
	cout << "Numarul de secvente de lungime " << k << " cu valori mai mici sau egale cu " << t << " este: " << ct << endl;
}

void SecvEgale1(int v[], int dim) {

	int smax = 0;
	int dmax = 0;

	for (int i = 0; i < dim; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (v[i] == v[j]) {


			}
		}
	}
}


void SecvEgale2(int v[], int dim) {

	int ct = 0;


	for (int i = 0; i < dim; i++) {
	
			int j = i;

			while (j + 1 < dim && v[j] == v[j + 1]) {
				j++;
			}

			ct++;
			i = j;
		}
	cout << "Numarul de secvente cu elemente egale este: " << ct << endl;
}