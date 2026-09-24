@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Power(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca double
  %7 = alloca double
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i64
  %13 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %14 = load i32, i32* %5
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  store i32 1, i32* %3
  br label %82
17:
  %18 = load i32, i32* %4
  %19 = icmp eq i32 %18, 0
  br i1 %19, label %20, label %21
20:
  store i32 0, i32* %3
  br label %82
21:
  %23 = load i32, i32* %5
  %24 = sitofp i32 %23 to double
  %25 = load i32, i32* %4
  %26 = sitofp i32 %25 to double
  %27 = call double @log(double %26)
  %28 = fmul double %24, %27
  store double %28, double* %6
  %30 = load double, double* %6
  %31 = call double @exp(double %30)
  store double %31, double* %7
  store i32 1, i32* %8
  %34 = load i32, i32* %4
  store i32 %34, i32* %9
  store i32 0, i32* %10
  br label %36
36:
  %37 = load i32, i32* %10
  %38 = load i32, i32* %5
  %39 = icmp slt i32 %37, %38
  br i1 %39, label %42, label %40
40:
  br label %49
42:
  %43 = load i32, i32* %9
  %44 = load i32, i32* %8
  %45 = mul i32 %44, %43
  store i32 %45, i32* %8
  br label %46
46:
  %47 = load i32, i32* %10
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %10
  br label %36
49:
  %51 = load i32, i32* %8
  store i32 %51, i32* %11
  %52 = load double, double* %7
  %53 = fcmp ole double %52, 0x41DFFFFFFFC00000
  br i1 %53, label %54, label %74
54:
  %55 = load double, double* %7
  %56 = fcmp oge double %55, 0xC1E0000000000000
  br i1 %56, label %57, label %74
57:
  %59 = load double, double* %7
  %60 = fadd double %59, 5.000000e-01
  %61 = fptosi double %60 to i64
  store i64 %61, i64* %12
  %62 = load i64, i64* %12
  %63 = trunc i64 %62 to i32
  %64 = load i32, i32* %11
  %65 = icmp eq i32 %63, %64
  br i1 %65, label %66, label %69
66:
  %67 = load i64, i64* %12
  %68 = trunc i64 %67 to i32
  store i32 %68, i32* %3
  store i32 1, i32* %13
  br label %70
69:
  store i32 0, i32* %13
  br label %70
70:
  %72 = load i32, i32* %13
  switch i32 %72, label %76 [
    i32 0, label %73
  ]
73:
  br label %74
74:
  %75 = load i32, i32* %11
  store i32 %75, i32* %3
  store i32 1, i32* %13
  br label %76
76:
  br label %82
82:
  %83 = load i32, i32* %3
  ret i32 %83
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
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @Power(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
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
