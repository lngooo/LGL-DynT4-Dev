define dso_local i32 @bLvd0(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %6
6:
  %7 = load i32, i32* %2
  %8 = icmp sgt i32 %7, 1
  br i1 %8, label %9, label %20
9:
  %11 = load i32, i32* %2
  %12 = sitofp i32 %11 to double
  %13 = fdiv double %12, 2.000000e+00
  store double %13, double* %4
  %14 = load double, double* %4
  %15 = call double @llvm.floor.f64(double %14)
  %16 = fptosi double %15 to i32
  store i32 %16, i32* %2
  %17 = load i32, i32* %3
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %3
  br label %6
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
declare double @llvm.floor.f64(double)
