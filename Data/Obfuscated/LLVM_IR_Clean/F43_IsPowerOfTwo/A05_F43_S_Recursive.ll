define dso_local i32 @J(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp eq i32 %4, 0
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %20
7:
  %8 = load i32, i32* %3
  %9 = icmp eq i32 %8, 1
  br i1 %9, label %10, label %11
10:
  store i32 1, i32* %2
  br label %20
11:
  %12 = load i32, i32* %3
  %13 = urem i32 %12, 2
  %14 = icmp ne i32 %13, 0
  br i1 %14, label %15, label %16
15:
  store i32 0, i32* %2
  br label %20
16:
  %17 = load i32, i32* %3
  %18 = udiv i32 %17, 2
  %19 = call i32 @J(i32 %18)
  store i32 %19, i32* %2
  br label %20
20:
  %21 = load i32, i32* %2
  ret i32 %21
}
