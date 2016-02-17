/*
    Nama File: 03_1.c
*/
#include <stdio.h>

int main() {
    char angka_1, angka_2;
    int angka1, angka2;
    printf(" Demo Struktur Kondisi\n");
    printf(" =====================\n");

    printf(" Masukkan bilangan asli 1: ");
    angka_1 = getchar();
    getchar();
    angka1 = (int)angka_1;
    if (angka1 >= 48 && angka1 <= 57)
        angka1-=48;
    else
    {
        printf("Angka1 yang diinput harus bertipe numerik !!!\n");
        return 0;
    }

    printf(" Masukkan bilangan asli 2: ");
    angka_2 = getchar();
    getchar();
    angka2 = (int)angka_2;
    if (angka2 >= 48 && angka2 <= 57)
        angka2-=48;
    else
    {
        printf("Angka2 yang diinput harus bertipe numerik !!!\n");
        return 0;
    }

    ulang :
    {
        char pilihan;
        printf("\n\n jenis Operator\n");
        printf(" --------------\n");
        printf(" 1. Contoh Operator Aritmatika\n");
        printf(" 2. Contoh Operator Relasional \n");
        printf(" 3. Contoh Operator Logical \n");
        printf(" Pilihan [1-3]: ");
        scanf("%c",&pilihan);
        getchar();
        if (pilihan == '1')
        {
            printf("\n Contoh Operator Aritmatika\n");
            printf(" Penjumlahan \t: %d + %d = %d \n",angka1, angka2, angka1 + angka2);
            printf(" Perkalian \t: %d x %d = %d \n",angka1, angka2, angka1 * angka2);
        }
        else if (pilihan == '2')
        {
            printf("\n Contoh Operator Relasional\n");
            printf(" Persamaan \t: %d == %d = ",angka1,angka2);
            if (angka1 == angka2)
                printf("TRUE");
            else
                printf("FALSE");

            printf("\n Pertidaksamaan\t: %d != %d = ",angka1,angka2);
            if (angka1 != angka2)
                printf("TRUE");
            else
                printf("FALSE");
        }
        else if (pilihan == '3')
        {
            printf("\n\n Contoh Operator Logical\n");
            printf(" Logika AND \t: %d && %d = %d\n", angka1,angka2,angka1 && angka2);
            printf(" Logika OR \t: %d || %d = %d\n",angka1,angka2,angka1 || angka2);
        }
        else
        {
            printf("\n Pilihan tidak valid, harap masukkan nilai 1, 2, atau 3 !! \n");
            tdkvalid:
            {
                printf(" Kembali ke menu pilihan? (y/n) : ");
                char k;
                //scanf("%*c",&k);
                k = getchar();
                getchar();

                if (k == 'y' || k == 'Y')
                    goto ulang;
                else if (k=='n' || k=='N')
                    return 0;
                else
                    goto tdkvalid;

            }
        }
    }

    getch();
    return 0;
}
