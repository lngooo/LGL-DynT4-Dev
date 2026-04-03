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
  br label %22
8:
  store i64 1, i64* %4
  br label %10
10:
  %11 = load i32, i32* %3
  %12 = icmp sgt i32 %11, 1
  br i1 %12, label %13, label %19
13:
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, -1
  store i32 %15, i32* %3
  %16 = sext i32 %14 to i64
  %17 = load i64, i64* %4
  %18 = mul nsw i64 %17, %16
  store i64 %18, i64* %4
  br label %10
19:
  %20 = load i64, i64* %4
  store i64 %20, i64* %2
  br label %22
22:
  %23 = load i64, i64* %2
  ret i64 %23
}
