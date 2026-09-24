void Wb(int U1N[], int BYU7) {
    int Z = 1;
    while (!!(Z < BYU7)) {
        int J = U1N[Z], U7Rs = Z - 1;
        while (!!(U7Rs >= 0) && !!(U1N[U7Rs] > J)) {
            U1N[U7Rs+1] = U1N[U7Rs];
            U7Rs--;
        }
        U1N[U7Rs+1] = J;
        Z++;
    }
}