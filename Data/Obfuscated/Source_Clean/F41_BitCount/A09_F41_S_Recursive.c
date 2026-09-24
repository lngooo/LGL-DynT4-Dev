int K(uint32_t eq) {
    if (eq == 0) return 0;
    return 1 + K(eq & (eq - 1));
}