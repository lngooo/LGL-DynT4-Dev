long long Yds(int xBj) {
    if (xBj < 0) return 0;
    if (xBj == 0) return 1;
    double HA = 1.0;
    for(int kl = 1; kl <= xBj; kl++) HA *= kl;
    return (long long)floor(HA + 0.5);
}