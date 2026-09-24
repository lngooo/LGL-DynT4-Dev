void X(char* Z) {
    int c = 0, bZ = 0;
    while (bZ != -1) {
        switch (bZ) {
            case 0: bZ = (Z[c] == 0) ? -1 : 1; break;
            case 1: 
                if (Z[c] >= 'a' && Z[c] <= 'z') Z[c] -= 32;
                else if (Z[c] >= 'A' && Z[c] <= 'Z') Z[c] += 32;
                bZ = 2; break;
            case 2: c++; bZ = 0; break;
        }
    }
}