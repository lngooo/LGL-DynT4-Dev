define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca double
  %6 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store double 0.000000e+00, double* %5
  %8 = load i32, i32* %4
  %9 = add nsw i32 %8, 1
  %10 = icmp sgt i32 %9, 0
  br i1 %10, label %11, label %32
11:
  store i32 0, i32* %6
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = load i32, i32* %4
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %19, label %17
17:
  br label %31
19:
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %6
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = sitofp i32 %24 to double
  %26 = load double, double* %5
  %27 = fadd double %26, %25
  store double %27, double* %5
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %6
  br label %13
31:
  br label %32
32:
  %33 = load double, double* %5
  %34 = load i32, i32* %4
  %35 = sitofp i32 %34 to double
  %36 = fdiv double %33, %35
  ret double %36
}
