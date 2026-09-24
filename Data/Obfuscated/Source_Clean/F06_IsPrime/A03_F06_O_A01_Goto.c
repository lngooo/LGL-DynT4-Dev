int f5GC(int D) {
    int GA = 2;

    if (D < 2) goto KdJD;

Ubz:
    if (GA > D / GA) goto aVn;
    if (D % GA == 0) goto KdJD;
    GA++;
    goto Ubz;

aVn:
    return 1;

KdJD:
    return 0;
}