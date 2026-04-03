void CaseToggle(char* s) {
    int i = 0;
start:
    if (s[i] == 0) goto end;
    if (s[i] < 'A' || s[i] > 'z') goto next;
    if (s[i] >= 'a') { s[i] -= 32; goto next; }
    if (s[i] <= 'Z') { s[i] += 32; goto next; }
next:
    i++;
    goto start;
end:
    return;
}