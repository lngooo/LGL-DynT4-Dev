void XorCipher(char *data, char *key) {
    int i = 0, kl = 0;
    while(key[kl]) kl++;
loop:
    if (data[i] == '\0') goto end;
    data[i] = data[i] ^ key[i % kl];
    i++;
    goto loop;
end:;
}