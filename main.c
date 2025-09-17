// Solve The Problem for this code
#include <stdio.h>
#include <stdlib.h>
//include library yang diperlukan
float totalNilai;
int totalSKS;
int umur;
long long NRP;
//deklarasi variabel

const char* index_nilai(int nilai);
float kalkulasi_ip(float *matkul, int *sks, int n);
//prototype buat fungsi


const char* index_nilai(int nilai) 
{
    //tambahkan definisi tipe variabel yang akan digunakan (int)
    if (nilai >= 86) 
    {
        return "A";
    } 
    else if (nilai >= 76) 
    {
        return "AB";
    } 
    else if (nilai >= 66) 
    {
        return "B";
    } 
    else if (nilai >= 61) 
    {
        return "BC";
    } 
    else if (nilai >= 56) 
    {
        return "C";
    } 
    else if (nilai >= 41) 
    {
        return "D";
    } 
    else 
    {
        return "E";
    }
}


float kalkulasi_ip(float *matkul, int *sks, int n) 
{
    //lagi, definisikan variabel yang dibutuhkan (float untuk matkul)
    for (int i = 0; i < n; i++) 
    {
        totalNilai += matkul[i] * sks[i];  
        totalSKS += sks[i];
    }
    return (float) totalNilai / totalSKS; 
}



int main()
{
    char nama[30];
    //gedein biar nama gw muat (20 -> 30)

    printf("ingfo nama: ");
    fgets(nama, sizeof(nama), stdin);

    printf("P Umur: ");
    scanf("%d" , &umur);

    printf("NRP dong biar tau: ");
    scanf("%lld" , &NRP);
    //ganti ke long long, biar nrp kepala 5 gak overflow. bukan unsigned long karena 2^32 masih kepala 4. gpp ya 64 bit :).

    int n;
    printf("Jumlah matkul Semester ini berapa: ");
    scanf("%d", &n);

    float *matkul = malloc(n * sizeof(int)); 
    int *sks = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++)
    {
        printf("Masukkan nilai matkul %d tersebut \n" , i + 1);
        scanf("%f", &matkul[i]);
        printf("Masukkan SKS matkul %d tersebut \n" , i + 1);
        scanf("%d" , &sks[i]);
        if((matkul[i] < 0) || (sks[i] < 0))
        {
	    //ganti operator && menjadi ||, karena seharusnya tidak ada nilai negatif, bukan tidak boleh negatif dua2nya
            printf("Nilai matkul dan sks tidak boleh negatif. Menghentikan input.\n");
            free(matkul);
            free(sks);
            return 0;
        }
	else if(matkul[i] > 100)
	//added a lil touch
	{
	    printf("Nilai matkul tidak masuk akal.\n");
	    free(matkul);
            free(sks);
            return 0;
	}
    }


    printf("\nNama: %s", nama);
    printf("Umur: %d \n", umur);
    printf("NRP: %lld \n" , NRP);
    //long long strikes back

    for(int j = 0; j < n ; j++)
    {
        printf("Indeks nilai matkul %d: %s\n", j + 1, index_nilai(matkul[j]));
    }
    float ip = kalkulasi_ip(matkul, sks, n);
    printf("Indeks Prestasi (IP): %.2f (%s)\n", (ip / 25.00) , index_nilai(ip));


    free(matkul); 
    free(sks);
    return 0;
}
