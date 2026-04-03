/**
* LGL-DynT4 Dataset - Function: AnagramCheck
* -----------------------------------------
* File: A03_F29_S_PrimeProduct.c
* Implementation Logic: Maps each char to a prime number; strings are anagrams if their products are equal.
* Input Format: <string1> <string2>
*/
#include <stdio.h>
#include <string.h>

int AnagramCheck(char* s1, char* s2) {
    int primes[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101};
    if (strlen(s1) != strlen(s2)) return 0;
    long long p1 = 1, p2 = 1;
    for (int i = 0; s1[i]; i++) {
        p1 *= primes[s1[i] % 26];
        p2 *= primes[s2[i] % 26];
    }
    return (int)(p1 == p2);
}

int main(int argc, char* argv[]) {
    if (argc < 3) return 0;
    printf("%d\n", AnagramCheck(argv[1], argv[2]));
    return 0;
}