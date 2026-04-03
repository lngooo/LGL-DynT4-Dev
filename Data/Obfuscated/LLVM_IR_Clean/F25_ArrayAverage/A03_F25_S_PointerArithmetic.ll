define dso_local double @MlP5(i32* %0, i32 %1) {
  %3 = alloca double
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca double
  %7 = alloca i32
  %8 = alloca i32*
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %9 = load i32, i32* %5
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store double 0.000000e+00, double* %3
  br label %37
12:
  store double 0.000000e+00, double* %6
  %15 = load i32, i32* %5
  store i32 %15, i32* %7
  %17 = load i32*, i32** %4
  store i32* %17, i32** %8
  br label %18
18:
  %19 = load i32, i32* %7
  %20 = add nsw i32 %19, -1
  store i32 %20, i32* %7
  %21 = icmp ne i32 %19, 0
  br i1 %21, label %22, label %29
22:
  %23 = load i32*, i32** %8
  %24 = getelementptr inbounds i32, i32* %23, i32 1
  store i32* %24, i32** %8
  %25 = load i32, i32* %23
  %26 = sitofp i32 %25 to double
  %27 = load double, double* %6
  %28 = fadd double %27, %26
  store double %28, double* %6
  br label %18
29:
  %30 = load double, double* %6
  %31 = load i32, i32* %5
  %32 = sitofp i32 %31 to double
  %33 = fdiv double %30, %32
  store double %33, double* %3
  br label %37
37:
  %38 = load double, double* %3
  ret double %38
}
