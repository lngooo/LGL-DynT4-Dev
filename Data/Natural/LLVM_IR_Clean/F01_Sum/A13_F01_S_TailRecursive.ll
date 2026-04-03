define dso_local i32 @tail_sum(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %4
  %7 = icmp sle i32 %6, 0
  br i1 %7, label %8, label %10
8:
  %9 = load i32, i32* %5
  store i32 %9, i32* %3
  br label %17
10:
  %11 = load i32, i32* %4
  %12 = sub nsw i32 %11, 1
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = add nsw i32 %13, %14
  %16 = call i32 @tail_sum(i32 %12, i32 %15)
  store i32 %16, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
define dso_local i32 @Sum(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = call i32 @tail_sum(i32 %3, i32 0)
  ret i32 %4
}
