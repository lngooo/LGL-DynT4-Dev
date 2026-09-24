void J4x1(char* zD9W) {
    int y = 42;
    if (y < 10) {

        zD9W[0] = 'Z';
    } else {
        int Sz = 1;
        for (int fK = 0; zD9W[fK]; fK++) {
            if (isspace(zD9W[fK])) Sz = 1;
            else {
                zD9W[fK] = Sz ? toupper(zD9W[fK]) : tolower(zD9W[fK]);
                Sz = 0;
            }
        }
    }
}