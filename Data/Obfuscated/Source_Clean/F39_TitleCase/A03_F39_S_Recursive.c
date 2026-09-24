void Gqpa(char* hf, int zCoY) {
    if (!*hf) return;
    if (isspace(*hf)) {
        Gqpa(hf + 1, 1);
    } else {
        *hf = zCoY ? toupper(*hf) : tolower(*hf);
        Gqpa(hf + 1, 0);
    }
}

void N7(char* hf) {
    Gqpa(hf, 1);
}