define dso_local double @AQ(i32* %0, i32 %1) {
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
  br label %58
11:
  store double 0.000000e+00, double* %6
  store i32 0, i32* %7
  br label %14
14:
  %15 = load i32, i32* %7
  %16 = load i32, i32* %5
  %17 = sub nsw i32 %16, 2
  %18 = icmp sle i32 %15, %17
  br i1 %18, label %19, label %38
19:
  %20 = load i32*, i32** %4
  %21 = load i32, i32* %7
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  %25 = load i32*, i32** %4
  %26 = load i32, i32* %7
  %27 = add nsw i32 %26, 1
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %25, i64 %28
  %30 = load i32, i32* %29
  %31 = add nsw i32 %24, %30
  %32 = sitofp i32 %31 to double
  %33 = load double, double* %6
  %34 = fadd double %33, %32
  store double %34, double* %6
  br label %35
35:
  %36 = load i32, i32* %7
  %37 = add nsw i32 %36, 2
  store i32 %37, i32* %7
  br label %14
38:
  %39 = load i32, i32* %7
  %40 = load i32, i32* %5
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %42, label %51
42:
  %43 = load i32*, i32** %4
  %44 = load i32, i32* %7
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = sitofp i32 %47 to double
  %49 = load double, double* %6
  %50 = fadd double %49, %48
  store double %50, double* %6
  br label %51
51:
  %52 = load double, double* %6
  %53 = load i32, i32* %5
  %54 = sitofp i32 %53 to double
  %55 = fdiv double %52, %54
  store double %55, double* %3
  br label %58
58:
  %59 = load double, double* %3
  ret double %59
}
