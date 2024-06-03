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



void nrSecvente(int v[], int dim, int k, int t) {

	int ct = 0;
	for (int i = 0; i < dim; i++) {
		bool valid = true;
		for (int j =i; j < k; j++) {
			if (v[j] > t) {
				valid = false;
			}
		}
		if (valid == true) {
			ct++;
		}
	}
	cout << "Numarul de secvente de lungime " << k << " cu valori mai mici sau egale cu " << t << " este: " << ct << endl;
}

void vectorFrecventaNumere(int v[], int dim, int f[]) {
	for (int i = 0; i < dim; i++) {
		f[v[i]]++;
	}
}


int douaElemEgale(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		for (int j = i + 1; j < dim; j++) {
			if (v[i] == v[j]) {
				return true;
			}
		}

	}
	return false;
}


void afisareVec(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}

}


void kSecventa1(int v[], int dim, int k) {

	int f[100]{};
	for (int i = 0; i < dim; i++) {
		int j = i + 1;
		int ct = 0;
		while (j < dim && v[i] == v[j]) {

			ct++;
			j++;
		}
		f[v[i]] = ct;
		i = j;

		
	}

	if (douaElemEgale(f, dim) == true) {
		cout << "exista" << endl;
	}
	else {
		cout << "nu exista" << endl;
	}

}


void SecvEgale1(int v[], int dim) {

	int smax = 0;
	int dmax = 0;
	int l = 0;
	int maxl = 0;

	for (int i =0; i <= dim; i++) {
		for (int j = dim - 1; j > i; j--) {
			if (v[i] == v[j]) {
				l = j - i + 1;
			}
			if (l > maxl) {
				smax = i;
				dmax = j;
				maxl = l;
			}
		}
	}
	cout << smax << " " << dmax;
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

void Secvente1(int v[], int dim, int k) {

	int ct = 1;
	int nrElemImp = 0;

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 != 0) {
			nrElemImp++;
		}
		if (nrElemImp > k) {
			ct++;
		}
	}
	cout << ct << endl;
}


int pozPrimElemPare(int v[], int dim) {

	for (int i = 0; i < dim; i++) {
		if (v[i] % 2 == 0) {
			return i;
		}
	}
}

int pozUltimElemPare(int v[], int dim) {

	for (int i = dim-1; i >= 0; i--) {
		if (v[i] % 2 == 0) {
			return i;
		}
	}
}


int secventaVectoParSuma(int v[], int dim) {

	int primulElem = pozPrimElemPare(v, dim);
	int ultimulElem = pozUltimElemPare(v, dim);
	int suma = 0;

	for (int i = primulElem; i <= ultimulElem; i++) {
		suma += v[i];
	}

	return suma;
}

void sumaSecvMax(int v[], int dim) {

	int suma = secventaVectoParSuma(v, dim);
	
	cout << " Suma este " << suma << endl;

	bool gasit = true;
	for (int i = 0; i < dim; i++) {
		int sum = 0;
		for (int j = i; j < dim; j++) {
			sum += v[j];
			if (sum<suma) {
				gasit = true;
				for (int k = i; k <= j; k++) {
					cout << v[k] << " ";
				}
				cout << endl;
			}
		}
	}
}

void secvCresc1(int v[], int dim) {
	int smax = 0;
	int dmax = 0;
	int ct = 0;

	for (int i = 0; i < dim; i++) {
		int j = i;
		while (j < dim - 1 && v[j] <= v[j + 1]) {
			j++;
		}
		if (j - i + 1 > dmax - smax) {
			smax = i;
			dmax = j;
		}
		i = j;

	}
	cout << smax+1 << " " << dmax+1;

}

void secv10(int v[], int dim) {

	int ct = 0;
	int lungimeMaxima = 0;

	for (int i = 0; i < dim; i++) {

		for (int j = i; j < dim; j++) {
			if (v[j] % 10 == 0) {
				ct++;
				lungimeMaxima = j - i + 1;
			}
		}

	}
	cout << " Numarul de secventa cu elemente divizibile cu 10 este " << ct << " iar lungimea maxima este " << lungimeMaxima << endl;
}

void SumaInSecv(int v[], int dim, int S) {

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

void Memory006(int v[], int dim, int k) {

	int putere = 1 << k;

	int ct = 0;

	for (int i = 0; i < dim; i++) {
		int produs = 1;
		for (int j = i; j < dim; j++) {
			produs *= v[j];
			if (produs == putere) {
				ct++;

			}
		}
	}
	cout << ct << endl;
}
