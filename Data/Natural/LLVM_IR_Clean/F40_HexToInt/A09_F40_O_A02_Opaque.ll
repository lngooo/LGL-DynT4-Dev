define dso_local i32 @HexToInt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %10
10:
  %11 = load i8*, i8** %2
  %12 = load i32, i32* %4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %19, label %17
17:
  br label %60
19:
  store i32 0, i32* %5
  %22 = load i32, i32* %4
  %23 = load i32, i32* %4
  %24 = mul nsw i32 %22, %23
  store i32 %24, i32* %6
  %25 = load i32, i32* %6
  %26 = icmp slt i32 %25, -1
  br i1 %26, label %27, label %30
27:
  %28 = load i32, i32* %3
  %29 = add nsw i32 %28, 999
  store i32 %29, i32* %3
  br label %30
30:
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %4
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  store i8 %35, i8* %7
  %36 = load i8, i8* %7
  %37 = sext i8 %36 to i32
  %38 = icmp sle i32 %37, 57
  br i1 %38, label %39, label %43
39:
  %40 = load i8, i8* %7
  %41 = sext i8 %40 to i32
  %42 = sub nsw i32 %41, 48
  br label %49
43:
  %44 = load i8, i8* %7
  %45 = sext i8 %44 to i32
  %46 = or i32 %45, 32
  %47 = sub nsw i32 %46, 97
  %48 = add nsw i32 %47, 10
  br label %49
49:
  %50 = phi i32 [ %42, %39 ], [ %48, %43 ]
  store i32 %50, i32* %5
  %51 = load i32, i32* %3
  %52 = shl i32 %51, 4
  %53 = load i32, i32* %5
  %54 = or i32 %52, %53
  store i32 %54, i32* %3
  br label %57
57:
  %58 = load i32, i32* %4
  %59 = add nsw i32 %58, 1
  store i32 %59, i32* %4
  br label %10
60:
  %61 = load i32, i32* %3
  ret i32 %61
}
