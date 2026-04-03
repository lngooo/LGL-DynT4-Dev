@.str = constant [6 x i8] c"%.2f\0A\00"
define dso_local double @ArrayAverage(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca double
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store double 0.000000e+00, double* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i32, i32* %6
  %13 = icmp ne i32 %12, 2
  br i1 %13, label %14, label %40
14:
  %15 = load i32, i32* %6
  switch i32 %15, label %39 [
    i32 0, label %16
    i32 1, label %22
  ]
16:
  %17 = load i32, i32* %7
  %18 = load i32, i32* %4
  %19 = icmp slt i32 %17, %18
  %20 = zext i1 %19 to i64
  %21 = select i1 %19, i32 1, i32 2
  store i32 %21, i32* %6
  br label %39
22:
  %23 = load i32*, i32** %3
  %24 = load i32, i32* %7
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i32, i32* %23, i64 %25
  %27 = load i32, i32* %26
  %28 = sitofp i32 %27 to double
  %29 = load double, double* %5
  %30 = fsub double %28, %29
  %31 = load i32, i32* %7
  %32 = add nsw i32 %31, 1
  %33 = sitofp i32 %32 to double
  %34 = fdiv double %30, %33
  %35 = load double, double* %5
  %36 = fadd double %35, %34
  store double %36, double* %5
  %37 = load i32, i32* %7
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %7
  store i32 0, i32* %6
  br label %39
39:
  br label %11
40:
  %41 = load double, double* %5
  ret double %41
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
  %49 = call double @ArrayAverage(i32* %47, i32 %48)
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
