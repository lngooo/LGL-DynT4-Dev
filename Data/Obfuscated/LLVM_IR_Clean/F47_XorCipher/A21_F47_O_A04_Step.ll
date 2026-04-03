define dso_local void @H(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i32, i32* %5
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %5
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %5
  br label %10
20:
  br label %21
21:
  %22 = load i8*, i8** %4
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = icmp ne i8 %26, 0
  br i1 %27, label %28, label %31
28:
  %29 = load i32, i32* %6
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %6
  br label %21
31:
  store i32 0, i32* %7
  br label %33
33:
  %34 = load i32, i32* %7
  %35 = load i32, i32* %5
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %37, label %56
37:
  %38 = load i8*, i8** %4
  %39 = load i32, i32* %7
  %40 = load i32, i32* %6
  %41 = srem i32 %39, %40
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %38, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = load i8*, i8** %3
  %47 = load i32, i32* %7
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = xor i32 %51, %45
  %53 = trunc i32 %52 to i8
  store i8 %53, i8* %49
  %54 = load i32, i32* %7
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %7
  br label %33
56:
  ret void
}
