define dso_local i32 @IsPowerOfTwo(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp eq i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %19
7:
  br label %8
8:
  %9 = load i32, i32* %3
  %10 = urem i32 %9, 2
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %15
12:
  %13 = load i32, i32* %3
  %14 = udiv i32 %13, 2
  store i32 %14, i32* %3
  br label %8
15:
  %16 = load i32, i32* %3
  %17 = icmp eq i32 %16, 1
  %18 = zext i1 %17 to i32
  store i32 %18, i32* %2
  br label %19
19:
  %20 = load i32, i32* %2
  ret i32 %20
}
