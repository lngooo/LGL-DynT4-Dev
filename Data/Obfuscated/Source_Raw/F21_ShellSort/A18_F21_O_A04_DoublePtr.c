/**
 * LGL-DynT4 Dataset - Function: ShellSort
 * -----------------------------------------
 * File: A18_F21_O_A04_DoublePtr.c
 * Implementation Logic: 基于 A04 引入二级指针访问 [cite: 21, 28]
 * Input Format: <int1> <int2> ...
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Iq(int *QNhB, int Ob) {
    for(int j0=Ob/2;j0>0;j0/=2){for(int kG=0;kG<j0;kG++){for(int EE=kG+j0;EE<Ob;EE+=j0){int sQg=QNhB[EE],xQrz=EE-j0;while(xQrz>=kG){int **SZgD=&QNhB;if((*SZgD)[xQrz]>sQg){QNhB[xQrz+j0]=(*SZgD)[xQrz];xQrz-=j0;}else break;}QNhB[xQrz+j0]=sQg;}}}
}

int main(int Bjbs, char *hKya[]) {
    if (Bjbs < 2) return 0;
    int Ob = Bjbs - 1;
    int *QNhB = (int *)malloc(Ob * sizeof(int));
    for (int EE = 0; EE < Ob; EE++) QNhB[EE] = atoi(hKya[EE+1]);
    Iq(QNhB, Ob);
    for (int EE = 0; EE < Ob; EE++) printf("%d%c", QNhB[EE], EE == Ob - 1 ? '\n' : ' ');
    free(QNhB);
    return 0;
}
