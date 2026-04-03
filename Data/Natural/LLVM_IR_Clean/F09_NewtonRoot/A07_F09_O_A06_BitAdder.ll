define dso_local i64 @b_add(i64 %0, i64 %1) {
  %3 = alloca i64
  %4 = alloca i64
  %5 = alloca i64
  store i64 %0, i64* %3
  store i64 %1, i64* %4
  br label %6
6:
  %7 = load i64, i64* %4
  %8 = icmp ne i64 %7, 0
  br i1 %8, label %9, label %20
9:
  %11 = load i64, i64* %3
  %12 = load i64, i64* %4
  %13 = and i64 %11, %12
  store i64 %13, i64* %5
  %14 = load i64, i64* %3
  %15 = load i64, i64* %4
  %16 = xor i64 %14, %15
  store i64 %16, i64* %3
  %17 = load i64, i64* %5
  %18 = shl i64 %17, 1
  store i64 %18, i64* %4
  br label %6
20:
  %21 = load i64, i64* %3
  ret i64 %21
}
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
  store i64 %17, i64* %4
  br label %18
18:
  br label %19
19:
  %21 = load i64, i64* %4
  %22 = load i32, i32* %3
  %23 = sext i32 %22 to i64
  %24 = load i64, i64* %4
  %25 = sdiv i64 %23, %24
  %26 = call i64 @b_add(i64 %21, i64 %25)
  %27 = ashr i64 %26, 1
  store i64 %27, i64* %5
  %28 = load i64, i64* %5
  %29 = load i64, i64* %4
  %30 = icmp sge i64 %28, %29
  br i1 %30, label %31, label %32
31:
  store i32 3, i32* %6
  br label %34
32:
  %33 = load i64, i64* %5
  store i64 %33, i64* %4
  store i32 0, i32* %6
  br label %34
34:
  %36 = load i32, i32* %6
  switch i32 %36, label %44 [
    i32 0, label %37
    i32 3, label %38
  ]
37:
  br label %18
38:
  %39 = load i64, i64* %4
  %40 = trunc i64 %39 to i32
  store i32 %40, i32* %2
  store i32 1, i32* %6
  br label %42
42:
  %43 = load i32, i32* %2
  ret i32 %43
44:
  unreachable
}
