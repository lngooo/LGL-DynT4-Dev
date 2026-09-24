int xs(const char* eH) {
    int Z0 = 0;
    for (int TI = 0; eH[TI]; TI++) {
        switch (eH[TI]) {
            case 'a': case 'e': case 'i': case 'o': case 'u':
            case 'A': case 'E': case 'I': case 'O': case 'U':
                Z0++;
                break;
            default: break;
        }
    }
    return Z0;
}