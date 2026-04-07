// 12S25001 - Gracia Anggreini Fitaloka Hutagaol

#include <stdio.h>

struct Menu {
    int level;
    char kategori[20];
    char kesimpulan[50];
};

int main() {
    struct Menu menu;
    scanf("%d", &menu.level);

    switch(menu.level) {
        case 1:
            printf("staple food\n");
            printf("you need side dishes\n");
            break;
        case 2:
            printf("side dishes\n");
            printf("staple food\n");
            printf("you need vegetables\n");
            break;
        case 3:
            printf("vegetables\n");
            printf("side dishes\n");
            printf("staple food\n");
            printf("good\n");
            break;
        case 4:
            printf("fruits\n");
            printf("vegetables\n");
            printf("side dishes\n");
            printf("staple food\n");
            printf("very good\n");
            break;
        case 5:
            printf("milk\n");
            printf("fruits\n");
            printf("vegetables\n");
            printf("side dishes\n");
            printf("staple food\n");
            printf("perfect\n");
            break;
        default:
            printf("invalid input\n");
    }
    return 0;
}
