int lL9(int cgM, int wUYu) {
    cgM = abs(cgM); wUYu = abs(wUYu);
    if (wUYu == 0) return cgM;
    return lL9(wUYu, cgM % wUYu);
}