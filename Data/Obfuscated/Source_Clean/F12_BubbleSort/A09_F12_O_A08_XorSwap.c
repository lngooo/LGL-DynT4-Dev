void txAq(int ta[], int H) {
    int ws = 0, IaS7 = H - 1, WEta = 1;
    while (WEta) {
        WEta = 0;
        for (int ZsMo = ws; ZsMo < IaS7; ZsMo++) {
            if (ta[ZsMo] > ta[ZsMo+1]) {
                ta[ZsMo] ^= ta[ZsMo+1]; ta[ZsMo+1] ^= ta[ZsMo]; ta[ZsMo] ^= ta[ZsMo+1];
                WEta = 1;
            }
        }
        if (!WEta) break;
        WEta = 0; IaS7--;
        for (int ZsMo = IaS7 - 1; ZsMo >= ws; ZsMo--) {
            if (ta[ZsMo] > ta[ZsMo+1]) {
                ta[ZsMo] ^= ta[ZsMo+1]; ta[ZsMo+1] ^= ta[ZsMo]; ta[ZsMo] ^= ta[ZsMo+1];
                WEta = 1;
            }
        }
        ws++;
    }
}