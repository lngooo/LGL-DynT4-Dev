define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i8*, i8** %4
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
  store i32 0, i32* %6
  br label %22
22:
  %23 = load i8*, i8** %3
  %24 = load i32, i32* %6
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds i8, i8* %23, i64 %25
  %27 = load i8, i8* %26
  %28 = icmp ne i8 %27, 0
  br i1 %28, label %29, label %58
29:
  %31 = load i8*, i8** %3
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = zext i8 %35 to i32
  store i32 %36, i32* %7
  %38 = load i8*, i8** %4
  %39 = load i32, i32* %6
  %40 = load i32, i32* %5
  %41 = srem i32 %39, %40
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %38, i64 %42
  %44 = load i8, i8* %43
  %45 = zext i8 %44 to i32
  store i32 %45, i32* %8
  %46 = load i32, i32* %7
  %47 = load i32, i32* %8
  %48 = xor i32 %46, %47
  %49 = trunc i32 %48 to i8
  %50 = load i8*, i8** %3
  %51 = load i32, i32* %6
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  store i8 %49, i8* %53
  %54 = load i32, i32* %6
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %6
  br label %22
58:
  ret void
}
