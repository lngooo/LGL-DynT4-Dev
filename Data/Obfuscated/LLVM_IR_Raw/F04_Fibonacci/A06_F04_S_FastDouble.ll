@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [5 x i8] c"%ld\0A\00"
define dso_local i64 @yGx(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  %7 = alloca i64
  %8 = alloca i64
  %9 = alloca i64
  store i32 %0, i32* %3
  %10 = load i32, i32* %3
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %13
12:
  store i64 0, i64* %2
  br label %66
13:
  store i64 0, i64* %4
  store i64 1, i64* %5
  %17 = load i32, i32* %3
  %18 = call i32 @llvm.ctlz.i32(i32 %17, i1 true)
  %19 = sub nsw i32 31, %18
  store i32 %19, i32* %6
  br label %20
20:
  %21 = load i32, i32* %6
  %22 = icmp sge i32 %21, 0
  br i1 %22, label %25, label %23
23:
  br label %62
25:
  %27 = load i64, i64* %4
  %28 = load i64, i64* %5
  %29 = mul nsw i64 2, %28
  %30 = load i64, i64* %4
  %31 = sub nsw i64 %29, %30
  %32 = mul nsw i64 %27, %31
  store i64 %32, i64* %7
  %34 = load i64, i64* %4
  %35 = load i64, i64* %4
  %36 = mul nsw i64 %34, %35
  %37 = load i64, i64* %5
  %38 = load i64, i64* %5
  %39 = mul nsw i64 %37, %38
  %40 = add nsw i64 %36, %39
  store i64 %40, i64* %8
  %41 = load i64, i64* %7
  store i64 %41, i64* %4
  %42 = load i64, i64* %8
  store i64 %42, i64* %5
  %43 = load i32, i32* %3
  %44 = load i32, i32* %6
  %45 = ashr i32 %43, %44
  %46 = and i32 %45, 1
  %47 = icmp ne i32 %46, 0
  br i1 %47, label %48, label %56
48:
  %50 = load i64, i64* %4
  %51 = load i64, i64* %5
  %52 = add nsw i64 %50, %51
  store i64 %52, i64* %9
  %53 = load i64, i64* %5
  store i64 %53, i64* %4
  %54 = load i64, i64* %9
  store i64 %54, i64* %5
  br label %56
56:
  br label %59
59:
  %60 = load i32, i32* %6
  %61 = add nsw i32 %60, -1
  store i32 %61, i32* %6
  br label %20
62:
  %63 = load i64, i64* %4
  store i64 %63, i64* %2
  br label %66
66:
  %67 = load i64, i64* %2
  ret i64 %67
}
declare i32 @llvm.ctlz.i32(i32, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i64
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %31
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  store i32 %17, i32* %6
  %18 = load i32, i32* %6
  %19 = icmp slt i32 %18, 0
  br i1 %19, label %20, label %22
20:
  %21 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %29
22:
  %24 = load i32, i32* %6
  %25 = call i64 @yGx(i32 %24)
  store i64 %25, i64* %8
  %26 = load i64, i64* %8
  %27 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.1, i64 0, i64 0), i64 %26)
  store i32 0, i32* %3
  store i32 1, i32* %7
  br label %29
29:
  br label %31
31:
  %32 = load i32, i32* %3
  ret i32 %32
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
