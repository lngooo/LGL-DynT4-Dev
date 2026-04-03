define dso_local i32 @vhd(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  %5 = load i32, i32* %2
  store i32 %5, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %13
8:
  %9 = load i32, i32* %3
  %10 = xor i32 %9, -1
  store i32 %10, i32* %3
  %11 = load i32, i32* %3
  %12 = add nsw i32 %11, 1
  store i32 %12, i32* %3
  br label %13
13:
  %14 = load i32, i32* %3
  ret i32 %14
}
