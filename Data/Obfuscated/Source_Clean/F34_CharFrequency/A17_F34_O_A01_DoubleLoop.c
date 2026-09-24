int COI(char* ZW6c, char fw7l) {
    int Iz = 0;
    for (int yEmI = 0; ZW6c[yEmI]; yEmI++) {
        for (int b7 = 0; b7 < 1; b7++) {
            if (ZW6c[yEmI] == fw7l) Iz++;
        }
    }
    return Iz;
}