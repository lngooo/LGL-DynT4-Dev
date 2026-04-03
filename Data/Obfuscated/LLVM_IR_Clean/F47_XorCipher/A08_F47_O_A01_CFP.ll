define dso_local void @w(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %11
11:
  %12 = load i8*, i8** %4
  %13 = load i32, i32* %7
  %14 = sext i32 %13 to i64
  %15 = getelementptr inbounds i8, i8* %12, i64 %14
  %16 = load i8, i8* %15
  %17 = icmp ne i8 %16, 0
  br i1 %17, label %18, label %21
18:
  %19 = load i32, i32* %7
  %20 = add nsw i32 %19, 1
  store i32 %20, i32* %7
  br label %11
21:
  br label %22
22:
  %23 = load i32, i32* %5
  %24 = icmp ne i32 %23, 2
  br i1 %24, label %25, label %57
25:
  %26 = load i32, i32* %5
  switch i32 %26, label %56 [
    i32 0, label %27
    i32 1, label %37
  ]
27:
  %28 = load i8*, i8** %3
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = sext i8 %32 to i32
  %34 = icmp eq i32 %33, 0
  %35 = zext i1 %34 to i64
  %36 = select i1 %34, i32 2, i32 1
  store i32 %36, i32* %5
  br label %56
37:
  %38 = load i8*, i8** %4
  %39 = load i32, i32* %6
  %40 = load i32, i32* %7
  %41 = srem i32 %39, %40
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %38, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = load i8*, i8** %3
  %47 = load i32, i32* %6
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = xor i32 %51, %45
  %53 = trunc i32 %52 to i8
  store i8 %53, i8* %49
  %54 = load i32, i32* %6
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %6
  store i32 0, i32* %5
  br label %56
56:
  br label %22
57:
  ret void
}
