unsigned int F(unsigned int BWuo) {
    unsigned int tyU = BWuo >> 1;
    return ~((~BWuo & ~tyU) | (BWuo & tyU)); 
}