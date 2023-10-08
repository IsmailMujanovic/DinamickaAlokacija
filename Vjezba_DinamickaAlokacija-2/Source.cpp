#include<iostream>
#include<vector>

using namespace std;

double* VratiReciprocno(vector<int>v) {
	double* pok = new double[v.size()]; // dinamicki alociramo niz
	for (int i = 0; i < v.size(); i++) {
		pok[i] = 1. / v[i]; // elementi novog niza su reciprocne vrijednosti
	}
	return pok; //vracamo pokazivac

}int main()
{
	vector<int> v{ 1,5,6,-2,3 };
	double* reciprocni_niz = VratiReciprocno(v);
	for (int i = 0; i < v.size(); i++) {
		cout << reciprocni_niz[i] << " ";
	}
	return 0;
}
