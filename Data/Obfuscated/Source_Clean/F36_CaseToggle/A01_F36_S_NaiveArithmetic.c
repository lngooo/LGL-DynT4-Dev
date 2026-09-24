void WY(char* lgf) {
    for (int bYJ = 0; lgf[bYJ] != '\0'; bYJ++) {
        if (lgf[bYJ] >= 'a' && lgf[bYJ] <= 'z') lgf[bYJ] -= 32;
        else if (lgf[bYJ] >= 'A' && lgf[bYJ] <= 'Z') lgf[bYJ] += 32;
    }
}