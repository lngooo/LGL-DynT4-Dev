define dso_local i32 @l(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %13
7:
  %8 = load i32, i32* %3
  %9 = load i32, i32* %3
  %10 = sub nsw i32 %9, 1
  %11 = call i32 @l(i32 %10)
  %12 = add nsw i32 %8, %11
  store i32 %12, i32* %2
  br label %13
13:
  %14 = load i32, i32* %2
  ret i32 %14
}
