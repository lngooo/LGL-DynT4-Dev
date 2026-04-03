define dso_local i32 @VSy(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %2
  store i32 0, i32* %3
  br label %7
7:
  %8 = load i32, i32* %2
  %9 = icmp sgt i32 %8, 1
  br i1 %9, label %10, label %32
10:
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = icmp slt i32 %14, 1
  br i1 %15, label %18, label %16
16:
  br label %24
18:
  %19 = load i32, i32* %4
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %4
  br label %21
21:
  %22 = load i32, i32* %5
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %5
  br label %13
24:
  %25 = load i32, i32* %4
  %26 = load i32, i32* %3
  %27 = add nsw i32 %26, %25
  store i32 %27, i32* %3
  br label %29
29:
  %30 = load i32, i32* %2
  %31 = ashr i32 %30, 1
  store i32 %31, i32* %2
  br label %7
32:
  %33 = load i32, i32* %3
  ret i32 %33
}
