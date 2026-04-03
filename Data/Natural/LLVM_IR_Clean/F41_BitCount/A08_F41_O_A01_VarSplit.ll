define dso_local i32 @BitCount(i32 %0) {
  %2 = alloca i32
  %3 = alloca i16
  %4 = alloca i16
  %5 = alloca i32
  %6 = alloca i32
  store i32 %0, i32* %2
  %8 = load i32, i32* %2
  %9 = and i32 %8, 65535
  %10 = trunc i32 %9 to i16
  store i16 %10, i16* %3
  %12 = load i32, i32* %2
  %13 = lshr i32 %12, 16
  %14 = trunc i32 %13 to i16
  store i16 %14, i16* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %17
17:
  %18 = load i16, i16* %3
  %19 = zext i16 %18 to i32
  %20 = icmp sgt i32 %19, 0
  br i1 %20, label %21, label %31
21:
  %22 = load i16, i16* %3
  %23 = zext i16 %22 to i32
  %24 = and i32 %23, 1
  %25 = load i32, i32* %5
  %26 = add nsw i32 %25, %24
  store i32 %26, i32* %5
  %27 = load i16, i16* %3
  %28 = zext i16 %27 to i32
  %29 = ashr i32 %28, 1
  %30 = trunc i32 %29 to i16
  store i16 %30, i16* %3
  br label %17
31:
  br label %32
32:
  %33 = load i16, i16* %4
  %34 = zext i16 %33 to i32
  %35 = icmp sgt i32 %34, 0
  br i1 %35, label %36, label %46
36:
  %37 = load i16, i16* %4
  %38 = zext i16 %37 to i32
  %39 = and i32 %38, 1
  %40 = load i32, i32* %6
  %41 = add nsw i32 %40, %39
  store i32 %41, i32* %6
  %42 = load i16, i16* %4
  %43 = zext i16 %42 to i32
  %44 = ashr i32 %43, 1
  %45 = trunc i32 %44 to i16
  store i16 %45, i16* %4
  br label %32
46:
  %47 = load i32, i32* %5
  %48 = load i32, i32* %6
  %49 = add nsw i32 %47, %48
  ret i32 %49
}
