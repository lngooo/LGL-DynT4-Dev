define dso_local i32 @shift(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = lshr i32 %3, 1
  ret i32 %4
}
define dso_local i32 @Sqrt(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32 (i32)*
  store i32 %0, i32* %3
  %7 = load i32, i32* %3
  %8 = icmp slt i32 %7, 0
  br i1 %8, label %9, label %10
9:
  store i32 -1, i32* %2
  br label %54
10:
  store i32 0, i32* %4
  store i32 1073741824, i32* %5
  store i32 (i32)* @shift, i32 (i32)** %6
  br label %14
14:
  %15 = load i32, i32* %5
  %16 = load i32, i32* %3
  %17 = icmp ugt i32 %15, %16
  br i1 %17, label %18, label %21
18:
  %19 = load i32, i32* %5
  %20 = lshr i32 %19, 2
  store i32 %20, i32* %5
  br label %14
21:
  br label %22
22:
  %23 = load i32, i32* %5
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %25, label %49
25:
  %26 = load i32, i32* %3
  %27 = load i32, i32* %4
  %28 = load i32, i32* %5
  %29 = add i32 %27, %28
  %30 = icmp uge i32 %26, %29
  br i1 %30, label %31, label %42
31:
  %32 = load i32, i32* %4
  %33 = load i32, i32* %5
  %34 = add i32 %32, %33
  %35 = load i32, i32* %3
  %36 = sub i32 %35, %34
  store i32 %36, i32* %3
  %37 = load i32 (i32)*, i32 (i32)** %6
  %38 = load i32, i32* %4
  %39 = call i32 %37(i32 %38)
  %40 = load i32, i32* %5
  %41 = add i32 %39, %40
  store i32 %41, i32* %4
  br label %46
42:
  %43 = load i32 (i32)*, i32 (i32)** %6
  %44 = load i32, i32* %4
  %45 = call i32 %43(i32 %44)
  store i32 %45, i32* %4
  br label %46
46:
  %47 = load i32, i32* %5
  %48 = lshr i32 %47, 2
  store i32 %48, i32* %5
  br label %22
49:
  %50 = load i32, i32* %4
  store i32 %50, i32* %2
  br label %54
54:
  %55 = load i32, i32* %2
  ret i32 %55
}
