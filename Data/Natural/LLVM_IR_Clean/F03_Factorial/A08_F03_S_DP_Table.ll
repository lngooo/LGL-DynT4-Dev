define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64*
  %5 = alloca i32
  %6 = alloca i64
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i64 0, i64* %2
  br label %60
10:
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i64 1, i64* %2
  br label %60
14:
  %16 = load i32, i32* %3
  %17 = add nsw i32 %16, 1
  %18 = sext i32 %17 to i64
  %19 = mul i64 %18, 8
  %20 = call noalias i8* @malloc(i64 %19)
  store i64* %21, i64** %4
  %22 = load i64*, i64** %4
  %23 = getelementptr inbounds i64, i64* %22, i64 0
  store i64 1, i64* %23
  store i32 1, i32* %5
  br label %25
25:
  %26 = load i32, i32* %5
  %27 = load i32, i32* %3
  %28 = icmp sle i32 %26, %27
  br i1 %28, label %31, label %29
29:
  br label %48
31:
  %32 = load i64*, i64** %4
  %33 = load i32, i32* %5
  %34 = sub nsw i32 %33, 1
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i64, i64* %32, i64 %35
  %37 = load i64, i64* %36
  %38 = load i32, i32* %5
  %39 = sext i32 %38 to i64
  %40 = mul nsw i64 %37, %39
  %41 = load i64*, i64** %4
  %42 = load i32, i32* %5
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i64, i64* %41, i64 %43
  store i64 %40, i64* %44
  br label %45
45:
  %46 = load i32, i32* %5
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %5
  br label %25
48:
  %50 = load i64*, i64** %4
  %51 = load i32, i32* %3
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i64, i64* %50, i64 %52
  %54 = load i64, i64* %53
  store i64 %54, i64* %6
  %55 = load i64*, i64** %4
  call void @free(i8* %56)
  %57 = load i64, i64* %6
  store i64 %57, i64* %2
  br label %60
60:
  %61 = load i64, i64* %2
  ret i64 %61
}
declare noalias i8* @malloc(i64)
declare void @free(i8*)
