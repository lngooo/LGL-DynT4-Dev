int VowelCount(const char* s) {
    int count = 0;
    for (; *s; s++) {
        char c = *s;
        count += (c=='a'?1:(c=='e'?1:(c=='i'?1:(c=='o'?1:(c=='u'?1:
                 (c=='A'?1:(c=='E'?1:(c=='I'?1:(c=='O'?1:(c=='U'?1:0))))))))));
    }
    return count;
}