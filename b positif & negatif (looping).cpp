#include <iostream>

using namespace std;

int main()
{
    int bilangan;
    int counter = 0;
    char ulangi = 'y';


    cout << "Menentukan Bilangan Positif atau Bilangan Negatif" <<endl;
    cout << "-------------------------------------------------" <<endl;
do {
    cout << "Masukkan bilangan: ";
    cin >> bilangan;

    if (bilangan>0)
    {
        cout << bilangan << " adalah bilangan positif" <<endl;
    }
    else
    {
        cout << bilangan << "  adalah bilangan negatif" <<endl;
    }cout << "------------------------------------------------" <<endl;

    cout << "Apakah kamu ingin mengulanginya ?" <<endl;
    cout << "Jawab y/t : ";
    cin >> ulangi;
    cout <<endl;
    cout << "-------------------------------------------------" <<endl;

    // increment counter
    counter++;

}
while (ulangi == 'y');
    cout <<endl;
    cout << "Kamu mengulangi sebanyak " <<counter<< " kali " <<endl;
    cout << "-------------------------------------------------" <<endl;

    return 0;
}
