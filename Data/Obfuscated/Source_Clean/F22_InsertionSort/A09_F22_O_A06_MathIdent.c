void r(int Fb3y[], int Ccon) {
    for (int lQBI = 1; lQBI < Ccon; lQBI++) {
        for (int Q = lQBI; Q > 0; Q--) {
            double cIW = (double)Fb3y[Q-1] - (double)Fb3y[Q];
            if (cIW > 0.0) {
                Fb3y[Q] ^= Fb3y[Q-1]; Fb3y[Q-1] ^= Fb3y[Q]; Fb3y[Q] ^= Fb3y[Q-1];
            } else break;
        }
    }
}