#include <iostream>
using namespace std;

int main() {
	int i, jml;
	cout << "masukan jumlah indeks : ";
	cin >> jml;
	int nilai[jml];

	for (int i = 0; i < jml; i++) {
		cout << "masukan indeks ke-" << i << " : ";
		cin >> nilai[i];
	}
    
    cout<<"data yang ditampilkan :"<<endl;
	for (int i = 0; i < jml; i++) {
		cout << "index ke-" << i << " = " << nilai[i]<< endl;
	}
}
