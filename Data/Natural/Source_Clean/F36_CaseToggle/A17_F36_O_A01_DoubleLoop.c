void CaseToggle(char* s) {
    for (int i = 0; s[i]; i++) {
        for (int k = 0; k < 1; k++) {
            char val = s[i];
            if (val >= 97 && val <= 122) s[i] = val - 32;
            else if (val >= 65 && val <= 90) s[i] = val + 32;
        }
    }
}