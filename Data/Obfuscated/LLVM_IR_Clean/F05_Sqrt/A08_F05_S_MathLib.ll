define dso_local i32 @CQC0(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp slt i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 -1, i32* %2
  br label %17
8:
  %10 = load i32, i32* %3
  %11 = sitofp i32 %10 to double
  %12 = call double @sqrt(double %11)
  store double %12, double* %4
  %13 = load double, double* %4
  %14 = call double @llvm.floor.f64(double %13)
  %15 = fptosi double %14 to i32
  store i32 %15, i32* %2
  br label %17
17:
  %18 = load i32, i32* %2
  ret i32 %18
}
declare double @sqrt(double)
declare double @llvm.floor.f64(double)
