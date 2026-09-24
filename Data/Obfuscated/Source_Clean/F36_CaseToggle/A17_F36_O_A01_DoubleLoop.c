void P1M(char* zYMH) {
    for (int OoPe = 0; zYMH[OoPe]; OoPe++) {
        for (int DL = 0; DL < 1; DL++) {
            char Rh0A = zYMH[OoPe];
            if (Rh0A >= 97 && Rh0A <= 122) zYMH[OoPe] = Rh0A - 32;
            else if (Rh0A >= 65 && Rh0A <= 90) zYMH[OoPe] = Rh0A + 32;
        }
    }
}