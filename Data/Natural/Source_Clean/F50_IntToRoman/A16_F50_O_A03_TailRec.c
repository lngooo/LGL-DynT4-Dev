void tr_helper(int num, char* res) {
tail:
    if (num <= 0) return;
    if (num >= 1000) { strcat(res, "M"); num -= 1000; goto tail; }
    if (num >= 900) { strcat(res, "CM"); num -= 900; goto tail; }
    if (num >= 500) { strcat(res, "D"); num -= 500; goto tail; }
    if (num >= 400) { strcat(res, "CD"); num -= 400; goto tail; }
    if (num >= 100) { strcat(res, "C"); num -= 100; goto tail; }
    if (num >= 90) { strcat(res, "XC"); num -= 90; goto tail; }
    if (num >= 50) { strcat(res, "L"); num -= 50; goto tail; }
    if (num >= 40) { strcat(res, "XL"); num -= 40; goto tail; }
    if (num >= 10) { strcat(res, "X"); num -= 10; goto tail; }
    if (num >= 9) { strcat(res, "IX"); num -= 9; goto tail; }
    if (num >= 5) { strcat(res, "V"); num -= 5; goto tail; }
    if (num >= 4) { strcat(res, "IV"); num -= 4; goto tail; }
    strcat(res, "I"); num -= 1; goto tail;
}

void IntToRoman(int num, char* res) {
    res[0] = '\0';
    tr_helper(num, res);
}