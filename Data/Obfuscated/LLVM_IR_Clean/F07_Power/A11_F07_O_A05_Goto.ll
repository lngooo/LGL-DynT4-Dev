define dso_local i32 @ksUQ(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp sle i32 %8, 0
  br i1 %9, label %10, label %11
10:
  br label %17
11:
  %12 = load i32, i32* %3
  %13 = load i32, i32* %5
  %14 = mul nsw i32 %13, %12
  store i32 %14, i32* %5
  %15 = load i32, i32* %4
  %16 = add nsw i32 %15, -1
  store i32 %16, i32* %4
  br label %7
17:
  %18 = load i32, i32* %5
  ret i32 %18
}
