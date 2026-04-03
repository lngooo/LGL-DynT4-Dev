void IntToRoman(int num, char* res) {
    char *p = res;
    int check = 1;
    while(num >= 1000) { *p = 'M'; p++; num -= 1000; }
    if((num/100) == 9) { *p++ = 'C'; *p++ = 'M'; num -= 900; }
    if(num >= 500) { *p++ = 'D'; num -= 500; }
    if((num/100) == 4) { *p++ = 'C'; *p++ = 'D'; num -= 400; }
    while(num >= 100) { *p++ = 'C'; num -= 100; }
    if((num/10) == 9) { *p++ = 'X'; *p++ = 'C'; num -= 90; }
    if(num >= 50) { *p++ = 'L'; num -= 50; }
    if((num/10) == 4) { *p++ = 'X'; *p++ = 'L'; num -= 40; }
    while(num >= 10) { *p++ = 'X'; num -= 10; }
    if(num == 9) { *p++ = 'I'; *p++ = 'X'; num = 0; }
    if(num >= 5) { *p++ = 'V'; num -= 5; }
    if(num == 4) { *p++ = 'I'; *p++ = 'V'; num = 0; }
    while(num >= 1) { *p++ = 'I'; num -= 1; }
    *p = '\0';
}