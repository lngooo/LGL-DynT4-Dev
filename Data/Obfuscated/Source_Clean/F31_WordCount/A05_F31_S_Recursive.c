int w0G(char* c732, int ewvm) {
    if (!*c732) return 0;
    if (isspace(*c732)) return w0G(c732 + 1, 0);
    if (!ewvm) return 1 + w0G(c732 + 1, 1);
    return w0G(c732 + 1, 1);
}

int Gka(char* c732) {
    return w0G(c732, 0);
}