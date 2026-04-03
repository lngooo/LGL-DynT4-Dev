define dso_local i64 @Fa4(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca double
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i64 0, i64* %2
  br label %36
9:
  %10 = load i32, i32* %3
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 1, i64* %2
  br label %36
13:
  store double 1.000000e+00, double* %4
  store i32 1, i32* %5
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %3
  %19 = icmp sle i32 %17, %18
  br i1 %19, label %22, label %20
20:
  br label %30
22:
  %23 = load i32, i32* %5
  %24 = sitofp i32 %23 to double
  %25 = load double, double* %4
  %26 = fmul double %25, %24
  store double %26, double* %4
  br label %27
27:
  %28 = load i32, i32* %5
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %5
  br label %16
30:
  %31 = load double, double* %4
  %32 = fadd double %31, 5.000000e-01
  %33 = call double @llvm.floor.f64(double %32)
  %34 = fptosi double %33 to i64
  store i64 %34, i64* %2
  br label %36
36:
  %37 = load i64, i64* %2
  ret i64 %37
}
declare double @llvm.floor.f64(double)
