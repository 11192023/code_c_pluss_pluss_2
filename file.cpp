#include <iostream>
using namespace std;
/*
Bu?c 1: M? file ra
Bu?c 2: Ð?c ho?c ghi file
Bu?c 3: Ðóng file l?i
*/
// File van b?n
int main()
{
	// Bu?c 1: M? file ra
	char path[] = "E:\\CPP\\text.txt";
	FILE *fptr = fopen(path, "r"); // a - append, w - write
	// Bu?c 2: Ð?c ho?c ghi file
	int n;
	// fprintf(fptr, "Du lieu vua nhap la : %d\n", n); // Ghi file
	fscanf(fptr, "%d", &n);
	cout << "n = " << n;
	// Bu?c 3: Ðóng file l?i
	fclose(fptr);
	return 0;
	
#include <iostream>
using namespace std;
/*
Bu?c 1: M? file ra
Bu?c 2: Ð?c ho?c ghi file
Bu?c 3: Ðóng file l?i
*/
// File van b?n
/*
Nh?p ngày, tháng, nam sinh c?a các b?n
Luu tr? vào trong file dã du?c t?o trong du?ng d?n hi?n t?i
*/
int main()
{
	// Bu?c 1: M? file ra
	char path[] = "E:\\CPP\\binary.bin";
	FILE *fptr = fopen(path, "rb+"); // a - append, w - write
	// Bu?c 2: Ð?c ho?c ghi file
	int n;
	// fwrite(&n, sizeof(int), 1, fptr);
	fread(&n, sizeof(int), 1, fptr);
	cout << n;
	//  Bu?c 3: Ðóng file l?i
	fclose(fptr);
	return 0;
}	
	#include <iostream>
using namespace std;
/*
Bu?c 1: M? file ra
Bu?c 2: Ð?c ho?c ghi file
Bu?c 3: Ðóng file l?i
*/
// File van b?n
/*
Nh?p ngày, tháng, nam sinh c?a các b?n
Luu tr? vào trong file dã du?c t?o trong du?ng d?n hi?n t?i
*/
int main()
{
	// Bu?c 1: M? file ra
	char path[] = "E:\\CPP\\binary.bin";
	FILE *fptr = fopen(path, "rb+"); // a - append, w - write
	// Bu?c 2: Ð?c ho?c ghi file
	int n;
	// fwrite(&n, sizeof(int), 1, fptr);
	fread(&n, sizeof(int), 1, fptr);
	cout << n;
	//  Bu?c 3: Ðóng file l?i
	fclose(fptr);
	return 0;
}
	
	
	
	
