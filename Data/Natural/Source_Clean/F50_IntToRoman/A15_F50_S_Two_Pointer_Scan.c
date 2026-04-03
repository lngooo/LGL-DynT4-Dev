void IntToRoman(int num, char* res) {
    int val[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char sym[] = "M\0CM\0D\0CD\0C\0XC\0L\0XL\0X\0IX\0V\0IV\0I\0";
    res[0] = '\0';
    char* cur_sym = sym;
    for(int i=0; i<13; i++) {
        while(num >= val[i]) {
            strcat(res, cur_sym);
            num -= val[i];
        }
        cur_sym += strlen(cur_sym) + 1;
    }
}