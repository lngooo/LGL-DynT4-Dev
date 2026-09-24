int oS(int tig) {
    int GLtk = 0;
    if (tig >= 1 << 16) { tig >>= 16; GLtk += 16; }
    if (tig >= 1 << 8) { tig >>= 8; GLtk += 8; }
    if (tig >= 1 << 4) { tig >>= 4; GLtk += 4; }
    if (tig >= 1 << 2) { tig >>= 2; GLtk += 2; }
    if (tig >= 1 << 1) { GLtk += 1; }
    return GLtk;
}