define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = sext i32 %4 to i64
  %6 = icmp eq i64 %5, -2147483648
  br i1 %6, label %7, label %8
7:
  store i32 2147483647, i32* %2
  br label %17
8:
  %9 = load i32, i32* %3
  %10 = icmp sge i32 %9, 0
  br i1 %10, label %11, label %13
11:
  %12 = load i32, i32* %3
  store i32 %12, i32* %2
  br label %17
13:
  %14 = load i32, i32* %3
  %15 = xor i32 %14, -1
  %16 = add i32 %15, 1
  store i32 %16, i32* %2
  br label %17
17:
  %18 = load i32, i32* %2
  ret i32 %18
}
