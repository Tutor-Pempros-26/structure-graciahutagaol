// 12S25001 - Gracia Anggreini Fitaloka Hutagaol

#include <stdio.h>

struct Transaksi {
    int jumlah_buku;
    double harga_per_buku;
    double total;
    double potongan;
};

int main() {
    struct Transaksi trx;

    scanf("%d", &trx.jumlah_buku);
    scanf("%lf", &trx.harga_per_buku);

    trx.total = trx.jumlah_buku * trx.harga_per_buku;

    if (trx.total >= 500000) trx.potongan = trx.total * 0.15;
    else if (trx.total >= 100000) trx.potongan = trx.total * 0.10;
    else if (trx.total > 50000) trx.potongan = trx.total * 0.05;
    else trx.potongan = -1;

    if (trx.potongan == -1)
        printf("---\n%.2lf\n", trx.total);
    else
        printf("%.2lf\n%.2lf\n", trx.potongan, trx.total - trx.potongan);

    return 0;
}
