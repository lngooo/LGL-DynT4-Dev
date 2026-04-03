define dso_local i32 @hN(i32 %0) {
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
  %10 = icmp sgt i32 %8, %9
  br i1 %10, label %11, label %12
11:
  br label %18
12:
  %13 = load i32, i32* %4
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, %13
  store i32 %15, i32* %3
  %16 = load i32, i32* %4
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %4
  br label %7
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
