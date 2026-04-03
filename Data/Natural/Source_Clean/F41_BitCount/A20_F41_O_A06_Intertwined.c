int BitCount(uint32_t n) {
    int count = 0;
    if (n == 0) goto end;
start_loop:
    n &= (n - 1);
    count++;
    if (n != 0) goto start_loop;
    goto end;
dummy:
    count--; 
end:
    return count;
}