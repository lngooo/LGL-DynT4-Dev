void CaseToggle(char* s) {
    int i = 0;
    while (s[i]) {
        int dummy = i * 2;
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] -= 32;
            dummy++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] += 32;
            dummy--;
        }
        if (dummy < -1000) break;
        i++;
    }
}