@__const.U.YI = constant [3 x i64] [i64 171, i64 171, i64 168]
@.str = constant [6 x i8] c"%lld\0A\00"
define dso_local i64 @U(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca [3 x i64]
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp slt i32 %5, 0
  br i1 %6, label %10, label %7
7:
  %8 = load i32, i32* %3
  %9 = icmp sgt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i64 0, i64* %2
  br label %20
11:
  %14 = load i32, i32* %3
  %15 = sext i32 %14 to i64
  %16 = getelementptr inbounds [3 x i64], [3 x i64]* %4, i64 0, i64 %15
  %17 = load i64, i64* %16
  %18 = xor i64 %17, 170
  store i64 %18, i64* %2
  br label %20
20:
  %21 = load i64, i64* %2
  ret i64 %21
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i64
  %8 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %9 = load i32, i32* %4
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %47
12:
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 1
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  store i32 %17, i32* %6
  %18 = load i32, i32* %6
  %19 = icmp sgt i32 %18, 2
  br i1 %19, label %20, label %41
20:
  store i64 1, i64* %7
  store i32 1, i32* %8
  br label %23
23:
  %24 = load i32, i32* %8
  %25 = load i32, i32* %6
  %26 = icmp sle i32 %24, %25
  br i1 %26, label %29, label %27
27:
  br label %37
29:
  %30 = load i32, i32* %8
  %31 = sext i32 %30 to i64
  %32 = load i64, i64* %7
  %33 = mul nsw i64 %32, %31
  store i64 %33, i64* %7
  br label %34
34:
  %35 = load i32, i32* %8
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %8
  br label %23
37:
  %38 = load i64, i64* %7
  %39 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i64 %38)
  br label %45
41:
  %42 = load i32, i32* %6
  %43 = call i64 @U(i32 %42)
  %44 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str, i64 0, i64 0), i64 %43)
  br label %45
45:
  store i32 0, i32* %3
  br label %47
47:
  %48 = load i32, i32* %3
  ret i32 %48
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
