#include <stdio.h>

int main() {

int r, lingkaran;
float pi, luas, keliling;

printf("Pilih (1:Menghitung Luas Lingkaran 2:Menghitung Keliling Lingkaran)");
	scanf("%d", &lingkaran);

	switch (lingkaran)
	{
	    case 1:
		printf("Masukkan jari-jari:");
		scanf("%d", &r);
		pi = 3.14;
		luas = pi * (r * r);
		printf("Luas lingkaran:%f \n", luas);
		break;

        case 2:
		printf("Masukkan jari-jari:");
		scanf("%d", &r);
		pi = 3.14;
		keliling = 2 * pi * r;
		printf("Keliling Lingkaran:%f \n", keliling);
		break;}

	printf("Program Selesai");
	return 0;
}
