unsigned int h4cd(unsigned int Mlod) {
    unsigned int BAb = Mlod;
    unsigned int f = Mlod >> 1;

    return (BAb | f) & ~(BAb & f);
}