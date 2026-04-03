void ReverseWords(char *s) {
    int state = 0, i, n = strlen(s), end; char res[256] = "";
    while(state != 99) {
        switch(state) {
            case 0: end = n; i = n - 1; state = 1; break;
            case 1: state = (i >= -1) ? 2 : 4; break;
            case 2: if(i == -1 || s[i] == ' ') {
                        strncat(res, s + i + 1, end - i - 1);
                        if(i != -1) strcat(res, " ");
                        end = i;
                    }
                    state = 3; break;
            case 3: i--; state = 1; break;
            case 4: strcpy(s, res); state = 99; break;
        }
    }
}