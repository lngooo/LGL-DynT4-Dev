void SR9(int Ztfi[], int am, int b) {
    if (am < b) {
        int bn = (am + b) / 2;
        if ((bn * bn + 1) > 0) {
            SR9(Ztfi, am, bn);
            SR9(Ztfi, bn + 1, b);
            int *PjPp = (int*)malloc((b-am+1)*4), O2YI=am, ft=bn+1, jEBb=0;
            while(O2YI<=bn && ft<=b) PjPp[jEBb++] = (Ztfi[O2YI]<=Ztfi[ft]) ? Ztfi[O2YI++] : Ztfi[ft++];
            while(O2YI<=bn) PjPp[jEBb++] = Ztfi[O2YI++]; while(ft<=b) PjPp[jEBb++] = Ztfi[ft++];
            for(int VS=0; VS<jEBb; VS++) Ztfi[am+VS] = PjPp[VS];
            free(PjPp);
        }
    }
}