define dso_local i64 @t(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  store i32 %0, i32* %3
  store i64 1, i64* %4
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i64 0, i64* %2
  store i32 1, i32* %5
  br label %24
10:
  br label %11
11:
  %12 = load i32, i32* %3
  %13 = icmp sgt i32 %12, 1
  br i1 %13, label %14, label %22
14:
  br label %15
15:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = load i64, i64* %4
  %19 = mul nsw i64 %18, %17
  store i64 %19, i64* %4
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, -1
  store i32 %21, i32* %3
  br label %11
22:
  %23 = load i64, i64* %4
  store i64 %23, i64* %2
  store i32 1, i32* %5
  br label %24
24:
  %26 = load i64, i64* %2
  ret i64 %26
}
