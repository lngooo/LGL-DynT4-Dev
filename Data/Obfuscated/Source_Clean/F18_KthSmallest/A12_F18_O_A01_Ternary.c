int c60x(int S[], int qM, int Rjqp, int ah) {
    if (qM >= Rjqp) return (qM == Rjqp && ah == 1) ? S[qM] : S[qM];
    int P = S[Rjqp], zTL5 = qM;
    for (int H = qM; H < Rjqp; H++) (S[H] <= P) ? ({int Bk=S[zTL5]; S[zTL5]=S[H]; S[H]=Bk; zTL5++; 0;}) : 0;
    int Bk = S[zTL5]; S[zTL5] = S[Rjqp]; S[Rjqp] = Bk;
    return (zTL5 == ah-1) ? S[zTL5] : (zTL5 > ah-1 ? c60x(S, qM, zTL5-1, ah) : c60x(S, zTL5+1, Rjqp, ah));
}