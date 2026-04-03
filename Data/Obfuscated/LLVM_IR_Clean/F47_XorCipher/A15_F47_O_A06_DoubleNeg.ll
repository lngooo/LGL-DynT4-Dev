define dso_local void @Y(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %8
8:
  %9 = load i8*, i8** %4
  %10 = load i32, i32* %5
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %18
15:
  %16 = load i32, i32* %5
  %17 = add nsw i32 %16, 1
  store i32 %17, i32* %5
  br label %8
18:
  store i32 0, i32* %6
  br label %20
20:
  %21 = load i8*, i8** %3
  %22 = load i32, i32* %6
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i8, i8* %21, i64 %23
  %25 = load i8, i8* %24
  %26 = icmp ne i8 %25, 0
  %27 = xor i1 %26, true
  %28 = xor i1 %27, true
  br i1 %28, label %31, label %29
29:
  br label %51
31:
  %32 = load i8*, i8** %4
  %33 = load i32, i32* %6
  %34 = load i32, i32* %5
  %35 = srem i32 %33, %34
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %32, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = load i8*, i8** %3
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = xor i32 %45, %39
  %47 = trunc i32 %46 to i8
  store i8 %47, i8* %43
  br label %48
48:
  %49 = load i32, i32* %6
  %50 = add nsw i32 %49, 1
  store i32 %50, i32* %6
  br label %20
51:
  ret void
}
