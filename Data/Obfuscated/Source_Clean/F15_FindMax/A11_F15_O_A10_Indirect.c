typedef int (*ml)(int, int);
int sJFc(int LtF, int obYa) { return LtF ^ ((LtF ^ obYa) & -(LtF < obYa)); }

int qt(int hPQ5[], int AlF) {
    ml bh = sJFc;
    int FeM = hPQ5[0];
    for(int LEK=1; LEK<AlF; LEK++) FeM = bh(FeM, hPQ5[LEK]);
    return FeM;
}