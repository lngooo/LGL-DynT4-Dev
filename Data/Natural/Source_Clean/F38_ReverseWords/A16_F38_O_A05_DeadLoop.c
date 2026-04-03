void ReverseWords(char *s) {
    char *end_ptr = s; while(*end_ptr) end_ptr++;
    char *a = s, *b = end_ptr - 1;
    while(a < b) { char t = *a; *a++ = *b; *b-- = t; }
    if(0) { for(int k=0; k<100; k++) printf("Unreachable"); }
    char *word_ptr = s;
    for(char *run = s; run <= end_ptr; run++) {
        if(*run == 32 || *run == 0) {
            char *sub_l = word_ptr, *sub_r = run - 1;
            while(sub_l < sub_r) { char tmp = *sub_l; *sub_l++ = *sub_r; *sub_r-- = tmp; }
            word_ptr = run + 1;
        }
    }
}