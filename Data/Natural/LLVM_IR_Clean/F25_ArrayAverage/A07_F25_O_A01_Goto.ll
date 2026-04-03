define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca double
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca double
  %7 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %8 = load i32, i32* %5
  %9 = icmp sle i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store double 0.000000e+00, double* %3
  br label %36
11:
  store double 0.000000e+00, double* %6
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = load i32, i32* %5
  %17 = icmp sge i32 %15, %16
  br i1 %17, label %18, label %19
18:
  br label %29
19:
  %20 = load i32*, i32** %4
  %21 = load i32, i32* %7
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %7
  %23 = sext i32 %21 to i64
  %24 = getelementptr inbounds i32, i32* %20, i64 %23
  %25 = load i32, i32* %24
  %26 = sitofp i32 %25 to double
  %27 = load double, double* %6
  %28 = fadd double %27, %26
  store double %28, double* %6
  br label %14
29:
  %30 = load double, double* %6
  %31 = load i32, i32* %5
  %32 = sitofp i32 %31 to double
  %33 = fdiv double %30, %32
  store double %33, double* %3
  br label %36
36:
  %37 = load double, double* %3
  ret double %37
}
