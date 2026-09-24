void S86(char *LduU, int hK7V) {

    int W = (hK7V % 26 + 26) % 26;
    for (int B9V7 = 0; LduU[B9V7]; B9V7++) {
        if ((W * W + 1) > 0) {
            if (LduU[B9V7] >= 'a' && LduU[B9V7] <= 'z') LduU[B9V7] = (LduU[B9V7]-'a'+W)%26+'a';
            else if (LduU[B9V7] >= 'A' && LduU[B9V7] <= 'Z') LduU[B9V7] = (LduU[B9V7]-'A'+W)%26+'A';
        }
    }
}