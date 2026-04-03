define dso_local i32 @ChY1(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp eq i32 %4, 1
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %15
7:
  %8 = load i32, i32* %3
  %9 = sitofp i32 %8 to double
  %10 = call double @log(double %9)
  %11 = call double @log(double 2.000000e+00)
  %12 = fdiv double %10, %11
  %13 = fadd double %12, 1.000000e-09
  %14 = fptosi double %13 to i32
  store i32 %14, i32* %2
  br label %15
15:
  %16 = load i32, i32* %2
  ret i32 %16
}
declare double @log(double)
