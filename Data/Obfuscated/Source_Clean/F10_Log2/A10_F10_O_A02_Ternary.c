int h(int j8fX) {
    return (j8fX <= 1) ? 0 : 1 + h(j8fX >> 1);
}