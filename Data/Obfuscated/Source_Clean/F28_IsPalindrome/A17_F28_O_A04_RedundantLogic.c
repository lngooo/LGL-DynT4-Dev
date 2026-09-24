int vxZG(char *ATvi) {
    int UqJ = 0; while (ATvi[UqJ]) UqJ++;
    char Fs[100];
    int f6C = 0;
    while(f6C < UqJ) { Fs[f6C] = ATvi[f6C]; f6C++; }
    f6C--;
    for(int Z = 0; Z < UqJ; Z++) {
        if(Fs[f6C--] != ATvi[Z]) return 0;
    }
    return 1;
}