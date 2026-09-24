int JVlR(const char* s2H) {
    int yLNT[256] = {0};
    int jF92 = 7, BC = 14;
    yLNT['a']=yLNT['e']=yLNT['i']=yLNT['o']=yLNT['u']=yLNT['A']=yLNT['E']=yLNT['I']=yLNT['O']=yLNT['U']=1;
    int U8sP = 0;
    while (*s2H) {
        if (BC == jF92 * 2) { 
            if (yLNT[(unsigned char)*s2H]) U8sP++;
            s2H++;
        } else {
            s2H--; 
        }
    }
    return U8sP;
}