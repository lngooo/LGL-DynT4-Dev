define dso_local i32 @Log2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = ashr i32 %6, 1
  store i32 %7, i32* %2
  %8 = load i32, i32* %2
  %9 = icmp eq i32 %8, 0
  br i1 %9, label %10, label %11
10:
  br label %14
11:
  %12 = load i32, i32* %3
  %13 = add nsw i32 %12, 1
  store i32 %13, i32* %3
  br label %5
14:
  %15 = load i32, i32* %3
  ret i32 %15
}
