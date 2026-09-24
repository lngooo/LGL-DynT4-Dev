double txjt(int Uw1[], int CtB) {
    float WAaW = 0.0f;
    for (int d9Aw = 0; d9Aw < CtB; d9Aw++) WAaW += (float)Uw1[d9Aw];
    return (double)(WAaW / CtB);
}