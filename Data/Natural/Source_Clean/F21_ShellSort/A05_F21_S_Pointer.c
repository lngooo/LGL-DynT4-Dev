void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int *p=a+g;p<a+n;p++){int v=*p,*q=p;while(q>=a+g&&*(q-g)>v){*q=*(q-g);q-=g;}*q=v;}}
}