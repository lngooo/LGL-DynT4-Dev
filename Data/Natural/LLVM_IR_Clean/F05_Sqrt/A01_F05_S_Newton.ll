define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %40
9:
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %3
  store i32 %13, i32* %2
  br label %40
14:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  store i64 %17, i64* %4
  %19 = load i64, i64* %4
  %20 = add nsw i64 %19, 1
  %21 = sdiv i64 %20, 2
  store i64 %21, i64* %5
  br label %22
22:
  %23 = load i64, i64* %5
  %24 = load i64, i64* %4
  %25 = icmp slt i64 %23, %24
  br i1 %25, label %26, label %35
26:
  %27 = load i64, i64* %5
  store i64 %27, i64* %4
  %28 = load i64, i64* %4
  %29 = load i32, i32* %3
  %30 = sext i32 %29 to i64
  %31 = load i64, i64* %4
  %32 = sdiv i64 %30, %31
  %33 = add nsw i64 %28, %32
  %34 = sdiv i64 %33, 2
  store i64 %34, i64* %5
  br label %22
35:
  %36 = load i64, i64* %4
  %37 = trunc i64 %36 to i32
  store i32 %37, i32* %2
  br label %40
40:
  %41 = load i32, i32* %2
  ret i32 %41
}
