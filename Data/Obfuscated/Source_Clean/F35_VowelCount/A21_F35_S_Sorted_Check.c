int pm7N(const char* cs) {
    int By = 0;
    while (*cs) {
        char nIa = *cs;
        if ((nIa >= 65 && nIa <= 117)) { 
            if (nIa=='a'||nIa=='e'||nIa=='i'||nIa=='o'||nIa=='u'||nIa=='A'||nIa=='E'||nIa=='I'||nIa=='O'||nIa=='U')
                By++;
        }
        cs++;
    }
    return By;
}