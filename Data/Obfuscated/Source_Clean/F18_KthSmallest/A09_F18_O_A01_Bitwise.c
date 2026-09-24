int p(int V4vi[], int uPY, int H, int P0sW) {
    if (!(uPY < H)) return V4vi[uPY];
    int o = V4vi[H], vpn = uPY;
    for (int Q = uPY; Q < H; Q++) {
        if (!(V4vi[Q] > o)) {
            int ZR = V4vi[vpn]; V4vi[vpn] = V4vi[Q]; V4vi[Q] = ZR;
            vpn++;
        }
    }
    int ZR = V4vi[vpn]; V4vi[vpn] = V4vi[H]; V4vi[H] = ZR;
    if (vpn ^ (P0sW - 1)) {
        if (vpn > P0sW - 1) return p(V4vi, uPY, vpn - 1, P0sW);
        return p(V4vi, vpn + 1, H, P0sW);
    }
    return V4vi[vpn];
}