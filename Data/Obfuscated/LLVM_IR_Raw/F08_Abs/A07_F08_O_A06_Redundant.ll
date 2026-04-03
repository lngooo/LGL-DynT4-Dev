@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @F(i32 %0) {
  %2 = alloca i32
  %3 = alloca float
  %4 = alloca double
  store i32 %0, i32* %2
  %6 = load i32, i32* %2
  %7 = sitofp i32 %6 to float
  store float %7, float* %3
  %9 = load float, float* %3
  %10 = fpext float %9 to double
  %11 = call double @pow(double %10, double 2.000000e+00)
  store double %11, double* %4
  %12 = load double, double* %4
  %13 = call double @pow(double %12, double 5.000000e-01)
  %14 = fptosi double %13 to i32
  ret i32 %14
}
declare double @pow(double, double)
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
  %14 = call i32 @F(i32 %13)
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
