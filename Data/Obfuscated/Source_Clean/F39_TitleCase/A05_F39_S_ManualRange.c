void DD4(char* S) {
    for (int a6 = 0; S[a6]; a6++) {
        int hfZw = (a6 == 0 || S[a6-1] == ' ');
        if (hfZw) {
            if (S[a6] >= 'a' && S[a6] <= 'z') S[a6] = S[a6] - 'a' + 'A';
        } else {
            if (S[a6] >= 'A' && S[a6] <= 'Z') S[a6] = S[a6] - 'A' + 'a';
        }
    }
}