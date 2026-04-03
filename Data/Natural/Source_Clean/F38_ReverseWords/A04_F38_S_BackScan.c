void ReverseWords(char *s) {
    int n = strlen(s); char res[256] = "";
    int end = n;
    for(int i=n-1; i>=-1; i--) {
        if(i == -1 || s[i] == ' ') {
            strncat(res, s + i + 1, end - i - 1);
            if(i != -1) strcat(res, " ");
            end = i;
        }
    }
    strcpy(s, res);
}