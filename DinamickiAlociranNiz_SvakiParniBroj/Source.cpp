#include <iostream>
#include <stdexcept>
#include <new>
#include <cmath>

using namespace std;

long double* DinamickiNiz(int n) {
	long double* niz = new long double[1000];
	if (n == 0) throw range_error("Broj elemenata mora biti pozitivan");
	for (int i = 0; i < n; i++) {
		niz[i] = pow(2, i);
	}
	return niz;
}

int main() {
	int n;
	cout << "Unesite broj elemenata niza: ";
	cin >> n;

	try {
		long double* ptr = DinamickiNiz(n);
		cout << "Vas niz je: " << endl;
		for (int i = 0; i < n; i++)
			cout << ptr[i] << endl;
		cout << endl;
		delete[] ptr;
	}
	catch(range_error izuzetak) {
		cout << izuzetak.what() << endl;
	}
	catch(bad_alloc izuzetak) {
		cout << "Alokacija nije uspjela" << endl;
	}

	return 0;
}