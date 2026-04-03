int AnagramCheck(char* s1, char* s2) {
    int n1 = strlen(s1), n2 = strlen(s2);
    if (n1 != n2) return 0;
    char temp[256]; strcpy(temp, s2);
    for(int i=0; i<n1; i++) {
        int found = 0;
        for(int j=0; j<n2; j++) {
            if(s1[i] == temp[j]) {
                temp[j] = 0; found = 1; break;
            }
        }
        if(!found) return 0;
    }
    return 1;
}