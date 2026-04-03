define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca double
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store double 0.000000e+00, double* %5
  %9 = load i32, i32* %4
  store i32 %9, i32* %6
  br label %10
10:
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = add nsw i32 %12, -1
  store i32 %13, i32* %6
  %14 = icmp slt i32 %13, 0
  br i1 %14, label %15, label %16
15:
  br label %25
16:
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  %22 = sitofp i32 %21 to double
  %23 = load double, double* %5
  %24 = fadd double %23, %22
  store double %24, double* %5
  br label %10
25:
  %26 = load double, double* %5
  %27 = load i32, i32* %4
  %28 = sitofp i32 %27 to double
  %29 = fdiv double %26, %28
  ret double %29
}
