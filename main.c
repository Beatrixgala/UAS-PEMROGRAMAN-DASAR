#include <stdio.h>

int main() {
    char username[20], nama[20], jenis_kelamin[20];
    int password, umur, nohp, tanggal_lahir, data_diri, ulang, pilih, jenis_tiket, lanjut, harga, jenis_pembayaran, atm, norek, pin, norektujuan, finish, atmsatu0;

    printf("\t\t|--------------------------------------------------------------------------------------------|\n");
    printf("\t\t|                       HALLO SELAMAT DATANG PELANGGAN YANG TERHORMAT !!!                    |\n");
    printf("\t\t|                    SELAMAT DATANG DI PEMESANAN TIKET KONSER COLDPLAY                       |\n");
    printf("\t\t|--------------------------------------------------------------------------------------------|\n");

    //Login

    printf("\t\t~                 DI BAWAH INI ADALAH LANGKAH-LANGKAH PEMESANAN TIKET KONSER                 ~\n");
    printf("\t\t|--------------------------------------------------------------------------------------------|\n");
    printf("\t\t|                           1.SILAHKAN LOGIN KE AKUN YANG ANDA MILIKI                        |\n");
    printf("\t\t-MASUKKAN USERNAME ANDA\t:");
    scanf("%s", username);
    printf("\t\t-MASUKAN PASSWORD ANDA\t:");
    scanf("%d", &password);
    printf("\t\t|--------------------------------------------------------------------------------------------|\n");

data_diri:
    printf("\t\t                           2. MASUKAN DATA DIRI ANDA                                     \n");
    printf("\t\t-NAMA\t\t:");
    scanf("%s", nama);
    printf("\t\t-JENIS KELAMIN\t:");
    scanf("%s", jenis_kelamin);
    printf("\t\t-UMUR\t\t:");
    scanf("%d", &umur);
    printf("\t\t-TANGGAL LAHIR\t:");
    scanf("%d", &tanggal_lahir);
    printf("\t\t-NO THELEPHONE\t:");
    scanf("%d", &nohp);
    printf("\t\tAPAKAH DATA DIRI YANG ANDA MASUKAN SUDAH VALID?\n");
    printf("\t\t1. IYA:");
    scanf("%d", &ulang);
    if (ulang >= 2)
        goto data_diri;
    else
        printf("\t\t|--------------------------------------------------------------------------------------------|\n");

        //Perulangan
    do {
    jenis_tiket:
    printf("\t\t                          3. PILIH HARGA TIKET DI BAWAH INI                     \n");
    printf("\t\t|============================================================================================|\n");
    printf("\t\t|                           DAFTAR HARGA TIKET COLDPLAY                                      |\n");
    printf("\t\t|  1.Rp 10.000.000,00                                                                        |\n");
    printf("\t\t|  2.Rp 8.000.000,00                                                                         |\n");
    printf("\t\t|  3.Rp 5.000.000,00                                                                         |\n");
    printf("\t\t|  4.Rp 3.000.000,00                                                                         |\n");
    printf("\t\t|============================================================================================|\n");
    printf("\t\tLAKUKAN PEMILIHAN HARGA SESUAI YANG ANDA INGINKAN :");
    scanf("%d", &harga);
     switch (harga) {
     {
    case (1):
            printf("\t\t\tANDA MEMILIH TIKET DENGAN JENIS VVIP\n");
            printf("\t\t1.IYA\n");
            printf("\t\t2.TIDAK\n");
            printf("\t\tAPAKAH ANDA YAKIN ?: ");
            scanf("%d",&ulang);
            if (ulang ==2)
             goto jenis_tiket;
            else
             goto jenis_pembayaran;
     case (2):
            printf("\t\t\tANDA MEMILIH TIKET DENGAN JENIS VIP\n");
            printf("\t\t1.IYA\n");
            printf("\t\t2.TIDAK\n");
            printf("\t\tAPAKAH ANDA YAKIN ?: ");
            scanf("%d",&ulang);
            if (ulang ==2)
             goto jenis_tiket;
            else
             goto jenis_pembayaran;
     case (3):
            printf("\t\t\tANDA MEMILIH TIKET DENGAN JENIS  CAT 3\n");
            printf("\t\t1. IYA\n");
            printf("\t\t2. TIDAK\n");
            printf("\t\tAPAKAH ANDA YAKIN ?: ");
            scanf("%d",&ulang);
            if (ulang ==2)
             goto jenis_tiket;
            else
             goto jenis_pembayaran;
     case (4):
            printf("\t\t\tANDA MEMILIH TIKET DENGAN JENIS  CAT 4\n");
            printf("\t\t1. IYA\n");
            printf("\t\t2. TIDAK\n");
            printf("\t\tAPAKAH ANDA YAKIN ?: ");
            scanf("%d",&ulang);
            if (ulang ==2)
             goto jenis_tiket;
            else
             goto jenis_pembayaran;
    default :
            printf("\t\t\tANGKA TIDAK VALID\n");
            goto jenis_tiket;
}
    }
        printf("\t\tAPAKAH ANDA YAKIN ?\n ");
        printf("\t\t1. IYA/");
        printf("2. TIDAK :");
        scanf("%d", &ulang);
 }
    while (ulang>=2);

jenis_pembayaran:
    printf("\t\t|--------------------------------------------------------------------------------------------|\n");
    printf("\t\t                          4. PILIH JENIS PEMBAYARAN YANG ANDA INGINKAN                      \n");
    printf("\t\t1.DEBIT\n");
    printf("\t\t2.KREDIT\n");
    printf("\t\tPILIH :");
    scanf("%d", &pilih);

    // Array

      long long int atmsatu[3];
    atmsatu[0] = 46458988999LL;
    atmsatu[1] = 46458988999LL;
    atmsatu[2] = 46458988999LL;


    switch (pilih) {
    case 1:
        printf("\t\t\t\t\t-ANDA MEMILIH METODE PEMBAYARAN DEBIT-\n");
        printf("\t\tPILIH SALAH SATU JENIS BANK YANG SESUAI DENGAN BANK YANG DIGUNAKAN UNTUK MELAKUKAN PEMBAYARAN :\n");
        printf("\t\t1.BNI : %lld \n", atmsatu[0]); // Menggunakan %lld untuk long long int
        printf("\t\t2.BNI : %lld \n", atmsatu[1]);
        printf("\t\t3.BCA : %lld \n", atmsatu[2]);
        printf("\t\tPILIH :");
        scanf("%d", &atm);

            printf("\t\tMASUKAN NO. REKENING ANDA\t:");
            scanf("%d", &norek);
            printf("\t\tMASUKAN PIN ANDA\t\t:");
            scanf("%d", &pin);
            printf("\t\tSILAHKAN MASUKAN NO REKENING TUJUAN\t:");
            scanf("%d", &norektujuan);
            goto finish;
            break;

    case 2:
        printf("\t\t\t\t-ANDA MEMILIH METODE PEMBAYARAN KREDIT-\n");
        printf("\t\tPILIH SALAH SATU JENIS BANK YANG SESUAI DENGAN BANK YANG DIGUNAKAN UNTUK MELAKUKAN PEMBAYARAN :\n");
        printf("\t\t1.BNI : %lld \n", atmsatu[0]); // Menggunakan %lld untuk long long int
        printf("\t\t2.BNI : %lld \n", atmsatu[1]);
        printf("\t\t3.BCA : %lld \n", atmsatu[2]);
        printf("\t\tPILIH :");
        scanf("%d", &atm);

            printf("\t\tMASUKAN NO. REKENING ANDA\t:");
            scanf("%d", &norek);
            printf("\t\tMASUKAN PIN ANDA\t\t:");
            scanf("%d", &pin);
            printf("\t\tSILAHKAN MASUKAN NO REKENING TUJUAN\t:");
            scanf("%d", &norektujuan);
            goto finish;
            break;
        default : printf ("\t\tPILIHAN TIDAK VALID\n");
        goto jenis_pembayaran;

    }

finish:
    printf("\t\t|--------------------------------------------------------------------------------------------|\n");
    printf("\t\t|                        PEMBAYARAN ANDA TELAH BERHASIL!!!                                   |\n");
    printf("\t\t|                 TERIMAKASIH TELAH MELAKUKAN PEMBELIAN TIKET!!!                             |\n");
    printf("\t\t|--------------------------------------------------------------------------------------------|\n");

    return 0;
}
