void q(char* VI) {
    int eNy = strlen(VI);
    for (int kjKf = 0; kjKf < eNy; kjKf+=2) {
        VI[kjKf] = tolower(VI[kjKf]);
        if (kjKf+1 < eNy) VI[kjKf+1] = tolower(VI[kjKf+1]);
    }
    if (eNy > 0) VI[0] = toupper(VI[0]);
    for (int kjKf = 1; kjKf < eNy; kjKf++) {
        if (VI[kjKf-1] == ' ') VI[kjKf] = toupper(VI[kjKf]);
    }
}