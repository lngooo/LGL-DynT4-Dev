int lYl5(const char* EDu) {
    int VxJ = 0;
    const char* Eiy = EDu;
    while (*Eiy) {
        char K8 = *Eiy;
        if (K8 == 97 || K8 == 101 || K8 == 105 || K8 == 111 || K8 == 117 ||
            K8 == 65 || K8 == 69 || K8 == 73 || K8 == 79 || K8 == 85) VxJ++;
        Eiy++;
    }
    return VxJ;
}