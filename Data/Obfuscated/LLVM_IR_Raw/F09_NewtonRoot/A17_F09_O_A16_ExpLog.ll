@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IfOK(i32 %0) {
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
  %14 = call i32 @IfOK(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
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
