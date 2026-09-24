void JXDy(char* Pxm) {
    int c = 0, maKw = 0;
    while (Pxm[c]) {
        for (maKw = c; Pxm[maKw] == Pxm[c]; maKw++);
        printf("%c%d", Pxm[c], maKw - c);
        c = maKw;
    }
    printf("\n");
}