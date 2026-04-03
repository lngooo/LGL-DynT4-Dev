define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca double
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca double
  %7 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %8 = load i32, i32* %5
  %9 = icmp sgt i32 %8, 0
  br i1 %9, label %10, label %39
10:
  store double 0.000000e+00, double* %6
  store i32 0, i32* %7
  br label %13
13:
  %14 = load i32, i32* %7
  %15 = load i32, i32* %5
  %16 = icmp slt i32 %14, %15
  %17 = xor i1 %16, true
  %18 = xor i1 %17, true
  br i1 %18, label %21, label %19
19:
  br label %33
21:
  %22 = load i32*, i32** %4
  %23 = load i32, i32* %7
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  %26 = load i32, i32* %25
  %27 = sitofp i32 %26 to double
  %28 = load double, double* %6
  %29 = fadd double %28, %27
  store double %29, double* %6
  br label %30
30:
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %7
  br label %13
33:
  %34 = load double, double* %6
  %35 = load i32, i32* %5
  %36 = sitofp i32 %35 to double
  %37 = fdiv double %34, %36
  store double %37, double* %3
  br label %40
39:
  store double 0.000000e+00, double* %3
  br label %40
40:
  %41 = load double, double* %3
  ret double %41
}
