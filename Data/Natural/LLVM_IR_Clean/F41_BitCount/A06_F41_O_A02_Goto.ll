define dso_local i32 @BitCount(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %9
8:
  br label %16
9:
  %10 = load i32, i32* %2
  %11 = sub i32 %10, 1
  %12 = load i32, i32* %2
  %13 = and i32 %12, %11
  store i32 %13, i32* %2
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, 1
  store i32 %15, i32* %3
  br label %5
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
