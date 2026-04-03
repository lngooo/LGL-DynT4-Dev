define dso_local i32 @RZH(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  %6 = alloca i64
  store i32 %0, i32* %3
  %8 = load i32, i32* %3
  %9 = zext i32 %8 to i64
  store i64 %9, i64* %4
  %10 = load i64, i64* %4
  %11 = icmp eq i64 %10, 0
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %2
  store i32 1, i32* %5
  br label %23
13:
  %15 = load i64, i64* %4
  %16 = sub i64 %15, 1
  store i64 %16, i64* %6
  %17 = load i64, i64* %4
  %18 = load i64, i64* %6
  %19 = and i64 %17, %18
  %20 = icmp eq i64 %19, 0
  %21 = zext i1 %20 to i32
  store i32 %21, i32* %2
  store i32 1, i32* %5
  br label %23
23:
  %25 = load i32, i32* %2
  ret i32 %25
}
