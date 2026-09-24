void omY(char* B) {
    int p2 = 0;
    for (int qZz = 0; B[qZz]; ) {
        if (!isspace((unsigned char)B[qZz])) {
            B[p2++] = B[qZz++];
        } else {
            int Yi2O = qZz;
            while (B[Yi2O] && isspace((unsigned char)B[Yi2O])) Yi2O++;
            qZz = Yi2O;
        }
    }
    B[p2] = '\0';
}