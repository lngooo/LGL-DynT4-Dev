define dso_local double @n(i32* %0, i32 %1) {
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
  br label %41
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
  br label %38
20:
  %21 = load i32*, i32** %4
  %22 = load i32, i32* %7
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  %26 = sitofp i32 %25 to double
  %27 = load double, double* %6
  %28 = fsub double %26, %27
  %29 = load i32, i32* %7
  %30 = add nsw i32 %29, 1
  %31 = sitofp i32 %30 to double
  %32 = fdiv double %28, %31
  %33 = load double, double* %6
  %34 = fadd double %33, %32
  store double %34, double* %6
  br label %35
35:
  %36 = load i32, i32* %7
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %7
  br label %14
38:
  %39 = load double, double* %6
  store double %39, double* %3
  br label %41
41:
  %42 = load double, double* %3
  ret double %42
}
