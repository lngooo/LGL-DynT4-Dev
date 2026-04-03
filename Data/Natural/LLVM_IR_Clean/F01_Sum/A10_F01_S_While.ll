define dso_local i32 @Sum(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = icmp sgt i32 %6, 0
  br i1 %7, label %8, label %14
8:
  %9 = load i32, i32* %2
  %10 = load i32, i32* %3
  %11 = add nsw i32 %10, %9
  store i32 %11, i32* %3
  %12 = load i32, i32* %2
  %13 = add nsw i32 %12, -1
  store i32 %13, i32* %2
  br label %5
14:
  %15 = load i32, i32* %3
  ret i32 %15
}
