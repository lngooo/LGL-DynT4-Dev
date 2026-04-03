define dso_local i32 @Y(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sge i32 %4, 0
  br i1 %5, label %6, label %7
6:
  br label %10
7:
  %8 = load i32, i32* %3
  %9 = sub nsw i32 0, %8
  store i32 %9, i32* %2
  br label %12
10:
  %11 = load i32, i32* %3
  store i32 %11, i32* %2
  br label %12
12:
  %13 = load i32, i32* %2
  ret i32 %13
}
