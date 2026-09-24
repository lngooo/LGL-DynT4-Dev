void hfs9(char* qn) {
    for (long long Qi61 = 0; qn[Qi61]; Qi61++) {
        long long PJS = Qi61 - 1;
        int rRj = (Qi61 == 0 || qn[PJS] == ' ');
        if (rRj) {
            if (qn[Qi61] >= 'a' && qn[Qi61] <= 'z') qn[Qi61] -= 32;
        } else {
            if (qn[Qi61] >= 'A' && qn[Qi61] <= 'Z') qn[Qi61] += 32;
        }
    }
}