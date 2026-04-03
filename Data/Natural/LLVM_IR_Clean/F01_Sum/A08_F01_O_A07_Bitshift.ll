define dso_local i32 @Sum(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp slt i32 %5, 0
  br i1 %6, label %7, label %8
7:
  store i32 0, i32* %2
  br label %20
8:
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = load i32, i32* %3
  %13 = add nsw i32 %12, 1
  %14 = sext i32 %13 to i64
  %15 = mul nsw i64 %11, %14
  store i64 %15, i64* %4
  %16 = load i64, i64* %4
  %17 = ashr i64 %16, 1
  %18 = trunc i64 %17 to i32
  store i32 %18, i32* %2
  br label %20
20:
  %21 = load i32, i32* %2
  ret i32 %21
}
