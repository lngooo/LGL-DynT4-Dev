define dso_local i32 @NewtonRoot(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i64
  %6 = alloca i32
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %42
10:
  %11 = load i32, i32* %3
  %12 = icmp eq i32 %11, 0
  br i1 %12, label %13, label %14
13:
  store i32 0, i32* %2
  br label %42
14:
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = shl i64 %17, 16
  store i64 %18, i64* %4
  store i64 65536, i64* %5
  store i32 0, i32* %6
  br label %21
21:
  %22 = load i32, i32* %6
  %23 = icmp slt i32 %22, 20
  br i1 %23, label %26, label %24
24:
  br label %36
26:
  %27 = load i64, i64* %5
  %28 = load i64, i64* %4
  %29 = load i64, i64* %5
  %30 = sdiv i64 %28, %29
  %31 = add nsw i64 %27, %30
  %32 = ashr i64 %31, 1
  store i64 %32, i64* %5
  br label %33
33:
  %34 = load i32, i32* %6
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %6
  br label %21
36:
  %37 = load i64, i64* %5
  %38 = ashr i64 %37, 8
  %39 = trunc i64 %38 to i32
  store i32 %39, i32* %2
  br label %42
42:
  %43 = load i32, i32* %2
  ret i32 %43
}
