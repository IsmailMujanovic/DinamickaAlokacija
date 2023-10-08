#include <iostream>
using namespace std;

bool isPrime(int n) {
	bool ProstBroj = false;
	for (int i = 2; i <= n/2; i++) {
		if (n % i == 0) {
			ProstBroj = true;
			break;
		}
	}
	return ProstBroj;
}

int* DinamickiAlociranNiz(int n) {
	int* niz = new int[n];
	if (n < 1) throw range_error("Broj prostih brojeva mora biti pozitivan");
	int j = 0;
	for (int i = 0; i < n*n; i++) {
		if (isPrime(i) == true) {
			niz[j] = i;
			j++;
			if (j >= n)
				break;
		}
	}
	return niz;
}

int main(){
	int n;
	cout << "Unestite broj prostih brojeva u nizu: " << endl;
	cin >> n;

	try {
		int* ptr = DinamickiAlociranNiz(n);
		cout << "Vas niz je: " << endl;
		for (int i = 0; i < n; i++)
			cout << ptr[i] << endl;
		cout << endl;
		delete[] ptr;
	}
	catch (range_error izuzetak) {
		cout << izuzetak.what() << endl;
	}
	catch (bad_alloc izuzetak) {
		cout << "Alokacija nije uspjela" << endl;
	}

	return 0;
}