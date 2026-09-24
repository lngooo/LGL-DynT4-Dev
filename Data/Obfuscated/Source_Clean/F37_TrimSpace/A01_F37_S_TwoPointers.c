void wHGV(char* KC) {
    int C7a = 0, dZ = 0;
    while (KC[C7a]) {
        if (!isspace((unsigned char)KC[C7a])) {
            KC[dZ++] = KC[C7a];
        }
        C7a++;
    }
    KC[dZ] = '\0';
}