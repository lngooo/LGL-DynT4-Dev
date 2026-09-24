int Q3(int HHS) {
    int B = 0;
    while (HHS >= 4) { HHS >>= 2; B += 2; }
    while (HHS >= 2) { HHS >>= 1; B += 1; }
    return B;
}