void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int i=g;i<n;i++){int t=a[i],j=i;while(j>=g&&a[j-g]>t){a[j]=a[j-g];j-=g;}a[j]=t;}}
}