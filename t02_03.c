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

    if (opr.op == '+') opr.hasil = 0;
    else if (opr.op == '-') opr.hasil = 0;
    else if (opr.op == '*') opr.hasil = 1;

    while (scanf("%d", &input) == 1) {
        if (input == -1) {
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
