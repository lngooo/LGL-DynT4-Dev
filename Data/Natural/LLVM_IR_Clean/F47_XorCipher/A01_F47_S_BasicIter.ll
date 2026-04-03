define dso_local void @XorCipher(i8* %0, i8* %1) {
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
  %26 = sext i8 %25 to i32
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %30, label %28
28:
  br label %50
30:
  %31 = load i8*, i8** %4
  %32 = load i32, i32* %6
  %33 = load i32, i32* %5
  %34 = srem i32 %32, %33
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %31, i64 %35
  %37 = load i8, i8* %36
  %38 = sext i8 %37 to i32
  %39 = load i8*, i8** %3
  %40 = load i32, i32* %6
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  %43 = load i8, i8* %42
  %44 = sext i8 %43 to i32
  %45 = xor i32 %44, %38
  %46 = trunc i32 %45 to i8
  store i8 %46, i8* %42
  br label %47
47:
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %6
  br label %20
50:
  ret void
}
