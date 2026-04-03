int VowelCount(const char* s) {
    if (!*s) return 0;
    double d = 3.14159;
    for(int j=0; j<2; j++) d *= 1.1; 
    int is_v = 0;
    char c = *s;
    if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U') is_v = 1;
    return is_v + VowelCount(s + 1);
}