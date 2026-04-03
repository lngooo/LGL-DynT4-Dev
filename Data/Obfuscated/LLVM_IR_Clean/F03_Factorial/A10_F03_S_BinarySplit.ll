define dso_local i64 @ip1(i32 %0, i32 %1) {
  %3 = alloca i64
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %7 = load i32, i32* %4
  %8 = load i32, i32* %5
  %9 = icmp sgt i32 %7, %8
  br i1 %9, label %10, label %11
10:
  store i64 1, i64* %3
  br label %35
11:
  %12 = load i32, i32* %4
  %13 = load i32, i32* %5
  %14 = icmp eq i32 %12, %13
  br i1 %14, label %15, label %18
15:
  %16 = load i32, i32* %4
  %17 = sext i32 %16 to i64
  store i64 %17, i64* %3
  br label %35
18:
  %20 = load i32, i32* %4
  %21 = load i32, i32* %5
  %22 = load i32, i32* %4
  %23 = sub nsw i32 %21, %22
  %24 = sdiv i32 %23, 2
  %25 = add nsw i32 %20, %24
  store i32 %25, i32* %6
  %26 = load i32, i32* %4
  %27 = load i32, i32* %6
  %28 = call i64 @ip1(i32 %26, i32 %27)
  %29 = load i32, i32* %6
  %30 = add nsw i32 %29, 1
  %31 = load i32, i32* %5
  %32 = call i64 @ip1(i32 %30, i32 %31)
  %33 = mul nsw i64 %28, %32
  store i64 %33, i64* %3
  br label %35
35:
  %36 = load i64, i64* %3
  ret i64 %36
}
define dso_local i64 @e(i32 %0) {
  %2 = alloca i64
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp slt i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i64 0, i64* %2
  br label %14
7:
  %8 = load i32, i32* %3
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  store i64 1, i64* %2
  br label %14
11:
  %12 = load i32, i32* %3
  %13 = call i64 @ip1(i32 1, i32 %12)
  store i64 %13, i64* %2
  br label %14
14:
  %15 = load i64, i64* %2
  ret i64 %15
}
