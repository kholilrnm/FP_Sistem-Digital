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

    nilai[0] =   hasil / 10000000000;
    nilai[1] =  (hasil - nilai [0] * 10000000000) / 1000000000;
    nilai[2] =  (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000) / 100000000 ;
    nilai[3] =  (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000 - nilai [2] * 100000000 ) / 10000000;
    nilai[4] =  (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000 - nilai [2] * 100000000 - nilai [3] * 10000000) / 1000000;
    nilai[5] =  (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000 - nilai [2] * 100000000 - nilai [3] * 10000000 - nilai [4] * 1000000) / 100000;
    nilai[6] =  (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000 - nilai [2] * 100000000 - nilai [3] * 10000000 - nilai [4] * 1000000 - nilai [5] * 100000) / 10000;
	nilai[7] =  (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000 - nilai [2] * 100000000 - nilai [3] * 10000000 - nilai [4] * 1000000 - nilai [5] * 100000 - nilai [6] * 10000) / 1000;
    nilai[8] =  (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000 - nilai [2] * 100000000 - nilai [3] * 10000000 - nilai [4] * 1000000 - nilai [5] * 100000 - nilai [6] * 10000 - nilai [7] * 1000) / 100;
    nilai[9] =  (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000 - nilai [2] * 100000000 - nilai [3] * 10000000 - nilai [4] * 1000000 - nilai [5] * 100000 - nilai [6] * 10000 - nilai [7] * 1000 - nilai [8] * 100) / 10;              
	nilai[10] = (hasil - nilai [0] * 10000000000 - nilai [1] * 1000000000 - nilai [2] * 100000000 - nilai [3] * 10000000 - nilai [4] * 1000000 - nilai [5] * 100000 - nilai [6] * 10000 - nilai [7] * 1000 - nilai [8] * 100 - nilai[9] * 10) ;
 
	for(int c=0;c<11;c++)
	{
		if (c==0)
			printf("Nilai p_miliar  : %lli  ===> ",nilai[0]);
		else if (c==1)
			printf("Nilai miliar    : %lli  ===> ",nilai[1]);
		else if (c==2)
			printf("Nilai r_juta    : %lli  ===> ",nilai[2]);
		else if (c==3)
			printf("Nilai p_juta    : %lli  ===> ",nilai[3]);
		else if (c==4)
			printf("Nilai juta      : %lli  ===> ",nilai[4]);
		else if (c==5)
			printf("Nilai p_ribu    : %lli  ===> ",nilai[5]);
		else if (c==6)
			printf("Nilai r_ribuan  : %lli  ===> ",nilai[6]);
		else if (c==7)
			printf("Nilai p_ribu    : %lli  ===> ",nilai[7]);
		else if (c==8)
			printf("Nilai ratusan   : %lli  ===> ",nilai[8]);
		else if (c==9)
			printf("Nilai puluhan   : %lli  ===> ",nilai[9]);	
		else if (c==10)
			printf("Nilai satuan    : %lli  ===> ",nilai[10]);	
	
	
		if (nilai[c] == 0)
			printf("abcdef ");
	else if(nilai[c] == 1)
			printf("bc ");
	else if(nilai[c] == 2)
			printf("abged ");
	else if(nilai[c] == 3)
			printf("abcdg ");		
	else if(nilai[c] == 4)
			printf("fgbcd ");		
	else if(nilai[c] == 5)
			printf("afgcd ");
	else if(nilai[c] == 6)
			printf("afedcg ");
	else if(nilai[c] == 7)
			printf("abcd ");
	else if(nilai[c] == 8)
			printf("abcdefg ");
	else if(nilai[c] == 9)
			printf("abcdfg ");
	
	printf("\n");
	}
}
