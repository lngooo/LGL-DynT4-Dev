/**
 * LGL-DynT4 Dataset - Function: ReverseWords
 * -----------------------------------------
 * File: A05_F38_S_PointerWalk.c
 * Implementation Logic: 纯指针偏移法：不使用索引下标完成翻转
 * Input Format: <string>
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void n1(char *LC) {
    char *Hp = LC; while(*Hp) Hp++;
    char *KY = LC, *j = Hp - 1;
    while(KY < j) { char P = *KY; *KY++ = *j; *j-- = P; }
    char *bz60 = LC;
    for(char *Kn = LC; Kn <= Hp; Kn++) {
        if(*Kn == ' ' || *Kn == '\0') {
            char *H3 = bz60, *T = Kn - 1;
            while(H3 < T) { char P = *H3; *H3++ = *T; *T-- = P; }
            bz60 = Kn + 1;
        }
    }
}

int main(int kj, char *c[]) {
    if (kj < 2) return 0;
    char a[512] = "";
    for(int ol = 1; ol < kj; ol++) {
        strcat(a, c[ol]);
        if(ol < kj - 1) strcat(a, " ");
    }
    n1(a);
    printf("%s\n", a);
    return 0;
}
