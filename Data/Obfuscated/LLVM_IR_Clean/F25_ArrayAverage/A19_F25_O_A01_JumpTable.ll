define dso_local double @pH2(i32* %0, i32 %1) {
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
  br i1 %12, label %13, label %23
13:
  %14 = load i32*, i32** %3
  %15 = load i32, i32* %6
  %16 = add nsw i32 %15, 1
  store i32 %16, i32* %6
  %17 = sext i32 %15 to i64
  %18 = getelementptr inbounds i32, i32* %14, i64 %17
  %19 = load i32, i32* %18
  %20 = sitofp i32 %19 to double
  %21 = load double, double* %5
  %22 = fadd double %21, %20
  store double %22, double* %5
  br label %9
23:
  %24 = load double, double* %5
  %25 = load i32, i32* %4
  %26 = sitofp i32 %25 to double
  %27 = fdiv double %24, %26
  ret double %27
}
