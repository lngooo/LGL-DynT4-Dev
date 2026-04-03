define dso_local i64 @xgH(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i64
  store i32 %0, i32* %3
  store i64 0, i64* %4
  store i64 1, i64* %5
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i64 0, i64* %2
  store i32 1, i32* %6
  br label %39
14:
  %15 = load i32, i32* %3
  %16 = icmp eq i32 %15, 1
  br i1 %16, label %17, label %18
17:
  store i64 1, i64* %2
  store i32 1, i32* %6
  br label %39
18:
  %20 = load i32, i32* %3
  store i32 %20, i32* %7
  br label %21
21:
  %22 = load i32, i32* %7
  %23 = icmp sge i32 %22, 2
  br i1 %23, label %26, label %24
24:
  store i32 2, i32* %6
  br label %37
26:
  %28 = load i64, i64* %4
  %29 = load i64, i64* %5
  %30 = add nsw i64 %28, %29
  store i64 %30, i64* %8
  %31 = load i64, i64* %5
  store i64 %31, i64* %4
  %32 = load i64, i64* %8
  store i64 %32, i64* %5
  br label %34
34:
  %35 = load i32, i32* %7
  %36 = add nsw i32 %35, -1
  store i32 %36, i32* %7
  br label %21
37:
  %38 = load i64, i64* %5
  store i64 %38, i64* %2
  store i32 1, i32* %6
  br label %39
39:
  %42 = load i64, i64* %2
  ret i64 %42
}
