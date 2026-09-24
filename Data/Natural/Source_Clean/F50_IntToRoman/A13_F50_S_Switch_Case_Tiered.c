void append(char* r, int n, const char* s) {
    for (int i = 0; i < n; i++) strcat(r, s);
}
void append_digit(char* r, int digit, const char* one, const char* five, const char* ten) {
    switch (digit) {
        case 0:
            break;
        case 1:
        case 2:
        case 3:
            append(r, digit, one);
            break;
        case 4:
            strcat(r, one);
            strcat(r, five);
            break;
        case 5:
            strcat(r, five);
            break;
        case 6:
        case 7:
        case 8:
            strcat(r, five);
            append(r, digit - 5, one);
            break;
        default:
            strcat(r, one);
            strcat(r, ten);
            break;
    }
}
void IntToRoman(int num, char* res) {
    res[0] = '\0';
    append(res, num / 1000, "M");
    num %= 1000;
    append_digit(res, num / 100, "C", "D", "M");
    num %= 100;
    append_digit(res, num / 10, "X", "L", "C");
    num %= 10;
    append_digit(res, num, "I", "V", "X");
}