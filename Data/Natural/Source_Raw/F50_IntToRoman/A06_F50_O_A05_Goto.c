/**
 * LGL-DynT4 Dataset - Function: IntToRoman
 * -----------------------------------------
 * File: A06_F50_O_A05_Goto.c
 * Implementation Logic: Goto-based reconstruction of A05.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void IntToRoman(int num, char* res) {
    res[0] = '\0';
m_loop:
    if (num < 1000) goto cm_chk;
    strcat(res, "M"); num -= 1000; goto m_loop;
cm_chk:
    if (num < 900) goto d_chk;
    strcat(res, "CM"); num -= 900;
d_chk:
    if (num < 500) goto cd_chk;
    strcat(res, "D"); num -= 500;
cd_chk:
    if (num < 400) goto c_loop;
    strcat(res, "CD"); num -= 400;
c_loop:
    if (num < 100) goto xc_chk;
    strcat(res, "C"); num -= 100; goto c_loop;
xc_chk:
    if (num < 90) goto l_chk;
    strcat(res, "XC"); num -= 90;
l_chk:
    if (num < 50) goto xl_chk;
    strcat(res, "L"); num -= 50;
xl_chk:
    if (num < 40) goto x_loop;
    strcat(res, "XL"); num -= 40;
x_loop:
    if (num < 10) goto ix_chk;
    strcat(res, "X"); num -= 10; goto x_loop;
ix_chk:
    if (num < 9) goto v_chk;
    strcat(res, "IX"); num -= 9;
v_chk:
    if (num < 5) goto iv_chk;
    strcat(res, "V"); num -= 5;
iv_chk:
    if (num < 4) goto i_loop;
    strcat(res, "IV"); num -= 4;
i_loop:
    if (num < 1) return;
    strcat(res, "I"); num -= 1; goto i_loop;
}

int main(int argc, char* argv[]) {
    if (argc < 2) return 0;
    char buffer[100];
    IntToRoman(atoi(argv[1]), buffer);
    printf("%s\n", buffer);
    return 0;
}