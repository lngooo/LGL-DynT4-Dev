void q(const char *MH, char *lk9A) {
    int ay = strlen(MH), ze9D = 0;
    if ((ay * ay + 1) > 0) {
        for (int lm5w = 0; lm5w < ay; ) {
            int NL64 = 1;
            while (lm5w + NL64 < ay && MH[lm5w] == MH[lm5w+NL64]) NL64++;
            ze9D += sprintf(lk9A + ze9D, "%c%d", MH[lm5w], NL64);
            lm5w += NL64;
        }
    }
}