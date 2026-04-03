define dso_local i64 @Fibonacci(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i64
  %7 = alloca i32
  store i32 %0, i32* %3
  store i64 0, i64* %4
  store i64 1, i64* %5
  br label %11
11:
  %12 = load i32, i32* %3
  %13 = icmp eq i32 %12, 0
  br i1 %13, label %14, label %16
14:
  %15 = load i64, i64* %4
  store i64 %15, i64* %2
  store i32 1, i32* %7
  br label %29
16:
  %17 = load i32, i32* %3
  %18 = icmp eq i32 %17, 1
  br i1 %18, label %19, label %21
19:
  %20 = load i64, i64* %5
  store i64 %20, i64* %2
  store i32 1, i32* %7
  br label %29
21:
  %22 = load i64, i64* %4
  %23 = load i64, i64* %5
  %24 = add nsw i64 %22, %23
  store i64 %24, i64* %6
  %25 = load i64, i64* %5
  store i64 %25, i64* %4
  %26 = load i64, i64* %6
  store i64 %26, i64* %5
  %27 = load i32, i32* %3
  %28 = add nsw i32 %27, -1
  store i32 %28, i32* %3
  br label %11
29:
  %33 = load i64, i64* %2
  ret i64 %33
}
