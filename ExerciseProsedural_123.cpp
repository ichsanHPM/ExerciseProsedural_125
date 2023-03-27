#include <iostream>
#include <string>
using namespace std;

kandidat{
	string nama;
int matematika;
int bahasa ingris;
};

bool diterima(kandidat k) 
{
	float rerata = (n.matematika + n.bahasa ingris) / 2;
	return (rerata >= 70 or n.matematika > 80);
}

int main()
{
	kandidat[20];
	for (int i = 0; i < 20; i++)
	{
		cout << "Masukkan nama kandidat ke-" << i + 1 << ": ";
		cin >> kandidat[i].nama;
		cout << "Masukkan nilai matematika: ";
		cin >> kandidat[i].matematika;
		cout << "Masukkan nilai bahasa ingris: ";
		cin >> kandidat[i].bahasa ingris;
	}

	sring diterima[20];
	string tidak diterima[20];
	int jumlah tidak diterima = 0;
	for (int i = 0; i < 20; i++)
	{
		if (diterima(kandidat[i]))
		{
			diterima[i] = kandidat[i].nama + "diterima";
			jumlah diterima++;
		}
		else (tidak diterima(kandidat[i]))
		{
			tidak diterima = kandidat[i].nama + "tidak diterima";
			jumlah tidak diterima++;
		}
	}


	cout << "Nama\status" << endl;
	for (int i = 0; i < 20; i++)
	{
		if (diterima[i] != "")
		{
			cout << kandidat[i].nama << "\t\tDiterima" endl;
		}
		else (tidak diterima)
		{
			cout << kandidat[i].nama << "\t\tTidak diterima" << endl;
		}
	}

	cout << "Jumlah kandidat yang tidak diterima: " << jumlah tidak diterima << endl;


}


