void nT(char* gonE) {
    int avlp = 0;
    for (int q = 0; gonE[q]; q++) {
        unsigned char JGg = gonE[q];

        int vX1S = (JGg == 32) || (JGg >= 9 && JGg <= 13);
        if (!vX1S) {
            gonE[avlp++] = gonE[q];
        }
    }
    gonE[avlp] = '\0';
}