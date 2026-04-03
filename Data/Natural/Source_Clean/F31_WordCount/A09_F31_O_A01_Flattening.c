int WordCount(char* s) {
    int count = 0, state = 0, sw_state = 0;
    while (sw_state != -1) {
        switch (sw_state) {
            case 0: if (!*s) sw_state = -1; else sw_state = 1; break;
            case 1: if (isspace(*s)) state = 0; else if (state == 0) { state = 1; count++; }
                    s++; sw_state = 0; break;
        }
    }
    return count;
}