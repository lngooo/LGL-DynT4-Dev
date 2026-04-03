define dso_local i64 @Factorial(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp slt i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i64 0, i64* %2
  br label %24
8:
  store i64 1, i64* %4
  br label %10
10:
  br label %11
11:
  %12 = load i32, i32* %3
  %13 = icmp sle i32 %12, 0
  br i1 %13, label %14, label %17
14:
  %15 = load i64, i64* %4
  store i64 %15, i64* %2
  br label %24
17:
  %18 = load i32, i32* %3
  %19 = sext i32 %18 to i64
  %20 = load i64, i64* %4
  %21 = mul nsw i64 %20, %19
  store i64 %21, i64* %4
  %22 = load i32, i32* %3
  %23 = add nsw i32 %22, -1
  store i32 %23, i32* %3
  br label %10
24:
  %25 = load i64, i64* %2
  ret i64 %25
}
