int kD(int r7OS) {
    return (r7OS <= 0) ? 0 : (r7OS + kD(r7OS - 1));
}