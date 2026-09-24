int Nw(unsigned int TRu) {
    if (TRu == 0) return 0;
    double klL = log2((double)TRu);
    return (klL == (int)klL);
}