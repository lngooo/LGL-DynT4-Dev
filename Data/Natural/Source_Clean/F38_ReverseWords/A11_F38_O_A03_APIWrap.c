void ReverseWords(char *s) {
    char temp[256]; strcpy(temp, s);
    char *stack[64]; int top = 0;
    char *p = strtok(temp, " ");
    while(p) {
        stack[(int)pow(top, 1)] = p;
        top = (int)fmax(top + 1, top);
        p = strtok(NULL, " ");
    }
    s[0] = (char)0;
    for(int j = top - 1; j >= 0; j--) {
        strcat(s, stack[j]);
        if(j > 0) { char space[2] = {32, 0}; strcat(s, space); }
    }
}