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
  br label %41
9:
  %10 = load i32, i32* %3
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %3
  store i32 %13, i32* %2
  br label %41
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
  br i1 %25, label %27, label %26
26:
  br label %36
27:
  %28 = load i64, i64* %5
  store i64 %28, i64* %4
  %29 = load i64, i64* %4
  %30 = load i32, i32* %3
  %31 = sext i32 %30 to i64
  %32 = load i64, i64* %4
  %33 = sdiv i64 %31, %32
  %34 = add nsw i64 %29, %33
  %35 = sdiv i64 %34, 2
  store i64 %35, i64* %5
  br label %22
36:
  %37 = load i64, i64* %4
  %38 = trunc i64 %37 to i32
  store i32 %38, i32* %2
  br label %41
41:
  %42 = load i32, i32* %2
  ret i32 %42
}
