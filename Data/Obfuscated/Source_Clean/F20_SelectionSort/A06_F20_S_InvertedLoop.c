void VGgG(int bL[], int EL32) {
    for (int s = EL32 - 1; s > 0; s--) {
        int jR = s;
        for (int f4Of = 0; f4Of < s; f4Of++) {
            if (bL[f4Of] > bL[jR]) jR = f4Of;
        }
        int nZ = bL[s]; bL[s] = bL[jR]; bL[jR] = nZ;
    }
}