define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = icmp sgt i32 %6, 1
  br i1 %7, label %8, label %15
8:
  %9 = load i32, i32* %2
  %10 = and i32 %9, -1
  store i32 %10, i32* %2
  %11 = load i32, i32* %2
  %12 = ashr i32 %11, 1
  store i32 %12, i32* %2
  %13 = load i32, i32* %3
  %14 = add nsw i32 %13, 1
  store i32 %14, i32* %3
  br label %5
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
