define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %9
9:
  %10 = load i8*, i8** %4
  %11 = load i32, i32* %6
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %6
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %6
  br label %9
19:
  br label %20
20:
  br label %21
21:
  %22 = load i8*, i8** %3
  %23 = load i32, i32* %5
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = icmp ne i8 %26, 0
  br i1 %27, label %29, label %28
28:
  br label %48
29:
  %30 = load i8*, i8** %4
  %31 = load i32, i32* %5
  %32 = load i32, i32* %6
  %33 = srem i32 %31, %32
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %30, i64 %34
  %36 = load i8, i8* %35
  %37 = sext i8 %36 to i32
  %38 = load i8*, i8** %3
  %39 = load i32, i32* %5
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i8, i8* %38, i64 %40
  %42 = load i8, i8* %41
  %43 = sext i8 %42 to i32
  %44 = xor i32 %43, %37
  %45 = trunc i32 %44 to i8
  store i8 %45, i8* %41
  %46 = load i32, i32* %5
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %5
  br label %20
48:
  ret void
}
