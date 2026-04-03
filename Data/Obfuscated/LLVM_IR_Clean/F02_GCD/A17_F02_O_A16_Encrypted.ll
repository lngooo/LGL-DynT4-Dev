define dso_local i32 @akh(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  store i32 85, i32* %6
  %10 = load i32, i32* %4
  %11 = call i32 @abs(i32 %10)
  store i32 %11, i32* %4
  %12 = load i32, i32* %5
  %13 = call i32 @abs(i32 %12)
  store i32 %13, i32* %5
  %14 = load i32, i32* %4
  %15 = icmp eq i32 %14, 1
  br i1 %15, label %19, label %16
16:
  %17 = load i32, i32* %5
  %18 = icmp eq i32 %17, 1
  br i1 %18, label %19, label %24
19:
  %20 = load i32, i32* %6
  %21 = xor i32 1, %20
  %22 = load i32, i32* %6
  %23 = xor i32 %21, %22
  store i32 %23, i32* %3
  store i32 1, i32* %7
  br label %38
24:
  br label %25
25:
  %26 = load i32, i32* %5
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %28, label %36
28:
  %30 = load i32, i32* %5
  store i32 %30, i32* %8
  %31 = load i32, i32* %4
  %32 = load i32, i32* %5
  %33 = srem i32 %31, %32
  store i32 %33, i32* %5
  %34 = load i32, i32* %8
  store i32 %34, i32* %4
  br label %25
36:
  %37 = load i32, i32* %4
  store i32 %37, i32* %3
  store i32 1, i32* %7
  br label %38
38:
  %40 = load i32, i32* %3
  ret i32 %40
}
declare i32 @abs(i32)
