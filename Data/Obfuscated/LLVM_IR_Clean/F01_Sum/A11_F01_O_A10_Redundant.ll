define dso_local i32 @Il0(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 42, i32* %4
  br label %7
7:
  %8 = load i32, i32* %2
  %9 = icmp sgt i32 %8, 0
  br i1 %9, label %10, label %19
10:
  %11 = load i32, i32* %4
  %12 = mul nsw i32 %11, 2
  %13 = sdiv i32 %12, 2
  store i32 %13, i32* %4
  %14 = load i32, i32* %2
  %15 = load i32, i32* %3
  %16 = add nsw i32 %15, %14
  store i32 %16, i32* %3
  %17 = load i32, i32* %2
  %18 = sub nsw i32 %17, 1
  store i32 %18, i32* %2
  br label %7
19:
  %20 = load i32, i32* %3
  ret i32 %20
}
