void k(int eG, char* z) {
    long long P = eG;
    z[0] = '\0';
    while(P >= 1000LL) { strcat(z, "M"); P -= 1000; }
    if(P >= 900LL) { strcat(z, "CM"); P -= 900; }
    if(P >= 500LL) { strcat(z, "D"); P -= 500; }
    if(P >= 400LL) { strcat(z, "CD"); P -= 400; }
    while(P >= 100LL) { strcat(z, "C"); P -= 100; }
    if(P >= 90LL) { strcat(z, "XC"); P -= 90; }
    if(P >= 50LL) { strcat(z, "L"); P -= 50; }
    if(P >= 40LL) { strcat(z, "XL"); P -= 40; }
    while(P >= 10LL) { strcat(z, "X"); P -= 10; }
    if(P >= 9LL) { strcat(z, "IX"); P -= 9; }
    if(P >= 5LL) { strcat(z, "V"); P -= 5; }
    if(P >= 4LL) { strcat(z, "IV"); P -= 4; }
    while(P >= 1LL) { strcat(z, "I"); P -= 1; }
}