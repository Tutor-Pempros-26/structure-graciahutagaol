// 12S25001 - Gracia Anggreini Fitaloka Hutagaol

#include <stdio.h>

struct Operasi {
    char operator;
    int count;
    int hasil;
};

int main() {
    struct Operasi op;
    int input;

    scanf(" %c", &op.operator);
    op.count = 0;

    if (op.operator == '+') op.hasil = 0;
    else if (op.operator == '-') op.hasil = 0;
    else if (op.operator == '*') op.hasil = 1;

    while (1) {
        scanf("%d", &input);
        if (input == -1 || op.count >= 5) {
            printf("%c\n%d\n", op.operator, op.hasil);
            break;
        }
        op.count++;

        if (op.operator == '+') op.hasil += input;
        else if (op.operator == '-') op.hasil -= input;
        else if (op.operator == '*') op.hasil *= input;

        printf("%c\n%d\n%d\n", op.operator, input, op.hasil);
    }

    return 0;
}
`1