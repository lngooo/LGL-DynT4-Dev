int Sum(int n) {
    int left = 1, right = n, total = 0;
    while (left < right) {
        total += (left + right);
        left++;
        right--;
    }
    if (left == right) total += left;
    return total;
}