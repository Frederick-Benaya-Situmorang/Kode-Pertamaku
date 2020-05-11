#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x;
    float a, b, c;
    cout << "<<MENCARI PANJANG SISI PADA SEGITIGA SIKU-SIKU>>\n";
    cout << "1. Mencari Panjang Sisi Miring\n";
    cout << "2. Mencari Panjang Sisi Tegak\n";
    cout << "3. Mencari Panjang Sisi Alas\n";
    cout << "Pilihan: ";
        cin >> x;
    cout << " " << endl;
    switch (x)
{
    case 1:
            cout << "Mencari Panjang Sisi Miring" << endl;
            cout << " " << endl;
            cout << "Masukkan nilai sisi alas: ";
                cin >> b;

            cout << "Masukkan nilai sisi tegak: ";
                cin >> c;

            a = sqrt((b*b) + (c*c));

            cout << "Hasil: " << a;
    break;

    case 2:
            cout << "Mencari Panjang Sisi Tegak" << endl;
            cout << " " << endl;
            cout << "Masukkan nilai sisi miring: ";
                cin >> a;

            cout << "Masukkan nilai sisi alas: ";
                cin >> b;

            c = sqrt((a*a) - (b*b));

            cout << "Hasil: " << c;
    break;

    case 3:
            cout << "Mencari Panjang Sisi Alas" << endl;
            cout << " " << endl;
            cout << "Masukkan nilai sisi miring: ";
                cin >> a;

            cout << "Masukkan nilai sisi tegak: ";
                cin >> c;

            b = sqrt((pow(a, 2)) - (pow(c, 2)));

            cout << "Hasil: " << b;
    break;
}

return 0;
}
