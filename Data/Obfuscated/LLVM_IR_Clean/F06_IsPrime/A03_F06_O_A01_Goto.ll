define dso_local i32 @S(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  %5 = load i32, i32* %3
  %6 = icmp slt i32 %5, 2
  br i1 %6, label %7, label %8
7:
  br label %35
8:
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 4
  br i1 %10, label %11, label %12
11:
  br label %34
12:
  %13 = load i32, i32* %3
  %14 = srem i32 %13, 2
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  br label %35
17:
  store i32 3, i32* %4
  br label %18
18:
  %19 = load i32, i32* %4
  %20 = load i32, i32* %4
  %21 = mul nsw i32 %19, %20
  %22 = load i32, i32* %3
  %23 = icmp sgt i32 %21, %22
  br i1 %23, label %24, label %25
24:
  br label %34
25:
  %26 = load i32, i32* %3
  %27 = load i32, i32* %4
  %28 = srem i32 %26, %27
  %29 = icmp eq i32 %28, 0
  br i1 %29, label %30, label %31
30:
  br label %35
31:
  %32 = load i32, i32* %4
  %33 = add nsw i32 %32, 2
  store i32 %33, i32* %4
  br label %18
34:
  store i32 1, i32* %2
  br label %36
35:
  store i32 0, i32* %2
  br label %36
36:
  %37 = load i32, i32* %2
  ret i32 %37
}
