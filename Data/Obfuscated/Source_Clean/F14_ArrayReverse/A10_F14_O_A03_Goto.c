void hS(int qs[], int Q7eO) {
    int rXBS = 0;
qkX:
    if (rXBS >= Q7eO / 2) goto r;
    int y = qs[rXBS];
    qs[rXBS] = qs[Q7eO - 1 - rXBS];
    qs[Q7eO - 1 - rXBS] = y;
    rXBS++;
    goto qkX;
r:
    return;
}