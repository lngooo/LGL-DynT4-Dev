define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 1
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %12
7:
  %8 = load i32, i32* %3
  %9 = sdiv i32 %8, 2
  %10 = call i32 @Log2(i32 %9)
  %11 = add nsw i32 1, %10
  store i32 %11, i32* %2
  br label %12
12:
  %13 = load i32, i32* %2
  ret i32 %13
}
