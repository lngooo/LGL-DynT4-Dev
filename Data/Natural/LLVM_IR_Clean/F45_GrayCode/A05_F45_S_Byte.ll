define dso_local i32 @GrayCode(i32 %0) {
  %2 = alloca i32
  %3 = alloca [4 x i8]
  %4 = alloca i32
  %5 = alloca [4 x i8]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %2
  %11 = load i32, i32* %2
  %12 = lshr i32 %11, 1
  store i32 %12, i32* %4
  store i32 0, i32* %6
  br label %15
15:
  %16 = load i32, i32* %6
  %17 = icmp slt i32 %16, 4
  br i1 %17, label %20, label %18
18:
  br label %42
20:
  %21 = load i32, i32* %2
  %22 = load i32, i32* %6
  %23 = mul nsw i32 %22, 8
  %24 = lshr i32 %21, %23
  %25 = and i32 %24, 255
  %26 = trunc i32 %25 to i8
  %27 = load i32, i32* %6
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 %28
  store i8 %26, i8* %29
  %30 = load i32, i32* %4
  %31 = load i32, i32* %6
  %32 = mul nsw i32 %31, 8
  %33 = lshr i32 %30, %32
  %34 = and i32 %33, 255
  %35 = trunc i32 %34 to i8
  %36 = load i32, i32* %6
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds [4 x i8], [4 x i8]* %5, i64 0, i64 %37
  store i8 %35, i8* %38
  br label %39
39:
  %40 = load i32, i32* %6
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %6
  br label %15
42:
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %45
45:
  %46 = load i32, i32* %8
  %47 = icmp slt i32 %46, 4
  br i1 %47, label %50, label %48
48:
  br label %70
50:
  %51 = load i32, i32* %8
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds [4 x i8], [4 x i8]* %3, i64 0, i64 %52
  %54 = load i8, i8* %53
  %55 = zext i8 %54 to i32
  %56 = load i32, i32* %8
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds [4 x i8], [4 x i8]* %5, i64 0, i64 %57
  %59 = load i8, i8* %58
  %60 = zext i8 %59 to i32
  %61 = xor i32 %55, %60
  %62 = load i32, i32* %8
  %63 = mul nsw i32 %62, 8
  %64 = shl i32 %61, %63
  %65 = load i32, i32* %7
  %66 = or i32 %65, %64
  store i32 %66, i32* %7
  br label %67
67:
  %68 = load i32, i32* %8
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %8
  br label %45
70:
  %71 = load i32, i32* %7
  ret i32 %71
}
