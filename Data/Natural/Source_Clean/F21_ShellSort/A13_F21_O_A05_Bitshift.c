void ShellSort(int *a, int n) {
    for(int g=n>>1;g>0;g>>=1){for(int *pi=a+g;pi<a+n;pi++){int v=*pi,*pj=pi;while(pj>=a+g&&*(pj-g)>v){*pj=*(pj-g);pj-=g;}*pj=v;}}
}