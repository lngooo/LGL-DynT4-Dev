define dso_local i32 @lsw(i32* %0, i32 %1) {
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
  br label %28
15:
  %16 = load i32*, i32** %3
  %17 = load i32, i32* %6
  %18 = sext i32 %17 to i64
  %19 = getelementptr inbounds i32, i32* %16, i64 %18
  %20 = load i32, i32* %19
  %21 = sitofp i32 %20 to double
  %22 = call double @llvm.fmuladd.f64(double %21, double 1.000000e+00, double 0.000000e+00)
  %23 = load double, double* %5
  %24 = fadd double %23, %22
  store double %24, double* %5
  br label %25
25:
  %26 = load i32, i32* %6
  %27 = add nsw i32 %26, 1
  store i32 %27, i32* %6
  br label %9
28:
  %29 = load double, double* %5
  %30 = fptosi double %29 to i32
  ret i32 %30
}
declare double @llvm.fmuladd.f64(double, double, double)
