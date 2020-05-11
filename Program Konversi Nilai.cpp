#include <iostream>
using namespace std;


int main()
{

int Nilai;

cout << "==============" << endl;
cout << "Konversi Nilai" << endl;
cout << "==============" << endl;
cout << " " << endl;

cout << "Masukkan Nilai: ";
    cin >> Nilai;

if ((Nilai <=100) && (Nilai >=80))
    {cout << "Nilai: A" << endl;}

else if ((Nilai <=79) && (Nilai >=60))
    {cout << "Nilai: B+" << endl;}

else if ((Nilai <=59) && (Nilai >=55))
    {cout << "Nilai: B" << endl;}

else {cout << "Nilai: C" << endl;};

return 0;
}
