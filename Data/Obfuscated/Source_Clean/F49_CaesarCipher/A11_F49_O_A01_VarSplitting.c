void BFp(char *m2, int ST) {

    int nYRi = ST % 26;
    int K3 = 52;
    int sqcl = (nYRi + K3) % 26;
    for(int up=0; m2[up]; up++) {
        if(m2[up] >= 97 && m2[up] <= 122) m2[up] = (m2[up]-97+sqcl)%26+97;
        else if(m2[up] >= 65 && m2[up] <= 90) m2[up] = (m2[up]-65+sqcl)%26+65;
    }
}