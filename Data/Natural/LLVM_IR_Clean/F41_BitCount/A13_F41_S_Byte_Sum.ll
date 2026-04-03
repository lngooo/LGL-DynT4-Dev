define dso_local i32 @countByte(i8 zeroext %0) {
  %2 = alloca i8
  %3 = alloca i32
  %4 = alloca i32
  store i8 %0, i8* %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %7
7:
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 8
  br i1 %9, label %12, label %10
10:
  br label %26
12:
  %13 = load i8, i8* %2
  %14 = zext i8 %13 to i32
  %15 = load i32, i32* %4
  %16 = ashr i32 %14, %15
  %17 = and i32 %16, 1
  %18 = icmp ne i32 %17, 0
  br i1 %18, label %19, label %22
19:
  %20 = load i32, i32* %3
  %21 = add nsw i32 %20, 1
  store i32 %21, i32* %3
  br label %22
22:
  br label %23
23:
  %24 = load i32, i32* %4
  %25 = add nsw i32 %24, 1
  store i32 %25, i32* %4
  br label %7
26:
  %27 = load i32, i32* %3
  ret i32 %27
}
define dso_local i32 @BitCount(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = and i32 %3, 255
  %5 = trunc i32 %4 to i8
  %6 = call i32 @countByte(i8 zeroext %5)
  %7 = load i32, i32* %2
  %8 = lshr i32 %7, 8
  %9 = and i32 %8, 255
  %10 = trunc i32 %9 to i8
  %11 = call i32 @countByte(i8 zeroext %10)
  %12 = add nsw i32 %6, %11
  %13 = load i32, i32* %2
  %14 = lshr i32 %13, 16
  %15 = and i32 %14, 255
  %16 = trunc i32 %15 to i8
  %17 = call i32 @countByte(i8 zeroext %16)
  %18 = add nsw i32 %12, %17
  %19 = load i32, i32* %2
  %20 = lshr i32 %19, 24
  %21 = and i32 %20, 255
  %22 = trunc i32 %21 to i8
  %23 = call i32 @countByte(i8 zeroext %22)
  %24 = add nsw i32 %18, %23
  ret i32 %24
}
