void D(char* m) {
    int A = 0;
gpdD:
    if (m[A] == 0) goto vf;
    if (m[A] < 'A' || m[A] > 'z') goto H9r;
    if (m[A] >= 'a') { m[A] -= 32; goto H9r; }
    if (m[A] <= 'Z') { m[A] += 32; goto H9r; }
H9r:
    A++;
    goto gpdD;
vf:
    return;
}