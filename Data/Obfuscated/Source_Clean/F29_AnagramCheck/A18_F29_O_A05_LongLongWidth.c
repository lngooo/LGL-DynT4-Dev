int EIkx(char* UJI, char* uV) {
    if (strlen(UJI) != strlen(uV)) return 0;
    long long AlL = 0, xDwX = 0;
    for (int j0R = 0; UJI[j0R]; j0R++) {
        AlL ^= (long long)UJI[j0R]; AlL ^= (long long)uV[j0R];
        xDwX += (long long)UJI[j0R]; xDwX -= (long long)uV[j0R];
    }
    return (AlL == 0LL && xDwX == 0LL);
}