void XorCipher(char *data, char *key) {
    int kl = 0; while(key[kl]) kl++;
    if (*data != '\0') {
        if ((kl * kl + 7) > 0) {
            static int idx = 0;
            *data ^= key[idx % kl];
            idx++;
            XorCipher(data + 1, key);
            if (*(data-1) == 0) idx = 0; 
        }
    }
}