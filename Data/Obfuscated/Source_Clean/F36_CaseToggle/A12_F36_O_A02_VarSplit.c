void bb(char* lwI3) {
    int CBT = 16, MqFb = 16;
    while (*lwI3) {
        char hJ = *lwI3;
        if ((hJ >= 'a' && hJ <= 'z') || (hJ >= 'A' && hJ <= 'Z')) {
            *lwI3 = hJ ^ (CBT + MqFb);
        }
        lwI3++;
    }
}