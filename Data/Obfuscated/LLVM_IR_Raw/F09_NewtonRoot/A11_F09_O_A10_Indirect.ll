@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Bwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca double (double)*
  %5 = alloca double
  %6 = alloca double
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %46
10:
  store double (double)* @fabs, double (double)** %4
  %13 = load i32, i32* %3
  %14 = sitofp i32 %13 to double
  store double %14, double* %5
  %16 = load double, double* %5
  %17 = load i32, i32* %3
  %18 = sitofp i32 %17 to double
  %19 = load double, double* %5
  %20 = fdiv double %18, %19
  %21 = fadd double %16, %20
  %22 = fdiv double %21, 2.000000e+00
  store double %22, double* %6
  br label %23
23:
  %24 = load double (double)*, double (double)** %4
  %25 = load double, double* %5
  %26 = load double, double* %6
  %27 = fsub double %25, %26
  %28 = call double %24(double %27)
  %29 = fcmp oge double %28, 0x3FEFF7CED916872B
  br i1 %29, label %30, label %39
30:
  %31 = load double, double* %6
  store double %31, double* %5
  %32 = load double, double* %5
  %33 = load i32, i32* %3
  %34 = sitofp i32 %33 to double
  %35 = load double, double* %5
  %36 = fdiv double %34, %35
  %37 = fadd double %32, %36
  %38 = fdiv double %37, 2.000000e+00
  store double %38, double* %6
  br label %23
39:
  %40 = load double, double* %6
  %41 = fadd double %40, 0x3EB0C6F7A0B5ED8D
  %42 = fptosi double %41 to i32
  store i32 %42, i32* %2
  br label %46
46:
  %47 = load i32, i32* %2
  ret i32 %47
}
declare double @fabs(double)
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
  %14 = call i32 @Bwo(i32 %13)
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
