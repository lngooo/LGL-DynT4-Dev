define dso_local i32 @x(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i64
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i64
  %8 = alloca i32
  store i32 %0, i32* %3
  %9 = load i32, i32* %3
  %10 = icmp slt i32 %9, 2
  br i1 %10, label %11, label %12
11:
  store i32 0, i32* %2
  br label %54
12:
  store i64 1, i64* %4
  store i32 1, i32* %5
  br label %15
15:
  %16 = load i32, i32* %5
  %17 = load i32, i32* %3
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %6
  br label %46
21:
  store i64 0, i64* %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %5
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %6
  br label %40
30:
  %31 = load i64, i64* %7
  %32 = load i64, i64* %4
  %33 = add nsw i64 %31, %32
  %34 = load i32, i32* %3
  %35 = sext i32 %34 to i64
  %36 = srem i64 %33, %35
  store i64 %36, i64* %7
  br label %37
37:
  %38 = load i32, i32* %8
  %39 = add nsw i32 %38, 1
  store i32 %39, i32* %8
  br label %24
40:
  %41 = load i64, i64* %7
  store i64 %41, i64* %4
  br label %43
43:
  %44 = load i32, i32* %5
  %45 = add nsw i32 %44, 1
  store i32 %45, i32* %5
  br label %15
46:
  %47 = load i64, i64* %4
  %48 = load i32, i32* %3
  %49 = sext i32 %48 to i64
  %50 = sub nsw i64 %49, 1
  %51 = icmp eq i64 %47, %50
  %52 = zext i1 %51 to i32
  store i32 %52, i32* %2
  store i32 1, i32* %6
  br label %54
54:
  %55 = load i32, i32* %2
  ret i32 %55
}
