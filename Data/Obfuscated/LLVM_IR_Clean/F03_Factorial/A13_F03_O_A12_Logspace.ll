define dso_local i64 @oD(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca double
  %5 = alloca i32
  %6 = alloca i64
  %7 = alloca i64
  %8 = alloca i32
  %9 = alloca i32
  store i32 %0, i32* %3
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 0, i64* %2
  br label %73
13:
  %14 = load i32, i32* %3
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  store i64 1, i64* %2
  br label %73
17:
  store double 0.000000e+00, double* %4
  store i32 1, i32* %5
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = load i32, i32* %3
  %23 = icmp sle i32 %21, %22
  br i1 %23, label %26, label %24
24:
  br label %35
26:
  %27 = load i32, i32* %5
  %28 = sitofp i32 %27 to double
  %29 = call double @log(double %28)
  %30 = load double, double* %4
  %31 = fadd double %30, %29
  store double %31, double* %4
  br label %32
32:
  %33 = load i32, i32* %5
  %34 = add nsw i32 %33, 1
  store i32 %34, i32* %5
  br label %20
35:
  %37 = load double, double* %4
  %38 = call double @exp(double %37)
  %39 = fadd double %38, 5.000000e-01
  %40 = fptosi double %39 to i64
  store i64 %40, i64* %6
  store i64 1, i64* %7
  store i32 2, i32* %8
  br label %43
43:
  %44 = load i32, i32* %8
  %45 = load i32, i32* %3
  %46 = icmp sle i32 %44, %45
  br i1 %46, label %49, label %47
47:
  br label %57
49:
  %50 = load i32, i32* %8
  %51 = sext i32 %50 to i64
  %52 = load i64, i64* %7
  %53 = mul nsw i64 %52, %51
  store i64 %53, i64* %7
  br label %54
54:
  %55 = load i32, i32* %8
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %8
  br label %43
57:
  %58 = load i64, i64* %7
  %59 = sitofp i64 %58 to double
  %60 = call double @log(double %59)
  %61 = load double, double* %4
  %62 = fsub double %60, %61
  %63 = call double @llvm.fabs.f64(double %62)
  %64 = fcmp olt double %63, 0x3EB0C6F7A0B5ED8D
  br i1 %64, label %65, label %67
65:
  %66 = load i64, i64* %7
  store i64 %66, i64* %2
  store i32 1, i32* %9
  br label %69
67:
  %68 = load i64, i64* %7
  store i64 %68, i64* %2
  store i32 1, i32* %9
  br label %69
69:
  br label %73
73:
  %74 = load i64, i64* %2
  ret i64 %74
}
declare double @log(double)
declare double @exp(double)
declare double @llvm.fabs.f64(double)
