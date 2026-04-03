define dso_local i32 @Power(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i32, i32* %4
  %11 = load i32, i32* %4
  %12 = load i32, i32* %5
  %13 = sub nsw i32 %12, 1
  %14 = call i32 @Power(i32 %11, i32 %13)
  %15 = mul nsw i32 %10, %14
  store i32 %15, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
