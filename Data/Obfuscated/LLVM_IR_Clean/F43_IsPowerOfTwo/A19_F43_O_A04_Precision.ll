define dso_local i32 @bb(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 0, i32* %2
  br label %23
8:
  %10 = load i32, i32* %3
  %11 = uitofp i32 %10 to double
  %12 = call double @log(double %11)
  %13 = call double @log(double 2.000000e+00)
  %14 = fdiv double %12, %13
  store double %14, double* %4
  %15 = load double, double* %4
  %16 = load double, double* %4
  %17 = call double @llvm.round.f64(double %16)
  %18 = fsub double %15, %17
  %19 = call double @llvm.fabs.f64(double %18)
  %20 = fcmp olt double %19, 1.000000e-09
  %21 = zext i1 %20 to i32
  store i32 %21, i32* %2
  br label %23
23:
  %24 = load i32, i32* %2
  ret i32 %24
}
declare double @log(double)
declare double @llvm.round.f64(double)
declare double @llvm.fabs.f64(double)
