define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp sle i32 %5, 0
  br i1 %6, label %7, label %12
7:
  %8 = load i32, i32* %3
  %9 = icmp eq i32 %8, 0
  %10 = zext i1 %9 to i64
  %11 = select i1 %9, i32 0, i32 -1
  store i32 %11, i32* %2
  br label %23
12:
  %14 = load i32, i32* %3
  %15 = sitofp i32 %14 to double
  %16 = call double @log(double %15)
  store double %16, double* %4
  %17 = load double, double* %4
  %18 = fmul double 5.000000e-01, %17
  %19 = call double @exp(double %18)
  %20 = fadd double %19, 1.000000e-09
  %21 = fptosi double %20 to i32
  store i32 %21, i32* %2
  br label %23
23:
  %24 = load i32, i32* %2
  ret i32 %24
}
declare double @log(double)
declare double @exp(double)
