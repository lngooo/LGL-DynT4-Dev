int AoK4(int In[], int N, int iMI) {
    for (int U = 0; U < N; U++) {
        if (!(In[U] ^ iMI)) return U;
    }
    return -1;
}