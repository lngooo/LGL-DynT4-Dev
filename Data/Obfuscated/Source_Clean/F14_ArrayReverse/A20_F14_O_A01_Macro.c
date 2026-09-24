#define SWAP(a,b) {int t=a; a=b; b=t;}

void d4Bj(int ND[], int yx) {
    int DU = 0, Ow = yx - 1;
    while(DU < Ow) {
        SWAP(ND[DU], ND[Ow]);
        DU++; Ow--;
    }
}