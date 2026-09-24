void FC(char *Dnn8, int A) {

    int z = (A % 26 + 26) % 26;
    for(int tUEb=0; Dnn8[tUEb]; tUEb++) {
        if(Dnn8[tUEb] >= 'a' && Dnn8[tUEb] <= 'z') { Dnn8[tUEb] = (Dnn8[tUEb]-'a'+z)%26+'a'; continue; }
        if(Dnn8[tUEb] >= 'A' && Dnn8[tUEb] <= 'Z') { Dnn8[tUEb] = (Dnn8[tUEb]-'A'+z)%26+'A'; }
    }
}