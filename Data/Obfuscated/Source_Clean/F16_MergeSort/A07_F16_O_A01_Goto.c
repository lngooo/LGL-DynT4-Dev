void Ycr3(int X[], int EVA7, int TB4) {
    if (EVA7 >= TB4) goto exit;
    int Gew = (EVA7 + TB4) / 2;
    Ycr3(X, EVA7, Gew);
    Ycr3(X, Gew + 1, TB4);
    {
        int MU0J = EVA7, DSb = Gew + 1, P = 0;
        int *OC = (int*)malloc((TB4-EVA7+1)*4);
    az:
        if (MU0J > Gew) goto Ot;
        if (DSb > TB4) goto Kfh;
        if (X[MU0J] <= X[DSb]) { OC[P++] = X[MU0J++]; goto az; }
        else { OC[P++] = X[DSb++]; goto az; }
    Kfh:
        if (MU0J > Gew) goto pH;
        OC[P++] = X[MU0J++]; goto Kfh;
    Ot:
        if (DSb > TB4) goto pH;
        OC[P++] = X[DSb++]; goto Ot;
    pH:
        for(int MR=0; MR<P; MR++) X[EVA7+MR] = OC[MR];
        free(OC);
    }
    exit:;
}