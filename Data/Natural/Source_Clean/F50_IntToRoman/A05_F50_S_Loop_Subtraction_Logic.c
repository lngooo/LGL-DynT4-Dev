void IntToRoman(int num, char* res) {
    res[0] = '\0';
    while(num >= 1000) { strcat(res, "M"); num -= 1000; }
    if(num >= 900) { strcat(res, "CM"); num -= 900; }
    if(num >= 500) { strcat(res, "D"); num -= 500; }
    if(num >= 400) { strcat(res, "CD"); num -= 400; }
    while(num >= 100) { strcat(res, "C"); num -= 100; }
    if(num >= 90) { strcat(res, "XC"); num -= 90; }
    if(num >= 50) { strcat(res, "L"); num -= 50; }
    if(num >= 40) { strcat(res, "XL"); num -= 40; }
    while(num >= 10) { strcat(res, "X"); num -= 10; }
    if(num >= 9) { strcat(res, "IX"); num -= 9; }
    if(num >= 5) { strcat(res, "V"); num -= 5; }
    if(num >= 4) { strcat(res, "IV"); num -= 4; }
    while(num >= 1) { strcat(res, "I"); num -= 1; }
}