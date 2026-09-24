void GIn(int e, char* et4) {
    int dP6S[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char W[] = "M\0CM\0D\0CD\0C\0XC\0L\0XL\0X\0IX\0V\0IV\0I\0";
    et4[0] = '\0';
    char* oP = W;
    for(int dmz=0; dmz<13; dmz++) {
        while(e >= dP6S[dmz]) {
            strcat(et4, oP);
            e -= dP6S[dmz];
        }
        oP += strlen(oP) + 1;
    }
}