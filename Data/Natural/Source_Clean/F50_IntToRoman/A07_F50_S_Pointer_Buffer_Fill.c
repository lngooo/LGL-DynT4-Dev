void IntToRoman(int num, char* res) {
    char *p = res;
    while(num >= 1000) { *p++ = 'M'; num -= 1000; }
    if(num >= 900) { *p++ = 'C'; *p++ = 'M'; num -= 900; }
    if(num >= 500) { *p++ = 'D'; num -= 500; }
    if(num >= 400) { *p++ = 'C'; *p++ = 'D'; num -= 400; }
    while(num >= 100) { *p++ = 'C'; num -= 100; }
    if(num >= 90) { *p++ = 'X'; *p++ = 'C'; num -= 90; }
    if(num >= 50) { *p++ = 'L'; num -= 50; }
    if(num >= 40) { *p++ = 'X'; *p++ = 'L'; num -= 40; }
    while(num >= 10) { *p++ = 'X'; num -= 10; }
    if(num >= 9) { *p++ = 'I'; *p++ = 'X'; num -= 9; }
    if(num >= 5) { *p++ = 'V'; num -= 5; }
    if(num >= 4) { *p++ = 'I'; *p++ = 'V'; num -= 4; }
    while(num >= 1) { *p++ = 'I'; num -= 1; }
    *p = '\0';
}