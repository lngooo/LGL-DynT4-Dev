void dBhx(char* Eo) {
    if (!*Eo) return;
    if (*Eo >= 'a' && *Eo <= 'z') *Eo -= 32;
    else if (*Eo >= 'A' && *Eo <= 'Z') *Eo += 32;
    dBhx(Eo + 1);
}