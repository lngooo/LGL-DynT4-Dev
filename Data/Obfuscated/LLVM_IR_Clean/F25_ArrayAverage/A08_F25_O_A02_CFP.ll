define dso_local double @qY(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca double
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store double 0.000000e+00, double* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = icmp ne i32 %12, 2
  br i1 %13, label %14, label %40
14:
  %15 = load i32, i32* %6
  switch i32 %15, label %39 [
    i32 0, label %16
    i32 1, label %22
  ]
16:
  %17 = load i32, i32* %7
  %18 = load i32, i32* %4
  %19 = icmp slt i32 %17, %18
  %20 = zext i1 %19 to i64
  %21 = select i1 %19, i32 1, i32 2
  store i32 %21, i32* %6
  br label %39
22:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  %28 = sitofp i32 %27 to double
  %29 = load double, double* %5
  %30 = fsub double %28, %29
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  %33 = sitofp i32 %32 to double
  %34 = fdiv double %30, %33
  %35 = load double, double* %5
  %36 = fadd double %35, %34
  store double %36, double* %5
  %37 = load i32, i32* %7
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %7
  store i32 0, i32* %6
  br label %39
39:
  br label %11
40:
  %41 = load double, double* %5
  ret double %41
}
