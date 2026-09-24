long long Lu(int l) {
    if (l < 0) return 0;
    if (l == 0) return 1;
    long long diV = 1;
    void *HhVe[] = {&&CXxG, &&exit};
CXxG:
    if (l > 0) {
        diV *= l--;
        goto *HhVe[0];
    }
    goto *HhVe[1];
exit:
    return diV;
}