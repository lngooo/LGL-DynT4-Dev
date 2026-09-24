int z(char* aXv, char gRqz) {
    return !*aXv ? 0 : (*aXv == gRqz ? 1 : 0) + z(aXv + 1, gRqz);
}