define dso_local i32 @tIlw1(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  %5 = load i32, i32* %2
  %6 = icmp eq i32 %5, 0
  br i1 %6, label %7, label %8
7:
  br label %23
8:
  br label %9
9:
  %10 = load i32, i32* %2
  %11 = sub i32 %10, 1
  %12 = load i32, i32* %2
  %13 = and i32 %12, %11
  store i32 %13, i32* %2
  %14 = load i32, i32* %3
  %15 = add nsw i32 %14, 1
  store i32 %15, i32* %3
  %16 = load i32, i32* %2
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %19
18:
  br label %9
19:
  br label %23
20:
  %21 = load i32, i32* %3
  %22 = add nsw i32 %21, -1
  store i32 %22, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
