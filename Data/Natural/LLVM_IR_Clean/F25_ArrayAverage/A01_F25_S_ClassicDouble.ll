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
  br label %38
11:
  store double 0.000000e+00, double* %6
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = load i32, i32* %5
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  br label %32
20:
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %7
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  %26 = sitofp i32 %25 to double
  %27 = load double, double* %6
  %28 = fadd double %27, %26
  store double %28, double* %6
  br label %29
29:
  %30 = load i32, i32* %7
  %31 = add nsw i32 %30, 1
  store i32 %31, i32* %7
  br label %14
32:
  %33 = load double, double* %6
  %34 = load i32, i32* %5
  %35 = sitofp i32 %34 to double
  %36 = fdiv double %33, %35
  store double %36, double* %3
  br label %38
38:
  %39 = load double, double* %3
  ret double %39
}
