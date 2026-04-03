define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca double
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca double
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %7 = load i32, i32* %5
  %8 = icmp sle i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store double 0.000000e+00, double* %3
  br label %40
10:
  %11 = load i32, i32* %5
  %12 = icmp eq i32 %11, 1
  br i1 %12, label %13, label %18
13:
  %14 = load i32*, i32** %4
  %15 = getelementptr inbounds i32, i32* %14, i64 0
  %16 = load i32, i32* %15
  %17 = sitofp i32 %16 to double
  store double %17, double* %3
  br label %40
18:
  %20 = load i32*, i32** %4
  %21 = load i32, i32* %5
  %22 = sub nsw i32 %21, 1
  %23 = call double @ArrayAverage(i32* %20, i32 %22)
  store double %23, double* %6
  %24 = load double, double* %6
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  %27 = sitofp i32 %26 to double
  %28 = load i32*, i32** %4
  %29 = load i32, i32* %5
  %30 = sub nsw i32 %29, 1
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %28, i64 %31
  %33 = load i32, i32* %32
  %34 = sitofp i32 %33 to double
  %35 = call double @llvm.fmuladd.f64(double %24, double %27, double %34)
  %36 = load i32, i32* %5
  %37 = sitofp i32 %36 to double
  %38 = fdiv double %35, %37
  store double %38, double* %3
  br label %40
40:
  %41 = load double, double* %3
  ret double %41
}
declare double @llvm.fmuladd.f64(double, double, double)
