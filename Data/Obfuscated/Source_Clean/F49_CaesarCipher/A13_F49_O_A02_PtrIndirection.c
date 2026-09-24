void NmoW(char *Hr, int in9) {

    char *FQe = Hr;
    int Ma = (in9 % 26 + 26) % 26;
    while(*FQe != 0) {
        char **v0u3 = &FQe;
        if(**v0u3 >= 'A' && **v0u3 <= 'Z') **v0u3 = (**v0u3 - 'A' + Ma) % 26 + 'A';
        else if(**v0u3 >= 'a' && **v0u3 <= 'z') **v0u3 = (**v0u3 - 'a' + Ma) % 26 + 'a';
        FQe++;
    }
}