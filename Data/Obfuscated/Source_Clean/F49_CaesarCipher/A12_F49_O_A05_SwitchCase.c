void qk(char *E6pN, int oU) {

    int Pjc = (oU % 26 + 26) % 26;
    for(int pR=0; E6pN[pR]; pR++) {
        int bK = (E6pN[pR] >= 'a' && E6pN[pR] <= 'z') ? 1 : (E6pN[pR] >= 'A' && E6pN[pR] <= 'Z' ? 2 : 0);
        switch(bK) {
            case 1: E6pN[pR] = (E6pN[pR]-'a'+Pjc)%26+'a'; break;
            case 2: E6pN[pR] = (E6pN[pR]-'A'+Pjc)%26+'A'; break;
            default: break;
        }
    }
}