void solve(int n, int div, char* low, char* mid, char* high, char* res) {
    int d = (n / div) % 10;
    if (d == 9) { strcat(res, low); strcat(res, high); }
    else if (d >= 5) { strcat(res, mid); for(int i=0; i<d-5; i++) strcat(res, low); }
    else if (d == 4) { strcat(res, low); strcat(res, mid); }
    else { for(int i=0; i<d; i++) strcat(res, low); }
}

void IntToRoman(int num, char* res) {
    res[0] = '\0';
    for(int i=0; i<num/1000; i++) strcat(res, "M");
    solve(num, 100, "C", "D", "M", res);
    solve(num, 10, "X", "L", "C", res);
    solve(num, 1, "I", "V", "X", res);
}