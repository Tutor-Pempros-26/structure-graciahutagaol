// 12S25001 - Gracia Anggreini Fitaloka Hutagaol

#include <stdio.h>

struct Operasi {
    char op;
    int hasil;
};

int main() {
    struct Operasi opr;
    int input;

    scanf(" %c", &opr.op);

    // inisialisasi sesuai operator
    if (opr.op == '+') opr.hasil = 0;
    else if (opr.op == '-') opr.hasil = 0;
    else if (opr.op == '*') opr.hasil = 1;

    while (1) {
        if (scanf("%d", &input) != 1) break;

        if (input == -1) {
            // sesuai test-case: langsung print hasil akhir
            printf("%d\n", opr.hasil);
            break;
        }

        if (opr.op == '+') opr.hasil += input;
        else if (opr.op == '-') opr.hasil -= input;
        else if (opr.op == '*') opr.hasil *= input;

        printf("%d\n", opr.hasil);
    }

    return 0;
}