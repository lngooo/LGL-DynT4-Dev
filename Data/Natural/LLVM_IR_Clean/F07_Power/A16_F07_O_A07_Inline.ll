define dso_local i32 @Power(i32 %0, i32 %1) {
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
  br i1 %9, label %10, label %13
10:
  %11 = load i32, i32* %5
  ret i32 %11
13:
  %14 = load i32, i32* %3
  %15 = load i32, i32* %5
  %16 = mul nsw i32 %15, %14
  store i32 %16, i32* %5
  %17 = load i32, i32* %4
  %18 = add nsw i32 %17, -1
  store i32 %18, i32* %4
  br label %7
}
