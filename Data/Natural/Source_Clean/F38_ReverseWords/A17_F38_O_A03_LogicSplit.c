void ReverseWords(char *s) {
    char base[256]; strcpy(base, s);
    char *arr[100]; int n = 0;
    char *p = strtok(base, " ");
    do {
        if(p) arr[n++] = p;
    } while((p = strtok(NULL, " ")));
    s[0] = 0;
    while(n > 0) {
        strcat(s, arr[--n]);
        if(n > 0) strcat(s, " ");
    }
}