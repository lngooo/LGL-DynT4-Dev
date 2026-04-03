typedef int (*scan_ptr)(const char*, const char*, ...);

int HexToInt(const char* s) {
    int out = 0;
    scan_ptr f = sscanf;
    f(s, "%x", &out);
    return out;
}