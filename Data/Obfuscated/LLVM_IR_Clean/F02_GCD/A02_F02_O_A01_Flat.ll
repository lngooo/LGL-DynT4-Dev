define dso_local i32 @FsE7(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  store i32 0, i32* %6
  %9 = load i32, i32* %3
  %10 = call i32 @abs(i32 %9)
  store i32 %10, i32* %3
  %11 = load i32, i32* %4
  %12 = call i32 @abs(i32 %11)
  store i32 %12, i32* %4
  br label %13
13:
  %14 = load i32, i32* %6
  %15 = icmp ne i32 %14, 3
  br i1 %15, label %16, label %31
16:
  %17 = load i32, i32* %6
  switch i32 %17, label %30 [
    i32 0, label %18
    i32 1, label %23
    i32 2, label %28
  ]
18:
  %19 = load i32, i32* %4
  %20 = icmp ne i32 %19, 0
  %21 = zext i1 %20 to i64
  %22 = select i1 %20, i32 1, i32 3
  store i32 %22, i32* %6
  br label %30
23:
  %24 = load i32, i32* %4
  store i32 %24, i32* %5
  %25 = load i32, i32* %3
  %26 = load i32, i32* %4
  %27 = srem i32 %25, %26
  store i32 %27, i32* %4
  store i32 2, i32* %6
  br label %30
28:
  %29 = load i32, i32* %5
  store i32 %29, i32* %3
  store i32 0, i32* %6
  br label %30
30:
  br label %13
31:
  %32 = load i32, i32* %3
  ret i32 %32
}
declare i32 @abs(i32)
