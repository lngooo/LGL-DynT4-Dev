define dso_local i32 @tR2(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = ashr i32 %6, 1
  store i32 %7, i32* %2
  %8 = icmp ne i32 %7, 0
  br i1 %8, label %9, label %12
9:
  %10 = load i32, i32* %3
  %11 = add nsw i32 %10, 1
  store i32 %11, i32* %3
  br label %5
12:
  %13 = load i32, i32* %3
  ret i32 %13
}
