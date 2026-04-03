define dso_local i32 @check(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = load i32, i32* %5
  %8 = mul nsw i32 %6, %7
  %9 = load i32, i32* %4
  %10 = icmp sgt i32 %8, %9
  br i1 %10, label %11, label %12
11:
  store i32 1, i32* %3
  br label %23
12:
  %13 = load i32, i32* %4
  %14 = load i32, i32* %5
  %15 = srem i32 %13, %14
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  store i32 0, i32* %3
  br label %23
18:
  %19 = load i32, i32* %4
  %20 = load i32, i32* %5
  %21 = add nsw i32 %20, 1
  %22 = call i32 @check(i32 %19, i32 %21)
  store i32 %22, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sle i32 %4, 1
  br i1 %5, label %6, label %7
6:
  store i32 0, i32* %2
  br label %10
7:
  %8 = load i32, i32* %3
  %9 = call i32 @check(i32 %8, i32 2)
  store i32 %9, i32* %2
  br label %10
10:
  %11 = load i32, i32* %2
  ret i32 %11
}
