@.str = constant [6 x i8] c"%lld\0A\00"
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
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i64 @Fa4(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i64 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
