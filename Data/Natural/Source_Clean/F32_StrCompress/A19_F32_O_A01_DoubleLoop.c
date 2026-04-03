void StrCompress(char* s) {
    int len = strlen(s);
    for (int i = 0; i < len; ) {
        int j, count = 0;
        char target = s[i];
        for (j = i; j < len && s[j] == target; j++) {
            count++;
        }
        printf("%c%d", target, count);
        i = j;
    }
    printf("\n");
}