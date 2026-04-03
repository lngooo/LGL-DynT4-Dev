@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @QTj(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32*
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca double
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  %13 = load i32*, i32** %5
  store i32* %13, i32** %8
  store i32 0, i32* %9
  br label %15
15:
  %16 = load i32, i32* %9
  %17 = load i32, i32* %6
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %20, label %19
19:
  store i32 2, i32* %10
  br label %47
20:
  %22 = load i32*, i32** %8
  %23 = load i32, i32* %9
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i32, i32* %22, i64 %24
  %26 = load i32, i32* %25
  %27 = sitofp i32 %26 to double
  %28 = load i32, i32* %7
  %29 = sitofp i32 %28 to double
  %30 = fsub double %27, %29
  store double %30, double* %11
  %31 = load double, double* %11
  %32 = load double, double* %11
  %33 = fmul double %31, %32
  %34 = call double @llvm.floor.f64(double %33)
  %35 = fptosi double %34 to i32
  %36 = icmp eq i32 %35, 0
  br i1 %36, label %37, label %39
37:
  %38 = load i32, i32* %9
  store i32 %38, i32* %4
  store i32 1, i32* %10
  br label %40
39:
  store i32 0, i32* %10
  br label %40
40:
  %42 = load i32, i32* %10
  switch i32 %42, label %47 [
    i32 0, label %43
  ]
43:
  br label %44
44:
  %45 = load i32, i32* %9
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %9
  br label %15
47:
  %49 = load i32, i32* %10
  switch i32 %49, label %51 [
    i32 2, label %50
  ]
50:
  store i32 -1, i32* %4
  store i32 1, i32* %10
  br label %51
51:
  %53 = load i32, i32* %4
  ret i32 %53
}
declare double @llvm.floor.f64(double)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca [100 x i32]
  %9 = alloca i32
  %10 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %11 = load i32, i32* %4
  %12 = icmp slt i32 %11, 3
  br i1 %12, label %13, label %14
13:
  store i32 1, i32* %3
  br label %57
14:
  %16 = load i8**, i8*** %5
  %17 = getelementptr inbounds i8*, i8** %16, i64 1
  %18 = load i8*, i8** %17
  %19 = call i32 @atoi(i8* %18)
  store i32 %19, i32* %6
  %21 = load i32, i32* %4
  %22 = sub nsw i32 %21, 2
  store i32 %22, i32* %7
  store i32 0, i32* %9
  br label %25
25:
  %26 = load i32, i32* %9
  %27 = load i32, i32* %7
  %28 = icmp slt i32 %26, %27
  br i1 %28, label %31, label %29
29:
  br label %45
31:
  %32 = load i8**, i8*** %5
  %33 = load i32, i32* %9
  %34 = add nsw i32 %33, 2
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8*, i8** %32, i64 %35
  %37 = load i8*, i8** %36
  %38 = call i32 @atoi(i8* %37)
  %39 = load i32, i32* %9
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [100 x i32], [100 x i32]* %8, i64 0, i64 %40
  store i32 %38, i32* %41
  br label %42
42:
  %43 = load i32, i32* %9
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %9
  br label %25
45:
  %47 = getelementptr inbounds [100 x i32], [100 x i32]* %8, i64 0, i64 0
  %48 = load i32, i32* %7
  %49 = load i32, i32* %6
  %50 = call i32 @QTj(i32* %47, i32 %48, i32 %49)
  store i32 %50, i32* %10
  %51 = load i32, i32* %10
  %52 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %51)
  store i32 0, i32* %3
  br label %57
57:
  %58 = load i32, i32* %3
  ret i32 %58
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
