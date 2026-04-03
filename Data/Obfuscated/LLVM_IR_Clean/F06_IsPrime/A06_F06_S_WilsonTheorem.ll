define dso_local i32 @lLkm(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp sle i32 %6, 1
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %41
9:
  %10 = load i32, i32* %3
  %11 = icmp eq i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 1, i32* %2
  br label %41
13:
  store i64 1, i64* %4
  store i32 2, i32* %5
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = load i32, i32* %3
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %22, label %20
20:
  br label %33
22:
  %23 = load i64, i64* %4
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = mul nsw i64 %23, %25
  %27 = load i32, i32* %3
  %28 = sext i32 %27 to i64
  %29 = srem i64 %26, %28
  store i64 %29, i64* %4
  br label %30
30:
  %31 = load i32, i32* %5
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %5
  br label %16
33:
  %34 = load i64, i64* %4
  %35 = load i32, i32* %3
  %36 = sub nsw i32 %35, 1
  %37 = sext i32 %36 to i64
  %38 = icmp eq i64 %34, %37
  %39 = zext i1 %38 to i32
  store i32 %39, i32* %2
  br label %41
41:
  %42 = load i32, i32* %2
  ret i32 %42
}
