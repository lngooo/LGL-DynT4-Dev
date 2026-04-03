define dso_local i32 @b3(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = load i32, i32* %2
  %10 = icmp sle i32 %8, %9
  br i1 %10, label %13, label %11
11:
  br label %20
13:
  %14 = load i32, i32* %4
  %15 = load i32, i32* %3
  %16 = add nsw i32 %15, %14
  store i32 %16, i32* %3
  br label %17
17:
  %18 = load i32, i32* %4
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %4
  br label %7
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
