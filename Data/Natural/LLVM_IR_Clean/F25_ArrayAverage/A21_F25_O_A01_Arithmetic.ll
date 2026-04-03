define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca double
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store double 0.000000e+00, double* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i32, i32* %6
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %10, %11
  br i1 %12, label %15, label %13
13:
  br label %28
15:
  %16 = load double, double* %5
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  %22 = sub nsw i32 0, %21
  %23 = sitofp i32 %22 to double
  %24 = fsub double %16, %23
  store double %24, double* %5
  br label %25
25:
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %6
  br label %9
28:
  %29 = load double, double* %5
  %30 = load i32, i32* %4
  %31 = sitofp i32 %30 to double
  %32 = fdiv double %29, %31
  ret double %32
}
