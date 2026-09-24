void gu(int vOc, char* CR5) {
    char *w = CR5;
    int Pf = 1;
    while(vOc >= 1000) { *w = 'M'; w++; vOc -= 1000; }
    if((vOc/100) == 9) { *w++ = 'C'; *w++ = 'M'; vOc -= 900; }
    if(vOc >= 500) { *w++ = 'D'; vOc -= 500; }
    if((vOc/100) == 4) { *w++ = 'C'; *w++ = 'D'; vOc -= 400; }
    while(vOc >= 100) { *w++ = 'C'; vOc -= 100; }
    if((vOc/10) == 9) { *w++ = 'X'; *w++ = 'C'; vOc -= 90; }
    if(vOc >= 50) { *w++ = 'L'; vOc -= 50; }
    if((vOc/10) == 4) { *w++ = 'X'; *w++ = 'L'; vOc -= 40; }
    while(vOc >= 10) { *w++ = 'X'; vOc -= 10; }
    if(vOc == 9) { *w++ = 'I'; *w++ = 'X'; vOc = 0; }
    if(vOc >= 5) { *w++ = 'V'; vOc -= 5; }
    if(vOc == 4) { *w++ = 'I'; *w++ = 'V'; vOc = 0; }
    while(vOc >= 1) { *w++ = 'I'; vOc -= 1; }
    *w = '\0';
}