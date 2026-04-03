define dso_local i32 @hjyT8(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 0
  br i1 %5, label %6, label %13
6:
  %7 = load i32, i32* %3
  %8 = load i32, i32* %3
  %9 = mul nsw i32 %7, %8
  %10 = icmp sge i32 %9, 0
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %2
  br label %19
12:
  store i32 -1, i32* %2
  br label %19
13:
  %14 = load i32, i32* %3
  %15 = load i32, i32* %3
  %16 = sub nsw i32 %15, 1
  %17 = call i32 @hjyT8(i32 %16)
  %18 = add nsw i32 %14, %17
  store i32 %18, i32* %2
  br label %19
19:
  %20 = load i32, i32* %2
  ret i32 %20
}
