define dso_local i32 @BitCount(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = icmp ne i32 %6, 0
  br i1 %7, label %8, label %15
8:
  %9 = load i32, i32* %2
  %10 = sub i32 %9, 1
  %11 = load i32, i32* %2
  %12 = and i32 %11, %10
  store i32 %12, i32* %2
  %13 = load i32, i32* %3
  %14 = add nsw i32 %13, 1
  store i32 %14, i32* %3
  br label %5
15:
  %16 = load i32, i32* %3
  ret i32 %16
}
