define dso_local i32 @VuO(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %18
8:
  %9 = load i32, i32* %4
  %10 = load i32, i32* %4
  %11 = mul nsw i32 %9, %10
  %12 = add nsw i32 %11, 1
  %13 = icmp sgt i32 %12, 0
  br i1 %13, label %14, label %17
14:
  %15 = load i32, i32* %4
  %16 = call i32 @abs(i32 %15)
  store i32 %16, i32* %3
  br label %27
17:
  br label %18
18:
  %19 = load i32, i32* %5
  %20 = call i32 @abs(i32 %19)
  %21 = load i32, i32* %4
  %22 = call i32 @abs(i32 %21)
  %23 = load i32, i32* %5
  %24 = call i32 @abs(i32 %23)
  %25 = srem i32 %22, %24
  %26 = call i32 @VuO(i32 %20, i32 %25)
  store i32 %26, i32* %3
  br label %27
27:
  %28 = load i32, i32* %3
  ret i32 %28
}
declare i32 @abs(i32)
