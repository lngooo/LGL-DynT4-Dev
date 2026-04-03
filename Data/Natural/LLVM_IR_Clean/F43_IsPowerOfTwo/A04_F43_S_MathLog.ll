define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 0, i32* %2
  br label %20
8:
  %10 = load i32, i32* %3
  %11 = uitofp i32 %10 to double
  %12 = call double @log2(double %11)
  store double %12, double* %4
  %13 = load double, double* %4
  %14 = load double, double* %4
  %15 = fptosi double %14 to i32
  %16 = sitofp i32 %15 to double
  %17 = fcmp oeq double %13, %16
  %18 = zext i1 %17 to i32
  store i32 %18, i32* %2
  br label %20
20:
  %21 = load i32, i32* %2
  ret i32 %21
}
declare double @log2(double)
