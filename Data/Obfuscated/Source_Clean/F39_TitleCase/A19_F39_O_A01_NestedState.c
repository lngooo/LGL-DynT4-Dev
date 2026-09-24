void U9(char* D9l) {
    for (int Qdx = 0; Qdx < 1; Qdx++) {
        int op = 1;
        for (int m80 = 0; D9l[m80]; m80++) {
            for (int Z = 0; Z < 1; Z++) {
                if (isspace(D9l[m80])) op = 1;
                else if (op) { D9l[m80] = toupper(D9l[m80]); op = 0; }
                else D9l[m80] = tolower(D9l[m80]);
            }
        }
    }
}