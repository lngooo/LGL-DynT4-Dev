void CaseToggle(char* s) {
    int i = 0, state = 0;
    while (state != -1) {
        switch (state) {
            case 0: state = (s[i] == 0) ? -1 : 1; break;
            case 1: 
                if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
                else if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
                state = 2; break;
            case 2: i++; state = 0; break;
        }
    }
}