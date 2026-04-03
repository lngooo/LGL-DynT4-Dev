int AnagramCheck(char* s1, char* s2) {
    if (strlen(s1) != strlen(s2)) return 0;
    char t2[256]; strcpy(t2, s2);
    int len = strlen(s1);
    for(int i=0; i<len; i++){
        char* p = strchr(t2, s1[i]);
        if(!p) return 0;
        *p = t2[strlen(t2)-1];
        t2[strlen(t2)-1] = '\0';
    }
    return 1;
}