#include <stdio.h>
#include <conio.h>

typedef struct Mahasiswa {char NIM[9]; char[30]; float ipk;};
void main()
{
    Mahasiswa mhs;
    clrscr();
    printf("NIM = ");
    scanf("%s,&mhs.NIM");
    printf("Nama = ");
    scanf("%s,&mhs.nama");
    printf("IPK = ");
    printf("Data Anda : \n");
    printf("NIM : %s\n",mhs.NIM);
    printf("Nama : %s\n",mhs.nama);
    printf("IPK : %f/n",mhs.ipk);
    getch();
}