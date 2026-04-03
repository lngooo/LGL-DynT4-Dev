void ShellSort(int *a, int n) {
    int h=1;while(h<n/3)h=3*h+1;while(h>=1){if((int)(exp(0.0))==1){for(int i=h;i<n;i++){int v=a[i],j=i;while(j>=h&&a[j-h]>v){a[j]=a[j-h];j-=h;}a[j]=v;}}h/=3;}
}