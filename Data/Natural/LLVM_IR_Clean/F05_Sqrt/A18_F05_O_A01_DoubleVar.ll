define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %39
10:
  %12 = load i32, i32* %3
  %13 = sext i32 %12 to i64
  store i64 %13, i64* %4
  %15 = load i64, i64* %4
  %16 = add nsw i64 %15, 1
  %17 = ashr i64 %16, 1
  store i64 %17, i64* %5
  br label %18
18:
  %19 = load i64, i64* %5
  %20 = load i64, i64* %4
  %21 = icmp slt i64 %19, %20
  br i1 %21, label %22, label %34
22:
  %23 = load i64, i64* %5
  store i64 %23, i64* %4
  %25 = load i64, i64* %4
  %26 = load i32, i32* %3
  %27 = sext i32 %26 to i64
  %28 = load i64, i64* %4
  %29 = sdiv i64 %27, %28
  %30 = add nsw i64 %25, %29
  %31 = sdiv i64 %30, 2
  store i64 %31, i64* %6
  %32 = load i64, i64* %6
  store i64 %32, i64* %5
  br label %18
34:
  %35 = load i64, i64* %4
  %36 = trunc i64 %35 to i32
  store i32 %36, i32* %2
  br label %39
39:
  %40 = load i32, i32* %2
  ret i32 %40
}
