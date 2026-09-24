int U(char* Lu, char j) {
    int sGc0 = 0;
    int B = 7;
    while (*Lu) {
        if ((B * B) % 2 != 0) {
            if (*Lu == j) sGc0++;
            Lu++;
        } else {
            Lu--; 
        }
    }
    return sGc0;
}