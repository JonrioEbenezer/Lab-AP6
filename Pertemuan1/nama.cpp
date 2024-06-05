#include <stdio.h>

int main()
{
    char nama[50];// Declare a character array of size 50
    int nim;
    char kom;
    float ip;

    printf("Masukkan Nama : ");
    // scanf("%s", &nama);
    gets(nama);

    printf("Masukkan NIM : ");
    scanf("%d", &nim);// Read the input integer


    printf("Masukkan KOM : ");
    scanf(" %c", &kom);// Read the input character

    printf("Masukkan IP : ");
    scanf("%f", &ip);// Read the input float

    printf("Nama    : %s\n", nama);// Print the name
    printf("NIM     : %d\n", nim);// Print the NIM
    printf("KOM     : %c\n", kom);// Print the KOM
    printf("IP      : %.2f", ip);?// ip dengan 2 desiman dibelakang koma
}

/*
    %s = string
    %c = char
    %d = decimal
    %lf = double
    %f = float
*/