define dso_local i32 @kT6(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = sub nsw i32 0, %3
  ret i32 %4
}
define dso_local i32 @agZL(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp slt i32 %4, 0
  br i1 %5, label %6, label %9
6:
  %7 = load i32, i32* %3
  %8 = call i32 @kT6(i32 %7)
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
