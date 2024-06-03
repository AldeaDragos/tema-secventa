#include "algoritmi.h"

//TEMA

// Se dă un vector cu n elemente numere naturale. Determinați cea mai lungă secvență de elemente nule din vector. Dacă în vector există mai multe secvențe de elemente nule de lungime maximă se va determina cea mai din stânga.

void sol1() {

	int v[] = { 0,1,0,0,0,5,0,0,0,2 };

	int dim = 10;

	secventaVectorNenule(v, dim);

}

//Se dă un vector cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente egale din vector. Dacă în vector există mai multe secvențe de elemente egale de lungime maximă se va determina cea mai din dreapta.
void sol2() {

	int v[] = { 5,5,1,1,1,1,2,2,2,2 };

	int dim = 10;

	secventaVectorEgale(v, dim);

}


//Se dă un vector format din n elemente, numere naturale. Calculați suma elementelor din secvența determinată de primul și ultimul element impar.
void sol3() {


	int date[] = { 12,10,15,6,7,10,19,14 };

	int dim = 8;

	secventaVectorImparSuma(date, dim);
}


//Se dă un vector x cu n elemente, numere naturale și un vector y cu m elemente, numere naturale. Să se verifice dacă vectorul y este secvență în vectorul x.
void sol4() {


	int date1[] = { 8,5,8,5,2,3,10,7,1,6 };

	int date2[] = { 8,5,2,3,10,7 };

	int dim1 = 10;

	int dim2 = 6;
	
	secventa1(date1, dim1, date2, dim2);
}

//TEMA

//Se dă un vector x cu n elemente, numere naturale și un vector y cu m elemente, numere naturale. Să se determine de câte ori este vectorul y secvență în vectorul x.

void sol5() {

	int date1[] = { 8,5,8,5,8,3,8,5,8,6 };

	int date2[] = { 8,5,8 };

	int dim1 = 10;

	int dim2 = 3;

	cout << secventa2(date1, dim1, date2, dim2);

}

//Se dă un şir format din n elemente, numere naturale. Calculaţi suma elementelor din secvenţa determinată de primul şi ultimul element prim.
void sol6() {

	int date[] = { 12,10,15,7,17,10,19,14 };

	int dim = 8;

	secventaVectorSumaPrim(date, dim);

}

//Se dă un vector format din n elemente, numere naturale nenule, şi un număr natural S. Determinaţi, dacă există o secvenţă de elemente din şir cu suma elementelor egală cu S.
void sol7() {

	int date[] = { 12,10,15,7,17,13,19,14 };

	int dim = 8;

	int S = 32;

	sumaSecvS(date, dim,S);

}

//Se dă un şir format din n elemente, numere naturale.Determinaţi câte secvenţe maximale cu elementele ordonate crescător conţine şirul.
void sol8() {

	int date[] = { 12,10,15,17,17,10,12,14 };

	int dim = 8;

	secvCresc(date, dim);

}

//Se dă un vector cu n elemente, numere naturale și două numere t și k. Să se determine câte secvențe din șir au lungimea k și sunt formate din valori mai mici sau egale cu t.
void sol9() {

	int date[] = { 1,4,3,5,7,3,4,2 };

	int dim = 3;

	int k = 3;

	int t = 5;

	nrSecvente(date, dim, k, t);
}

//Se dă un vector cu n elemente, numere naturale, și un număr k. Să se stabilească dacă în vector există două secvențe de lungime k identice.
void sol10() {

	int date[] = { 2,3,1,1,4,3,1,1,4,3,8,8 };

	int dim = 12;

	int k = 5;

	kSecventa1(date, dim, k);

}

//TEMA
//
//
//Se dă un vector cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente din vector care începe și se termină cu aceeași valoare. Dacă în vector există mai multe secvențe corecte de lungime maximă se va determina cea mai din stânga.
void sol11() {

	int date[] = { 6,6,8,3,6,6,3,8,4,3,3,4 };

	int dim = 12;

	SecvEgale1(date, dim);

}

//Se dă un vector cu n elemente, numere naturale. Determinați câte secvențe ale vectorului au toate elementele egale.
void sol12() {

	int date[] = { 4,3,3,3,5 };

	int dim = 5;

	SecvEgale2(date, dim);

}

void sol13() {

	int date[] = { 4,3,4,9,9,1,8 };

	int dim = 7;

	int k = 2;

	Secvente1(date, dim, k);
}

void sol14() {

	int date[] = { 12,10,15,7,17,10,19,14 };

	int dim = 8;

	secventaVectorSumaPrim(date, dim);
}

//Se numește secvență într-un vector toate elementele din acel vector cu indici cuprinși între două valori date.
void sol15() {

	int date[] = { 2,6,4,5,8,8,6,3,4 };

	int dim = 9;

	sumaSecvMax(date, dim);

}

//Se numește secvență într - un vector toate elementele din acel vector cu indici cuprinși între două valori date.
void sol16() {

	int date[] = { 2,6,4,5,8,9,6,3,4 };

	int dim = 9;

	secvCresc1(date, dim);

}

//Se dau n numere naturale, reprezentând elementele unui vector. Determinați lungimea maximă a unei secvențe de elemente divizibile cu 10, precum și numărul de secvențe de lungime maximă cu elemente divizibile cu 10.
void sol17() {

	int date[] = { 12,10,20,30,99,1000,1,20,500,600,5 };

	int dim = 11;

	secv10(date, dim);

}

//Se dă un vector format din n elemente, numere naturale nenule, şi un număr natural S. Determinaţi, dacă există o secvenţă de elemente din şir cu suma elementelor egală cu S.
void sol18() {


	int date[] = { 12,10,15,7,17,13,19,14 };

	int dim = 8;

	int S = 32;

	SumaInSecv(date, dim, S);

}

//Se dă un şir format din n numere naturale nenule. Să se afle numărul secvenţelor din şir care au produsul elementelor egal cu 2k, unde k este un număr natural dat.
void sol19() {

	int date[] = { 7,4,2,4,5 };

	int dim = 5;

	int k = 2;

	Memory006(date, dim, k);

}

//Se dă un șir cu n elemente, numere naturale. Determinați cea mai lungă secvență de elemente din șir cu proprietatea că oricare două valori consecutive se termină cu aceeași cifră.
void sol20() {

	int date[] = { 25,41,31,651,74,52,2,522,80,10 };

	int dim = 10;



}