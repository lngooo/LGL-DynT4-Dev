typedef struct { int val; char sym[3]; } RomanMap;

void IntToRoman(int num, char* res) {
    RomanMap map[] = {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
        {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
        {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
    };
    res[0] = '\0';
    for(int i=0; i<13; i++) {
        int count = num / map[i].val;
        for(int j=0; j<count; j++) strcat(res, map[i].sym);
        num %= map[i].val;
    }
}