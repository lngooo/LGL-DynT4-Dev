define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca double
  %6 = alloca double
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store double 0.000000e+00, double* %5
  store double 0.000000e+00, double* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i32, i32* %7
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %17, label %15
15:
  br label %43
17:
  %18 = load i32, i32* %7
  %19 = srem i32 %18, 2
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %30
21:
  %22 = load i32*, i32** %3
  %23 = load i32, i32* %7
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  %26 = load i32, i32* %25
  %27 = sitofp i32 %26 to double
  %28 = load double, double* %5
  %29 = fadd double %28, %27
  store double %29, double* %5
  br label %39
30:
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %7
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = sitofp i32 %35 to double
  %37 = load double, double* %6
  %38 = fadd double %37, %36
  store double %38, double* %6
  br label %39
39:
  br label %40
40:
  %41 = load i32, i32* %7
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %7
  br label %11
43:
  %44 = load double, double* %5
  %45 = load double, double* %6
  %46 = fadd double %44, %45
  %47 = load i32, i32* %4
  %48 = sitofp i32 %47 to double
  %49 = fdiv double %46, %48
  ret double %49
}
