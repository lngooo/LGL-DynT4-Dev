define dso_local i64 @ENHH(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i64 0, i64* %2
  br label %28
9:
  store i64 1, i64* %4
  store i32 1, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %3
  %15 = icmp sgt i32 %13, %14
  br i1 %15, label %16, label %17
16:
  br label %24
17:
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  %20 = load i64, i64* %4
  %21 = mul nsw i64 %20, %19
  store i64 %21, i64* %4
  %22 = load i32, i32* %5
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %5
  br label %12
24:
  %25 = load i64, i64* %4
  store i64 %25, i64* %2
  br label %28
28:
  %29 = load i64, i64* %2
  ret i64 %29
}
