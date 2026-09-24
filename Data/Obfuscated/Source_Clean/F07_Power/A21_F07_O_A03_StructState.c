struct Fy { int p; int OMeH; int x; };

int iy3(int xIRl, int exp) {
    struct Fy XebL = {xIRl, exp, 1};
    while (XebL.OMeH > 0) {
        if (XebL.OMeH % 2 == 1) XebL.x *= XebL.p;
        XebL.p *= XebL.p;
        XebL.OMeH /= 2;
    }
    return XebL.x;
}