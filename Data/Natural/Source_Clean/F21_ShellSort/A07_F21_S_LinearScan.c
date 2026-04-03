void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int i=g;i<n;i++){int v=a[i],p=i;while(p>=g&&a[p-g]>v)p-=g;for(int k=i;k>p;k-=g)a[k]=a[k-g];a[p]=v;}}
}