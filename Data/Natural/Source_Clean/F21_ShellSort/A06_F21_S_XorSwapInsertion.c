void ShellSort(int *a, int n) {
    for(int g=n/2;g>0;g/=2){for(int i=g;i<n;i++){for(int j=i;j>=g&&a[j-g]>a[j];j-=g){a[j]^=a[j-g];a[j-g]^=a[j];a[j]^=a[j-g];}}}
}