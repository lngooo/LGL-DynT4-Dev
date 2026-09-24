int go3(const char* J) {
    int xxb8 = 0;
    for (int Hq9y = 0; J[Hq9y] != '\0'; Hq9y++) {
        char bNu = J[Hq9y];
        if (bNu == 'a' || bNu == 'e' || bNu == 'i' || bNu == 'o' || bNu == 'u' ||
            bNu == 'A' || bNu == 'E' || bNu == 'I' || bNu == 'O' || bNu == 'U') {
            xxb8++;
        }
    }
    return xxb8;
}