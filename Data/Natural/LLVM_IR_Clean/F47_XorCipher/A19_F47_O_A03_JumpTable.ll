define dso_local void @XorCipher(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i8*, i8** %4
  %11 = load i32, i32* %5
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %19
16:
  %17 = load i32, i32* %5
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %5
  br label %9
19:
  store i32 0, i32* %6
  br label %21
21:
  %22 = load i8*, i8** %3
  %23 = load i32, i32* %6
  %24 = sext i32 %23 to i64
  %25 = getelementptr inbounds i8, i8* %22, i64 %24
  %26 = load i8, i8* %25
  %27 = icmp ne i8 %26, 0
  br i1 %27, label %30, label %28
28:
  br label %56
30:
  store i32 1, i32* %7
  %32 = load i32, i32* %7
  %33 = icmp ne i32 %32, 0
  br i1 %33, label %34, label %51
34:
  %35 = load i8*, i8** %4
  %36 = load i32, i32* %6
  %37 = load i32, i32* %5
  %38 = srem i32 %36, %37
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %35, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = load i8*, i8** %3
  %44 = load i32, i32* %6
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i8, i8* %43, i64 %45
  %47 = load i8, i8* %46
  %48 = sext i8 %47 to i32
  %49 = xor i32 %48, %42
  %50 = trunc i32 %49 to i8
  store i8 %50, i8* %46
  br label %51
51:
  br label %53
53:
  %54 = load i32, i32* %6
  %55 = add nsw i32 %54, 1
  store i32 %55, i32* %6
  br label %21
56:
  ret void
}
