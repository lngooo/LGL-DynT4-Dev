define dso_local i32 @LGYM(i32 %0) {
  %2 = alloca i32
  %3 = alloca i64
  %4 = alloca i32
  store i32 %0, i32* %2
  %6 = load i32, i32* %2
  %7 = zext i32 %6 to i64
  store i64 %7, i64* %3
  store i32 0, i32* %4
  br label %9
9:
  %10 = load i64, i64* %3
  %11 = icmp ugt i64 %10, 0
  br i1 %11, label %12, label %22
12:
  %13 = load i64, i64* %3
  %14 = urem i64 %13, 2
  %15 = icmp eq i64 %14, 1
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %4
  br label %19
19:
  %20 = load i64, i64* %3
  %21 = lshr i64 %20, 1
  store i64 %21, i64* %3
  br label %9
22:
  %23 = load i32, i32* %4
  ret i32 %23
}
