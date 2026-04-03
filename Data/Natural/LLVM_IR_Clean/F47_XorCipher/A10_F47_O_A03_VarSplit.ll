define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %10 = load i8*, i8** %3
  store i8* %10, i8** %5
  store i32 0, i32* %6
  store i32 0, i32* %7
  store i32 0, i32* %8
  br label %14
14:
  %15 = load i8*, i8** %4
  %16 = load i32, i32* %8
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = icmp ne i8 %19, 0
  br i1 %20, label %21, label %24
21:
  %22 = load i32, i32* %8
  %23 = add nsw i32 %22, 1
  store i32 %23, i32* %8
  br label %14
24:
  br label %25
25:
  %26 = load i8*, i8** %5
  %27 = load i8, i8* %26
  %28 = icmp ne i8 %27, 0
  br i1 %28, label %29, label %49
29:
  %30 = load i8*, i8** %4
  %31 = load i32, i32* %6
  %32 = load i32, i32* %7
  %33 = add nsw i32 %31, %32
  %34 = load i32, i32* %8
  %35 = srem i32 %33, %34
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %30, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = load i8*, i8** %5
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = xor i32 %42, %39
  %44 = trunc i32 %43 to i8
  store i8 %44, i8* %40
  %45 = load i8*, i8** %5
  %46 = getelementptr inbounds i8, i8* %45, i32 1
  store i8* %46, i8** %5
  %47 = load i32, i32* %6
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %6
  br label %25
49:
  ret void
}
