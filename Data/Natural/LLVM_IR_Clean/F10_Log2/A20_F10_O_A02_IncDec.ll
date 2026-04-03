define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp slt i32 %5, 2
  br i1 %6, label %7, label %8
7:
  store i32 0, i32* %2
  br label %16
8:
  %10 = load i32, i32* %3
  %11 = ashr i32 %10, 1
  %12 = call i32 @Log2(i32 %11)
  store i32 %12, i32* %4
  %13 = load i32, i32* %4
  %14 = add nsw i32 %13, 1
  store i32 %14, i32* %4
  store i32 %14, i32* %2
  br label %16
16:
  %17 = load i32, i32* %2
  ret i32 %17
}
