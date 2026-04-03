define dso_local i32 @BRNd(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = lshr i32 %4, 31
  switch i32 %5, label %9 [
    i32 1, label %6
  ]
6:
  %7 = load i32, i32* %3
  %8 = sub nsw i32 0, %7
  store i32 %8, i32* %2
  br label %11
9:
  %10 = load i32, i32* %3
  store i32 %10, i32* %2
  br label %11
11:
  %12 = load i32, i32* %2
  ret i32 %12
}
