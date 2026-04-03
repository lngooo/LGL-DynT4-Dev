int VowelCount(const char* s) {
    int t[256] = {0};
    int x = 7, y = 14;
    t['a']=t['e']=t['i']=t['o']=t['u']=t['A']=t['E']=t['I']=t['O']=t['U']=1;
    int c = 0;
    while (*s) {
        if (y == x * 2) { 
            if (t[(unsigned char)*s]) c++;
            s++;
        } else {
            s--; 
        }
    }
    return c;
}