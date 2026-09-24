long N(int DLJ9) {
    return (DLJ9 < 2) ? (long)DLJ9 : (N(DLJ9-1) + N(DLJ9-2));
}