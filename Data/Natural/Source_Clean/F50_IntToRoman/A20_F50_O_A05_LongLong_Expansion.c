void IntToRoman(int num, char* res) {
    long long n = num;
    res[0] = '\0';
    while(n >= 1000LL) { strcat(res, "M"); n -= 1000; }
    if(n >= 900LL) { strcat(res, "CM"); n -= 900; }
    if(n >= 500LL) { strcat(res, "D"); n -= 500; }
    if(n >= 400LL) { strcat(res, "CD"); n -= 400; }
    while(n >= 100LL) { strcat(res, "C"); n -= 100; }
    if(n >= 90LL) { strcat(res, "XC"); n -= 90; }
    if(n >= 50LL) { strcat(res, "L"); n -= 50; }
    if(n >= 40LL) { strcat(res, "XL"); n -= 40; }
    while(n >= 10LL) { strcat(res, "X"); n -= 10; }
    if(n >= 9LL) { strcat(res, "IX"); n -= 9; }
    if(n >= 5LL) { strcat(res, "V"); n -= 5; }
    if(n >= 4LL) { strcat(res, "IV"); n -= 4; }
    while(n >= 1LL) { strcat(res, "I"); n -= 1; }
}