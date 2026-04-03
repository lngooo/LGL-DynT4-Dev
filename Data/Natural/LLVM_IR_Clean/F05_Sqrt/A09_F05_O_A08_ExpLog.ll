define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %27
9:
  %10 = load i32, i32* %3
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %2
  br label %27
13:
  %15 = load i32, i32* %3
  %16 = sitofp i32 %15 to double
  %17 = call double @log(double %16)
  %18 = fmul double 5.000000e-01, %17
  %19 = call double @exp(double %18)
  store double %19, double* %4
  %21 = load double, double* %4
  %22 = fadd double %21, 1.000000e-10
  %23 = fptosi double %22 to i32
  store i32 %23, i32* %5
  %24 = load i32, i32* %5
  store i32 %24, i32* %2
  br label %27
27:
  %28 = load i32, i32* %2
  ret i32 %28
}
declare double @exp(double)
declare double @log(double)
