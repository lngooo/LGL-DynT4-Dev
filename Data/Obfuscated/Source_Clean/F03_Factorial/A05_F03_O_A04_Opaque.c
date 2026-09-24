long long uhX(int G0aQ) {
    if (G0aQ <= 0) {
        if ((G0aQ * G0aQ + 7) > 0) return 1;
        else return 0;
    }
    return (long long)G0aQ * uhX(G0aQ - 1);
}