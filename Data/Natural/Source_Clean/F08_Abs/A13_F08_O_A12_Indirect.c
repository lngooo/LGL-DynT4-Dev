typedef int (*abs_func)(int);

int Abs(int n) {
    abs_func f = abs;
    return f(n);
}