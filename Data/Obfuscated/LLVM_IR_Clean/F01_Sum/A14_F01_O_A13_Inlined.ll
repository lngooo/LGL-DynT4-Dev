define dso_local i32 @dHa(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %5
5:
  %6 = load i32, i32* %2
  %7 = icmp sle i32 %6, 0
  br i1 %7, label %8, label %11
8:
  %9 = load i32, i32* %3
  ret i32 %9
11:
  %12 = load i32, i32* %2
  %13 = load i32, i32* %3
  %14 = add nsw i32 %13, %12
  store i32 %14, i32* %3
  %15 = load i32, i32* %2
  %16 = add nsw i32 %15, -1
  store i32 %16, i32* %2
  br label %5
}
