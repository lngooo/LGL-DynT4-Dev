void b(char *S) {
    int DByh = strlen(S);
    char *Tyha = (char*)malloc(DByh + 1);
    int xy = 0;
    for(int U = DByh-1; U >= 0; U--) {
        if(S[U] == ' ') {
            for(int Js=U+1; S[Js]!=' ' && S[Js]!='\0'; Js++) Tyha[xy++] = S[Js];
            Tyha[xy++] = ' ';
        }
    }
    for(int Js=0; S[Js]!=' ' && S[Js]!='\0'; Js++) Tyha[xy++] = S[Js];
    Tyha[xy] = '\0';
    strcpy(S, Tyha); free(Tyha);
}