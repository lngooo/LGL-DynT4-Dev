define dso_local i32 @pk(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 0
  br i1 %7, label %8, label %9
8:
  store i32 -1, i32* %2
  br label %49
9:
  store i32 0, i32* %4
  store i32 1073741824, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %3
  %15 = icmp ugt i32 %13, %14
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %5
  %18 = lshr i32 %17, 2
  store i32 %18, i32* %5
  br label %12
19:
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %23, label %45
23:
  %24 = load i32, i32* %3
  %25 = load i32, i32* %4
  %26 = load i32, i32* %5
  %27 = add i32 %25, %26
  %28 = icmp uge i32 %24, %27
  br i1 %28, label %29, label %39
29:
  %30 = load i32, i32* %4
  %31 = load i32, i32* %5
  %32 = add i32 %30, %31
  %33 = load i32, i32* %3
  %34 = sub i32 %33, %32
  store i32 %34, i32* %3
  %35 = load i32, i32* %4
  %36 = lshr i32 %35, 1
  %37 = load i32, i32* %5
  %38 = add i32 %36, %37
  store i32 %38, i32* %4
  br label %42
39:
  %40 = load i32, i32* %4
  %41 = lshr i32 %40, 1
  store i32 %41, i32* %4
  br label %42
42:
  %43 = load i32, i32* %5
  %44 = lshr i32 %43, 2
  store i32 %44, i32* %5
  br label %20
45:
  %46 = load i32, i32* %4
  store i32 %46, i32* %2
  br label %49
49:
  %50 = load i32, i32* %2
  ret i32 %50
}
