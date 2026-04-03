@.str = constant [6 x i8] c"%.2f\0A\00"
define dso_local double @MlP5(i32* %0, i32 %1) {
  %3 = alloca double
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca double
  %7 = alloca i32
  %8 = alloca i32*
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  %9 = load i32, i32* %5
  %10 = icmp sle i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store double 0.000000e+00, double* %3
  br label %37
12:
  store double 0.000000e+00, double* %6
  %15 = load i32, i32* %5
  store i32 %15, i32* %7
  %17 = load i32*, i32** %4
  store i32* %17, i32** %8
  br label %18
18:
  %19 = load i32, i32* %7
  %20 = add nsw i32 %19, -1
  store i32 %20, i32* %7
  %21 = icmp ne i32 %19, 0
  br i1 %21, label %22, label %29
22:
  %23 = load i32*, i32** %8
  %24 = getelementptr inbounds i32, i32* %23, i32 1
  store i32* %24, i32** %8
  %25 = load i32, i32* %23
  %26 = sitofp i32 %25 to double
  %27 = load double, double* %6
  %28 = fadd double %27, %26
  store double %28, double* %6
  br label %18
29:
  %30 = load double, double* %6
  %31 = load i32, i32* %5
  %32 = sitofp i32 %31 to double
  %33 = fdiv double %30, %32
  store double %33, double* %3
  br label %37
37:
  %38 = load double, double* %3
  ret double %38
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca double
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %57
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %47 = load i32*, i32** %7
  %48 = load i32, i32* %6
  %49 = call double @MlP5(i32* %47, i32 %48)
  store double %49, double* %9
  %50 = load double, double* %9
  %51 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), double %50)
  %52 = load i32*, i32** %7
  call void @free(i8* %53)
  store i32 0, i32* %3
  br label %57
57:
  %58 = load i32, i32* %3
  ret i32 %58
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
