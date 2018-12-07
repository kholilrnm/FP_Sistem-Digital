#include <stdio.h>

int main()
{
    int pilihan; long long hasil;
    //int tambah, kurang, kali, bagi;//
    long long b_1, b_2;
    int nilai[11];

	printf("Kholilul Rachman Nur Manab (17081010055), Dandy Noor Imansyah (17081010056)\n\t");
	printf("   FINAL PROJECT SISTEM DIGITAL <SISTEM DIGITAL LOGIKA> \n\t");
	printf("      Pembimbing:Pak Faisal Muttaqin, S.Kom,M.T. \n\n\n");
    printf("\nPilihlah Operasi yang di inginkan ?"); 
    printf("\n\t1. PENJUMLAHAN(+)\n\t2. PENGURANGAN(-)\n\t3. PERKALIAN(*)\n\t4. PEMBAGIAN(/)"); 
    printf("\nTentukan Pilihan 1,2,3 atau 4: ");
    scanf("%i", &pilihan);
    
    printf("Masukkan Bilangan Pertama : ");
    scanf("%lli", &b_1);
    printf("Masukkan Bilangan Kedua   : ");
    scanf("%lli", &b_2);
    
    if(pilihan == 1) 
        hasil = b_1 + b_2;
    else if(pilihan == 2)
        hasil = b_1 - b_2;
    else if (pilihan == 3)
        hasil = b_1 * b_2;
    else if (pilihan == 4)
    	hasil = b_1 / b_2;
    
    printf("Hasilnya adalah: %lli\n", hasil);
