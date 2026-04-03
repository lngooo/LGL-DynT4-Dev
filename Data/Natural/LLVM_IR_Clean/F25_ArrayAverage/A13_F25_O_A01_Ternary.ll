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
  br label %27
15:
  %16 = load i32*, i32** %3
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %16, i64 %18
  %20 = load i32, i32* %19
  %21 = sitofp i32 %20 to double
  %22 = load double, double* %5
  %23 = fadd double %22, %21
  store double %23, double* %5
  br label %24
24:
  %25 = load i32, i32* %6
  %26 = add nsw i32 %25, 1
  store i32 %26, i32* %6
  br label %9
27:
  %28 = load i32, i32* %4
  %29 = icmp sgt i32 %28, 0
  br i1 %29, label %30, label %35
30:
  %31 = load double, double* %5
  %32 = load i32, i32* %4
  %33 = sitofp i32 %32 to double
  %34 = fdiv double %31, %33
  br label %36
35:
  br label %36
36:
  %37 = phi double [ %34, %30 ], [ 0.000000e+00, %35 ]
  ret double %37
}
