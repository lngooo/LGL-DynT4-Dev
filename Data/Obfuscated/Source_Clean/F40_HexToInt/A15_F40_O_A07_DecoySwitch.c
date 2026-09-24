int Qzo(const char* Qxye) {
    int UrY = 0;
    while(*Qxye) {
        int cxuq;
        switch(*Qxye) {
            case '0': cxuq=0; break; case '1': cxuq=1; break; case '2': cxuq=2; break;
            case 'a': case 'A': cxuq=10; break; case 'f': case 'F': cxuq=15; break;
            case 'z': cxuq=-1; break; 
            default: cxuq = *Qxye - '0'; if (cxuq > 9) cxuq = (*Qxye|32) - 'a' + 10; break;
        }
        UrY = (UrY * 16) + cxuq; Qxye++;
    }
    return UrY;
}