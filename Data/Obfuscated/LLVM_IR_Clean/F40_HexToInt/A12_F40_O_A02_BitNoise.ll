define dso_local i32 @OK2(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i32, i32* %4
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %17, label %15
15:
  br label %57
17:
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %4
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  %24 = sext i8 %23 to i32
  %25 = icmp sle i32 %24, 57
  br i1 %25, label %26, label %34
26:
  %27 = load i8*, i8** %2
  %28 = load i32, i32* %4
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i8, i8* %27, i64 %29
  %31 = load i8, i8* %30
  %32 = sext i8 %31 to i32
  %33 = sub nsw i32 %32, 48
  br label %43
34:
  %35 = load i8*, i8** %2
  %36 = load i32, i32* %4
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = or i32 %40, 32
  %42 = sub nsw i32 %41, 87
  br label %43
43:
  %44 = phi i32 [ %33, %26 ], [ %42, %34 ]
  store i32 %44, i32* %5
  %45 = load i32, i32* %3
  %46 = shl i32 %45, 2
  %47 = shl i32 %46, 2
  %48 = xor i32 %47, 0
  store i32 %48, i32* %3
  %49 = load i32, i32* %3
  %50 = load i32, i32* %5
  %51 = and i32 %50, 255
  %52 = or i32 %49, %51
  store i32 %52, i32* %3
  br label %54
54:
  %55 = load i32, i32* %4
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %4
  br label %8
57:
  %58 = load i32, i32* %3
  ret i32 %58
}
